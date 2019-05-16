#include <profileapi.h>
#include "graph_list.h"

graph::graph(size_t v)
{
    g = vector<node>();
    g.reserve(v);
}

graph::graph()
{
    g = vector<node>();
}

bool graph::is_edge(int v, int w)
{

    bool edge_vw = false;
    bool edge_wv = false;

    for (auto it = g.begin(); it != g.end() && !edge_vw; it++)
    {
        if (it->val == v)
        {
            for (auto iter = it->neighbours.begin(); iter != it->neighbours.end(); iter++)
            {
                if (*iter == w)
                {
                    edge_vw = true;
                    break;
                }
            }
        }
    }

    for (auto it = g.begin(); it != g.end() && !edge_wv; it++)
    {
        if (it->val == w)
        {
            for (auto iter = it->neighbours.begin(); iter != it->neighbours.end(); iter++)
            {
                if (*iter == v)
                {
                    edge_wv = true;
                    break;
                }
            }
        }
    }

    return (edge_vw && edge_wv);
}

bool graph::delete_edge(int v, int w)
{

    if (!is_edge(v, w)) return false;

    for (auto it = g.begin(); it != g.end(); it++)
    {
        if (it->val == v)
        {
            for (auto iter = it->neighbours.begin(); iter != it->neighbours.end(); iter++)
            {
                if (*iter == w)
                {
                    it->neighbours.erase(iter);
                    break;
                }
            }
            break;
        }
    }

    for (auto it = g.begin(); it != g.end(); it++)
    {
        if (it->val == w)
        {
            for (auto iter = it->neighbours.begin(); iter != it->neighbours.end(); iter++)
            {
                if (*iter == v)
                {
                    it->neighbours.erase(iter);
                    break;
                }
            }
            break;
        }
    }

    return true;
}

bool graph::insert_edge(int v, int w)
{

    if (is_edge(v, w)) return false;

    vector<node>::iterator it_v, it_w;

    for (auto it = g.begin(); it != g.end(); it++)
    {
        if (it->val == v) it_v = it;
        if (it->val == w) it_w = it;
    }

    it_v->neighbours.emplace_back(it_w->val);
    it_w->neighbours.emplace_back(it_v->val);

    return true;
}

bool graph::is_bridge(int v, int w)
{
    if (!delete_edge(v, w)) return false;

    bool result = !connected();

    insert_edge(v, w);

    return result;
}

void graph::random_graph(size_t e, size_t v)
{
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


    g.reserve(v);
    for (int i = 0; i < v; i++)
    {
        g.emplace_back(i, vector<int>());
    }

    size_t pick;

    srand(time(NULL));
    do
    {
        edges_left = max_e;
        auto edges_first1 = edges_first;
        auto edges_second1 = edges_second;

        for (auto it = g.begin(); it != g.end(); it++) {
            it->neighbours.clear();
        }

        for (int i = 0; i < e; i++)
        {
            pick = rand() % (edges_left--);

            vector<node>::iterator it_1, it_2;

            int edge_first = edges_first1[pick];
            int edge_second = edges_second1[pick];
            for (auto it = g.begin(); it != g.end(); it++)
            {
                if (it->val == edge_first)
                {
                    it_1 = it;
                }
                if (it->val == edge_second)
                {
                    it_2 = it;
                }
            }
            it_1->neighbours.push_back(edge_second);
            it_2->neighbours.push_back(edge_first);

            edges_first1.erase(edges_first1.begin() + pick, edges_first1.begin() + pick + 1);
            edges_second1.erase(edges_second1.begin() + pick, edges_second1.begin() + pick + 1);
        }

        connected = this->connected();
        //print_graph();
        //if (!connected) cout << "Wylosowano graf niespojny" << endl;
    } while (!connected);
}

void graph::print_graph()
{
    for (auto it = g.begin(); it != g.end(); it++) {
        cout << "Wierzcholek: " << it->val << endl;
        cout << "Sasiedzi: ";
        for (auto iter = it->neighbours.begin(); iter != it->neighbours.end(); iter++) {
            cout << *iter << " ";
        }
        cout << endl;
        cout << "=================================" << endl;
    }
}
