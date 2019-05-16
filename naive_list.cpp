#include <iostream>
#include <set>
#include <map>
#include <vector>
#include <random>

#include "graph_list.h"

void graph::node_connectivity(int v, bool *visited)
{
    vector<node>::iterator it_v;
    for (auto it = g.begin(); it != g.end(); it++)
    {
        if (it->val == v)
        {
            it_v = it;
            break;
        }
    }

    visited[v] = true;

    for (auto it = it_v->neighbours.begin(); it != it_v->neighbours.end(); it++)
    {
        if (!visited[*it])
        {
            node_connectivity(*it, visited);
        }
    }
}

bool graph::connected()
{
    bool visited[g.size()];

    for (auto it = g.begin(); it != g.end(); it++)
    {
        for (int i = 0; i < g.size(); i++)
        {
            visited[i] = false;
        }

        node_connectivity(it->val, visited);

        for (int i = 0; i < g.size(); i++)
        {
            if (!visited[i]) return false;
        }
    }

    return true;
}

double PCFreq = 0.0;
__int64 CounterStart = 0;


void StartCzas()
{
    LARGE_INTEGER li;
    if(!QueryPerformanceFrequency(&li))
        cout << "QueryPerformanceFrequency failed!\n";

    PCFreq = double(li.QuadPart)/1000.0;

    QueryPerformanceCounter(&li);
    CounterStart = li.QuadPart;
}
double GetCzas()
{
    LARGE_INTEGER li;
    QueryPerformanceCounter(&li);
    return double(li.QuadPart-CounterStart)/PCFreq;
}

int main()
{
    /*graph g(4);
    for (int i = 0; i < 4; i++) {
        g.g[0].val = i;
    }
    vector<int> n1, n2, n3, n4;
    n1.push_back(1);
    n1.push_back(2);
    n1.push_back(3);
    n2.push_back(0);
    n3.push_back(0);
    n3.push_back(3);
    n4.push_back(0);
    n4.push_back(2);

    node node1(0, n1);
    node node2(1, n2);
    node node3(2, n3);
    node node4(3, n4);

    g.g.push_back(node1);
    g.g.push_back(node2);
    g.g.push_back(node3);
    g.g.push_back(node4);

    cout << g.is_bridge(0, 1) << endl;
    cout << g.is_bridge(2, 3) << endl;*/

    int edge, node = 50;
    cin >> edge;

    graph g;
    g.random_graph(edge, node);

    StartCzas();
    for (int i = 0; i < node; ++i)
        for (int j = 0; j < node; ++j)
            g.is_bridge(i, j);
    cout << "czas: " << GetCzas();

    return 0;
}