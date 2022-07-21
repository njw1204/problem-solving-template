/*
 * main.cpp - A problem solving template
 * Written in 2022 by Na Jongwoo <njw1204@naver.com>
 *
 * Please visit: https://github.com/njw1204/problem-solving-template
 */

#if defined(__GNUC__)&&!defined(__llvm__)
#pragma GCC target("avx2") // Remove this line if a runtime error occurs
#pragma GCC optimize("O3,unroll-loops")
#endif
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef pair<int, int> pi;
typedef pair<ll, ll> pl;
typedef pair<ull, ull> pul;
#define __CC(a,b) a##b
#define $1 first
#define $2 second
#define endl '\n'
#define DINPUT(t,...) t __VA_ARGS__;INPUT(__VA_ARGS__)
#define REP(i,n) for(int i=0,__REP##i=0;__REP##i<(n);i=++__REP##i)
#define FOR(i,s,e) for(auto i=(s),__FOR##i=(s);__FOR##i<=(e);i=++__FOR##i)
#define TESTCASE(t) DINPUT(int,__TESTCASE##t);FOR(t,1,__TESTCASE##t)
#define MEMZERO(a) memset((a),0,sizeof(a))
#define MEMNEG(a) memset((a),-1,sizeof(a))
#define FILL(c,x) for(auto &__FILL:(c))__FILL=(x)
#define ALL(c) (c).begin(),(c).end()
#define UNSYNC ios_base::sync_with_stdio(false);cin.tie(nullptr)
#define READTXT for(ifstream __READTXT(STDIN);__READTXT&&__READTXT.get()!=-1&&__CC(freo,pen)(STDIN,"r",stdin);)__READTXT.close()
#define STDIN "input.txt" // Change a input file path
template<typename T> const T& MIN(const T& arg) { return arg; } template<typename T, typename... Ts> const T& MIN(const T& arg, const Ts&... args) { return min(arg, MIN(args...)); }
template<typename T> const T& MAX(const T& arg) { return arg; } template<typename T, typename... Ts> const T& MAX(const T& arg, const Ts&... args) { return max(arg, MAX(args...)); }
template<typename T> void INPUT(T& arg) { cin >> arg; } template<typename T, typename... Ts> void INPUT(T& arg, Ts&... args) { cin >> arg; INPUT(args...); }
template<typename T> void PRINT(const T& arg) { cout << arg << '\n'; } template<typename T, typename... Ts> void PRINT(const T& arg, const Ts&... args) { cout << arg << ' '; PRINT(args...); }
ull GCD(ull a, ull b) { while (b != 0) { ull t = a % b; a = b; b = t; } return a; }
ull LCM(ull a, ull b) { return a * b ? a * b / GCD(a, b) : 0; }
ull POW(ull a, ull b, ull m = ULLONG_MAX) { ull r = 1; while (b) { if (b & 1) r = r * a % m; b >>= 1; a = a * a % m; } return r; }

int main() {
    UNSYNC; READTXT;
}
