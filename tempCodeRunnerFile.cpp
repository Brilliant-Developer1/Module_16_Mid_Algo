#include<bits/stdc++.h>
using namespace std;

typedef pair<int, int> pii;
const int N = 1e3 + 5;
const int INF = 1e9 + 10;
vector<vector<pii>> adj(N);

vector<int> dijkstra(int n, int source)

{
    vector<int> dist(N, INF);
    dist[source] = 0;
    priority_queue<pii, vector<pii>, greater<pii>> pq;

    pq.push({dist[source], source});

    while (!pq.empty())
    {
        int u = pq.top().first;
        int node = pq.top().second;
        pq.pop();

        if (u > dist[node])
            continue;

        for (pii vpair : adj[node])
        {
            int v = vpair.first;
            int w = vpair.second;
            int newD = dist[node] + w;

            if (newD < dist[v])
            {
                dist[v] = newD;
                pq.push({newD, v});
            }
        }
    }
    return dist;
}

int main()
{

    int n, m;
    cin >> n >> m;

    for (int i = 0; i < m; i++)
    {
        int u, v, w;
        cin >> u >> v >> w;

        adj[u - 1].push_back({v - 1, w});
    }

    int s, d;
    cin >> s >> d;

    while (d--)
    {
        int a, b;
        cin >> a >> b;

        vector<int> dist = dijkstra(N, s - 1);

        if (dist[a - 1] <= b)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}