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

using namespace std;

int main()
{

    return 0;
}
/*
Problem Statement

You will be given N numbers of nodes, E numbers of edges in a graph. For each edge you will be given A, B and W which means there is a connection from A to B for which you need to give W cost. The value of nodes could be from 1 to N.

You will be given a source node S. Then you will be given a test case T, for each test case you will be given a destination node D and a cost DW. You need to tell if you can go to the destination from source using DW cost.

Input Format

First line will contain N and E.
Next E lines will contain A, B and W.
Next line will contain source node S.
Next line will contain T, the number of test cases.
For each test case, you will get D and DW.
Constraints

1 <= N <= 1000
1 <= E <= N*(N-1)
1 <= S <= N
1 <= T <= 1000
1 <= D <= N
0 <= W, DW <= 10^9
Output Format

Ouput "YES" or "NO" for each test case if it is possible to go from S to D in DW cost.

Sample Input:
5 7
1 2 10
1 3 2
3 2 1
2 4 7
3 4 2
4 5 5
2 5 2
1
5
1 0
2 5
3 1
4 4
5 6

Sample Output
YES
YES
NO
YES
YES

*/