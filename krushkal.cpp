// WAP IN C++ TO COMPUTE MST USING KRUSHKAL ALGORITHM.
#include <iostream>
using namespace std;

int i, j, k, a, b, u, v, n, ne = 1;
int mincost = 0, cost[9][9], parent[9];

int find(int);

int uni(int i, int j)
{
    if (i != j)
    {
        parent[i] = j;
        return 1;
    }
    return 0;
}

int main()
{
    cout << "Implementation of Kruskal's Algorithm" << endl;
    cout << "Enter the number of vertices: ";
    cin >> n;
    cout << "Enter the cost adjacency matrix: " << endl;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            cin >> cost[i][j];
            if (cost[i][j] == 0)
            {
                cost[i][j] = 999;
            }
        }
    }
    cout << "The edges of the minimum cost spanning tree are:" << endl;
    while (ne < n)
    {
        int minEdge = 999; // Renamed the min variable
        for (i = 1; i <= n; i++)
        {
            for (j = 1; j <= n; j++)
            {
                if (cost[i][j] < minEdge)
                {
                    minEdge = cost[i][j];
                    a = u = i;
                    b = v = j;
                }
            }
        }
        u = find(u);
        v = find(v);
        if (uni(u, v))
        {
            cout << ne++ << " edge(" << a << "," << b << ") = " << minEdge << endl;
            mincost += minEdge;
        }
        cost[a][b] = cost[b][a] = 999;
    }
    cout << "Minimum cost = " << mincost << endl;
    return 0;
}

int find(int i)
{
    while (parent[i])
        i = parent[i];
    return i;
}
