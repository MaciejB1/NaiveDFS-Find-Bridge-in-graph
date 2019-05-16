#include <iostream>
#include <set>
#include <map>
#include <vector>
#include <random>
#include <ctime>
#include <cassert>
#include <climits>
#include <cfenv>
#include <windows.h>
#include <iomanip>

#ifndef ALG_PIT_GRAPH_LIST_H
#define ALG_PIT_GRAPH_LIST_H

using namespace std;

struct node
{
    int val;
    vector<int> neighbours;

    node(int _val, vector<int> n)
    {
        val = _val;
        neighbours = n;
    }
};

struct graph
{
    vector<node> g;

    explicit graph(size_t v);

    graph();

    bool is_bridge(int v, int w);

    void random_graph(size_t e, size_t v);

    void print_graph();

private:
    void node_connectivity(int v, bool *visited);

    bool is_edge(int v, int w);

    bool delete_edge(int v, int w);

    bool insert_edge(int v, int w);

    bool connected();
};

#endif //ALG_PIT_GRAPH_LIST_H
