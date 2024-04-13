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
    struct Edge {
        int to;
        int weight;
    };

vector<int> minimumTime(int n, vector<vector<int>>& edges, vector<int>& disappear) {
    vector<vector<Edge>> g(n);
    for (auto& edge : edges) {
        int from = edge[0], to = edge[1], weight = edge[2];
        g[from].push_back({to, weight});
        g[to].push_back({from, weight});
    }

    vector<int> answer(n, -1);
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    pq.push({0, 0});

    while (!pq.empty()) {
        auto [time, node] = pq.top();
        pq.pop();
        
        if (answer[node] != -1) continue; 
        
        answer[node] = time;
        for (auto& edge : g[node]) {
            int nextNode = edge.to;
            int nextTime = time + edge.weight;
            if (nextTime < disappear[nextNode]) {
                pq.push({nextTime, nextNode});
            }
        }
    }

    return answer;
}
};