#include "graph_matrix.h"

graph::graph(int v) {
    for (int i = 0; i < v; i++) {
        nodes.push_back(i);
    }

    for (int i = 0; i < v; i++) {
        auto row = vector<int>();
        row.assign(v, 0);
        adjacency.push_back(row);
    }
}

graph::graph() = default;

bool graph::is_edge(int v, int w) {
    return static_cast<bool>(adjacency[v][w] * adjacency[w][v]);
}

bool graph::delete_edge(int v, int w) {
    if (!is_edge(v, w)) return false;

    adjacency[v][w] = adjacency[w][v] = 0;
    return true;
}

bool graph::insert_edge(int v, int w) {
    if (is_edge(v, w)) return false;

    adjacency[v][w] = adjacency[w][v] = 1;
    return true;
}

bool graph::is_bridge(int v, int w) {
    if (!delete_edge(v, w)) return false;

    bool result = !connected();

    insert_edge(v, w);

    return result;
}

void graph::random_graph(size_t e, size_t v) {
    assert(2 * e <= v * (v - 1));
    assert(e >= v - 1);

    bool connected = false;

    size_t max_e = v * (v - 1) / 2;
    size_t edges_left;
    vector<int> edges_first = vector<int>();
    vector<int> edges_second = vector<int>();
    for (int i = 0; i < v; i++)
    {
        for (int j = i + 1; j < v; j++)
        {
            edges_first.push_back(i);
            edges_second.push_back(j);
        }
    }

    for (int i = 0; i < v; i++) {
        nodes.push_back(i);
    }

    for (int i = 0; i < v; i++) {
        auto row = vector<int>();
        row.assign(v, 0);
        adjacency.push_back(row);
    }

    size_t pick;
    srand(time(NULL));
    do {
        edges_left = max_e;
        auto edges_first1 = edges_first;
        auto edges_second1 = edges_second;

        for (int i = 0; i < v; i++) {
            adjacency[i].assign(v, 0);
        }

        for (int i = 0; i < e; i++) {
            pick = rand() % (edges_left--);

            int edge_first = edges_first1[pick];
            int edge_second = edges_second1[pick];

            adjacency[edge_first][edge_second] = adjacency[edge_second][edge_first] = 1;

            edges_first1.erase(edges_first1.begin() + pick, edges_first1.begin() + pick + 1);
            edges_second1.erase(edges_second1.begin() + pick, edges_second1.begin() + pick + 1);
        }

        connected = this->connected();
        //print_graph();
        //if (!connected) cout << "Wylosowano graf niespojny" << endl;
    } while (!connected);
}

void graph::print_graph() {
    for (auto it = nodes.begin(); it != nodes.end(); it++) {
        cout << "Wierzcholek: " << *it << endl;
        cout << "Sasiedzi: ";
        for (int i = 0; i < nodes.size(); i++) {
            if (adjacency[*it][i]) {
                cout << i << " ";
            }
        }
        cout << endl;
        cout << "=====================================" << endl;
    }
}
