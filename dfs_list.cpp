#include <iostream>
#include <set>
#include <map>
#include <vector>
#include <random>

#include "graph_list.h"

void graph::node_connectivity(int v, bool *visited)
{
    vector<int> stack;
    stack.push_back(v);
    int vertex;

    vector<node>::iterator it_vertex;

    while (!stack.empty())
    {
        vertex = stack.back();
        stack.pop_back();

        if (!visited[vertex])
        {
            for (auto it = g.begin(); it != g.end(); it++)
            {
                if (it->val == vertex)
                {
                    it_vertex = it;
                    break;
                }
            }

            visited[vertex] = true;
            stack.insert(stack.end(), it_vertex->neighbours.begin(), it_vertex->neighbours.end());
        }
    }
}

bool graph::connected()
{

    bool visited[g.size()];

    for (int i = 0; i < g.size(); i++)
    {
        visited[i] = false;
    }

    node_connectivity(0, visited);

    for (int i = 0; i < g.size(); i++) //SPR
    {
        if (!visited[i]) return false;
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
    int edge, node = 50;
    cin >> edge;

    graph g;
    g.random_graph(edge, node);

    StartCzas();
    for (int i = 0; i < node; ++i)
        for (int j = 0; j < node; ++j)
            g.is_bridge(i, j);
    cout << "czas list dfs: " << GetCzas();

    return 0;
}