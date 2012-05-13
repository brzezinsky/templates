#include <cstdio>
#include <cmath>
#include <iostream>
#include <cstdlib>
#include <cstring>
#include <string>
#include <map>
#include <set>
#include <list>
#include <vector>
#include <functional>
#include <algorithm>
#include <numeric>
#include <ctime>
#include <cassert>
#include <queue>
using namespace std;

//constants section
const int INF = (int)1e9;
const long long LONG_INF = (long long)1e18;
const double EPS = 1e-7;
const int SPACE = 1, EMPTY = 0, LINE = 2;
//end of constants section

//misc section
template <class T> inline T gcd(T a, T b) { return b ? gcd(b, a % b) : a; }
template <class T> inline T lcm(T a, T b) { return a / gcd(a, b)  * b; }
template <class T> inline T ABS(T a) { return a >= 0 ? a : -a; }
inline double ABS(double a) { if (fabs(a) <= EPS) return 0; else return a > 0 ? a : -a; }
inline long double ABS(long double a) { if (fabs(a) <= EPS) return 0; else return a > 0 ? a : -a; }

char output[3][5] = { "", " ", "\n" };
char outputData[100], *pc;
//end of misc section

//defines
typedef pair<int, int> pii;
typedef pair<long long, long long> pll;
typedef pair<double, double> pdd;

template<class T> struct Point {
        T x, y;
        Point(T x, T y) {
                this->x = x;
                this->y = y;
        }
};
//end defines

//data IO
inline int nextInt() {
        int res = 0;
        int neg = 1;

        char c = 0; while (c != '-' && (c < '0' || c > '9')) c = getchar();
        if (c == '-') c = '0', neg = -1;
        while (c >= '0' && c <= '9') {
                res = res * 10 + c - '0';
                c = getchar();
        }
        return neg * res;
}

inline char nextChar() {
        char c = getchar();
        while (c <= ' ') c = getchar();
        return c;
}

inline long long nextLong() {
        long long res = 0;
        long long neg = 1;

        char c = 0; while (c != '-' && (c < '0' || c > '9')) c = getchar();
        if (c == '-') c = '0', neg = -1;
        while (c >= '0' && c <= '9') {
                res = res * 10 + c - '0';
                c = getchar();
        }
        return neg * res;
}

inline double nextDouble() {
        int up, sgn;
        double ret, base;
        char c = getchar();
        up = 0;
        sgn = 0;
        while ((c < '0' || c > '9') && c != '.' && c != '-') c = getchar();
        if (c == '-') {
                sgn = 1;
                c = getchar();
        }
        ret = 0;
        base = 1;
        while ((c >= '0' && c <= '9') || c == '.') {
                if (up)
                        base *= 10;
                if (c != '.')
                        ret = ret * 10 + (c - '0');
                else
                        up = 1;
                c = getchar();
        }
        if (sgn)
                ret = -ret;
        return ret/base;
}

inline void putInt(int a, int what) {
        sprintf(outputData, "%d", a);
        for (pc = outputData; *pc != 0; ++pc) putchar(*pc);
        for (pc = output[what]; *pc != 0; ++pc) putchar(*pc);
}       

inline void putLong(long long a, int what) {
        sprintf(outputData, "%I64d", a);
        for (pc = outputData; *pc != 0; ++pc) putchar(*pc);
        for (pc = output[what]; *pc != 0; ++pc) putchar(*pc);
}       

inline void putDouble(double a, int what) {
        sprintf(outputData, "%.15lf", a);
        for (pc = outputData; *pc != 0; ++pc) putchar(*pc);
        for (pc = output[what]; *pc != 0; ++pc) putchar(*pc);
}       


//end data IO


int main() {
        return 0;
} 