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

You will be given E, the number of edges. For each you will be given A and B which means there is an edge between A and B.

You need to sort all edges in such a way that the edges are sorted in ascending order for A. If multiple edges have same A, then you will sort them according to B in ascending order.

Input Format

First line will contain E.
Next E lines will contain A and B.
Constraints

1 <= E <= 10^5
0 <= A, B <= 10^9
Output Format

Output all the edges in sorted order.


Sample Input 1:
6
3 4
3 2
3 5
1 2
1 4
1 5

Sample Output 1:
1 2
1 4
1 5
3 2
3 4
3 5



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