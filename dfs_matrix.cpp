#include <iostream>
#include <vector>

#include "graph_matrix.h"

void graph::node_connectivity(int v, bool *visited)
{
    vector<int> stack;
    stack.push_back(v);
    int vertex;

    while (!stack.empty())
    {
        vertex = stack.back();
        stack.pop_back();

        if (!visited[vertex])
        {
            visited[vertex] = true;
            for (int i = 0; i < nodes.size(); i++)
            {
                if (adjacency[vertex][i])
                {
                    stack.push_back(i);
                }
            }
        }
    }
}

bool graph::connected()
{
    bool visited[nodes.size()];

    for (int i = 0; i < nodes.size(); i++)
    {
        visited[i] = false;
    }

    node_connectivity(0, visited);

    for (int i = 0; i < nodes.size(); i++)
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
    cout << "czas: " << GetCzas();

    return 0;
}