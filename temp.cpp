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

You will be given a 2D matrix of size NxM which will contain only dot(.) and minus(-) where dot(.) means you can go in that cell and minus(.) means you can't.

You can move in only 4 directions (Up, Down, Left and Right).

You will be given the indexes of to cells - S(si,sj) and D(di,dj). You need to tell if these cells are in the same component or not where you can go from S to D.

Input Format

First line will contain N and M.
Next you will be given the 2D matrix.
Next line will contain si and sj.
Last line will contain di and dj.
Constraints

1 <= N, M <= 1000
0 <= si, di < N
0 <= sj, dj < M
Output Format

Output "YES" if those cell are in the same component, "NO" otherwise.



Sample Input 1:
5 4
..-.
---.
..-.
--..
....
0 1
3 2

Sample Output 1:
NO

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