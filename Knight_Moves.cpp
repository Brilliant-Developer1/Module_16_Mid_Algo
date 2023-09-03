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

const int N = 103;
int directionX[] = {-2, -1, 1, 2, -2, -1, 1, 2};
int directionY[] = {-1, -2, -2, -1, 1, 2, 2, 1};

int n, m, Ki, Kj, Qi, Qj;
bool visited[N][N];
int level[N][N];

bool isValid(int x, int y)
{
    return (x >= 0 && x < n && y >= 0 && y < m);
}

void bfs()
{
    queue<pair<int, int>> que;
    que.push({Ki, Kj});
    visited[Ki][Kj] = true;
    level[Ki][Kj] = 0;

    while (!que.empty())
    {
        pair<int, int> v = que.front();
        que.pop();

        int x = v.first;
        int y = v.second;

        if (x == Qi && y == Qj)
        {
            return;
        }

        for (int i = 0; i < 8; i++)
        {
            int newX = x + directionX[i];
            int newY = y + directionY[i];

            if (isValid(newX, newY) && !visited[newX][newY])
            {
                que.push({newX, newY});
                visited[newX][newY] = true;
                level[newX][newY] = level[x][y] + 1;
            }
        }
    }
}

int main()
{
    int test;
    cin >> test;

    while (test--)
    {
        cin >> n >> m >> Ki >> Kj >> Qi >> Qj;

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                visited[i][j] = false;
                level[i][j] = 0;
            }
        }

        bfs();

        if (visited[Qi][Qj])
        {
            cout << level[Qi][Qj] << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }

    return 0;
}