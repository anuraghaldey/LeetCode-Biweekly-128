#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
long double PI = acos(-1.0);
#define fastio()                      \
	ios_base::sync_with_stdio(false); \
	cin.tie(NULL)
#define pb push_back
#define NL cout<<endl;
#define ppb pop_back
#define pf push_front
#define ppf pop_front
#define all(x) (x).begin(), (x).end()
#define ff(i, l, r) for(int i=l;i<r;i++)
#define fr first
#define sc second
#define vii vector<vector<int>>
#define vi vector<int>
#define pii pair<int, int>
#define mem1(a) memset(a, -1, sizeof(a))
#define mem0(a) memset(a, 0, sizeof(a))
#define ppc __builtin_popcount
#define ppcll __builtin_popcountll
#define YES \
	yes();          \
	return
#define NO\
	no();          \
	return

const int MOD = (1e9 + 9);
/*1sec -10^7-10^8 OPS APPROX
int- (-10^-9 to 10^9)RANGE
long (-10^12 to 10^12)RANGE
long long(-10^18 to 10^18)RANGE
(a+b)%M=((a%M)+(b%M))%M
(a*b)%M=((a%M)*(b%M))%M
(a-b)%M=((a%M)-(b%M)+M)%M
(a/b)%M=((a%M)*(b^-1)%M)%M
lower_bound:-LOGN
interator
--FIRST ELEMENT IN AR >=x
--NO OF ELEMENTS<x
upper_bound:-
iterator
--FIRST ELEMENT IN AR>x
--NO OF ELEMENTS<=x
*/
#ifdef ANURAG
#define debug(x)        \
	cerr << #x << ": "; \
	_print(x);          \
	cerr << endl;
#else
#define debug(x) ;
#endif
class Solution {
public:
    int scoreOfString(string s) {
         int score = 0;
    for (int i = 1; i < s.length(); ++i) {
        score += abs(s[i] - s[i - 1]);
    }
    return score;
    }
};