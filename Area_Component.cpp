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
//

// #include<bits/stdc++.h>
using namespace std;

const int N = 1005;
vector<string> adj(N);
vector<vector<bool>> visited(N, vector<bool>(N, false));
int n, m;

bool isValid(int i, int j)
{
    return i >= 0 && i < n && j >= 0 && j < m && !visited[i][j] && adj[i][j] == '.';
}

int dfs(int i, int j)
{
    int w = 1;
    int u[] = {0, 0, -1, 1};
    int v[] = {-1, 1, 0, 0};
    visited[i][j] = true;

    for (int k = 0; k < 4; k++)
    {
        int newx = i + u[k];
        int newyy = j + v[k];
        if (isValid(newx, newyy))
        {
            w = w + dfs(newx, newyy);
        }
    }

    return w;
}

int main()
{

    cin >> n >> m;

    for (int i = 0; i < n; i++)
    {
        cin >> adj[i];
    }

    int cnt = -1;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (adj[i][j] == '.' && !visited[i][j])
            {
                int nodeA = dfs(i, j);
                if (cnt == -1 || nodeA < cnt)
                {
                    cnt = nodeA;
                }
            }
        }
    }

    cout << cnt << endl;

    return 0;
}

/*
5 8
########
#..#...#
####.#.#
#..#...#
########



3
*/