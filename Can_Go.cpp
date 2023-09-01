// #include<bits/stdc++.h>
#include <algorithm>
#include <array>
#include <bitset>
#include <cassert>
#include <cctype>
#include <cerrno>
#include <cfloat>
#include <ciso646>
#include <climits>
#include <clocale>
#include <cmath>
#include <complex>
#include <csetjmp>
#include <csignal>
#include <cstdarg>
#include <cstddef>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <ctime>
#include <cwchar>
#include <cwctype>
#include <deque>
#include <exception>
#include <fstream>
#include <functional>
#include <iomanip>
#include <ios>
#include <iosfwd>
#include <iostream>
#include <istream>
#include <iterator>
#include <limits>
#include <list>
#include <locale>
#include <map>
#include <memory>
#include <new>
#include <numeric>
#include <ostream>
#include <queue>
#include <random>
#include <regex>
#include <set>
#include <sstream>
#include <stack>
#include <stdexcept>
#include <streambuf>
#include <string>
#include <strstream>
#include <tuple>
#include <typeinfo>
#include <type_traits>
#include <unordered_map>
#include <unordered_set>
#include <utility>
#include <valarray>
#include <vector>

// #include<bits/stdc++.h>
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
/*
7
8
1 2 3
1 3 5
3 4 1
4 6 1
2 5 6
5 6 1
5 7 2
3 7 12


Distance 1: 0
Distance 2: 3
Distance 3: 5
Distance 4: 6
Distance 5: 8
Distance 6: 7
Distance 7: 10

*/