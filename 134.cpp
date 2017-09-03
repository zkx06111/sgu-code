#include <bits/stdc++.h>
#define REP(i, a, b) for (int i = a; i <= b; ++i)
#define PER(i, a, b) for (int i = a; i >= b; --i)
#define RVC(i, S) for (int i = 0; i < S.size(); ++i)
#define mp make_pair
#define pb push_back
#define debug(...) fprintf(stderr, __VA_ARGS__)
#define fi first
#define se second
using namespace std;
 
typedef long long LL;
typedef pair<int, int> pii;
typedef vector<int> VI;

const int N = 20005;
int n, sz[N], val[N], ans, cnt;
VI to[N];

void dfs(int x, int fa){
	sz[x] = 1;
	RVC(i, to[x]) if (to[x][i] != fa){
		dfs(to[x][i], x);
		sz[x] += sz[to[x][i]];
		val[x] = max(val[x], sz[to[x][i]]);
	}
	val[x] = max(val[x], n - sz[x]);
	ans = min(ans, val[x]);
}

int main(){
	scanf("%d", &n);
	REP(i, 2, n){
		int a, b;
		scanf("%d%d", &a, &b);
		to[a].pb(b);
		to[b].pb(a);
	}
	ans = n;
	dfs(1, 0);
	int cnt = 0;
	REP(i, 1, n) if (val[i] == ans) ++cnt;
	printf("%d %d\n", ans, cnt);
	REP(i, 1, n) if (val[i] == ans) printf("%d ", i);
	puts("");
	return 0;
}