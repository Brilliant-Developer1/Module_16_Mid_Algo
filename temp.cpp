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

You will be given a chessboard of NxM size. You can move anywhere in the chessboard freely. You will be given two cells - the knight's cell K(Ki and Kj), and the queen's cell Q(Qi and Qj). You need to tell the minimum number of steps for the knight to attack the queen if the queen doesn't move.
A knight move in 8 directions.

Input Format

First line will contain T, the number of test cases.
First line of each test case will contain N and M.
Second line of each test case will contain Ki and Kj.
Third line of each test case will contain Qi and Qj.
Constraints

1 <= T <= 100
1 <= N, M <= 100
0 <= Ki, Qi < N
0 <= Kj, Qj < M
Output Format

Output the minimum number of steps for the knight to reach the queen. If you can't reach to queen, print -1.

Sample Input 1:
4
8 8
0 0
7 7
5 6
0 1
0 1
4 4
0 0
0 1
2 2
0 0
0 1

Sample Output 1:
6
0
3
-1



Sample Input 2:
5 4
....
---.
..-.
--..
....
0 1
3 2

Sample Output 2:
YES

for this input:
5 4
....
---.
..-.
--..
....
0 1
3 2

my expected output is :
YES

but this code I'm getting output :

NO

*/