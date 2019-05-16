#include <iostream>
#include <vector>
#include <cassert>
#include <ctime>
#include <climits>
#include <cfenv>
#include <windows.h>
#include <iomanip>

#ifndef ALG_PIT_GRAPH_MATRIX_H
#define ALG_PIT_GRAPH_MATRIX_H


using namespace std;

typedef vector<vector<int>> matrix;

struct graph {
    vector<int> nodes;
    matrix adjacency;

    explicit graph(int v);

    graph();

    bool is_bridge(int v, int w);

    void random_graph(size_t e, size_t v);

    void print_graph();
private:
    void node_connectivity(int v, bool* visited);

    bool is_edge(int v, int w);

    bool delete_edge(int v, int w);

    bool insert_edge(int v, int w);

    bool connected();
};


#endif //ALG_PIT_GRAPH_MATRIX_H
