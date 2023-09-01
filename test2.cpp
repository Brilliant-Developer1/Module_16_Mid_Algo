#include <iostream>
#include <vector>
#include <queue>
#include <climits>

using namespace std;

typedef pair<int, int> pii;

const int INF = INT_MAX;

vector<vector<pii>> graph; // Adjacency list representation

vector<int> dijkstra(int N, int S)
{
    vector<int> distance(N, INF);
    distance[S] = 0;
    priority_queue<pii, vector<pii>, greater<pii>> pq;
    pq.push({0, S});

    while (!pq.empty())
    {
        int dist = pq.top().first;
        int node = pq.top().second;
        pq.pop();

        if (dist > distance[node])
            continue;

        for (const auto &edge : graph[node])
        {
            int neighbor = edge.first;
            int weight = edge.second;
            int new_dist = distance[node] + weight;

            if (new_dist < distance[neighbor])
            {
                distance[neighbor] = new_dist;
                pq.push({new_dist, neighbor});
            }
        }
    }

    return distance;
}

int main()
{
    int N, E;
    cin >> N >> E;
    graph.resize(N);

    for (int i = 0; i < E; ++i)
    {
        int A, B, W;
        cin >> A >> B >> W;
        graph[A - 1].push_back({B - 1, W});
    }

    int S;
    cin >> S;

    int T;
    cin >> T;

    while (T--)
    {
        int D, DW;
        cin >> D >> DW;

        vector<int> shortest_distances = dijkstra(N, S - 1);

        if (shortest_distances[D - 1] <= DW)
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
