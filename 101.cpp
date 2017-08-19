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

const int N = 105;
int n, fr[7], m, du[7], ai[N], bi[N], vis[N], ans[N];

struct Edge{
	int to, w, nxt;
} E[N << 1];

void addedge(int u, int v, int id){
	E[++m] = (Edge){v, id, fr[u]}; fr[u] = m;
	E[++m] = (Edge){u, id, fr[v]}; fr[v] = m;
	++du[u]; ++du[v];
}

void euler(int x){
	for (int i = fr[x]; i; i = E[i].nxt) if (!vis[E[i].w]){
		vis[E[i].w] = 1;
		euler(E[i].to);
		ans[++ans[0]] = E[i].w;
		if (ai[E[i].w] != x) ans[ans[0]] = -ans[ans[0]];
	}
}

int main(){
	scanf("%d", &n);
	REP(i, 1, n){
		scanf("%d%d", &ai[i], &bi[i]);
		addedge(ai[i], bi[i], i);
	}
	int s = 0, cnt = 0;
	REP(i, 0, 6) if (du[i] & 1){
		++cnt; s = i;
	}
	if (cnt > 2) return puts("No solution"), 0;
	if (cnt == 0) REP(i, 0, 6) if (du[i] > 0) s = i;
	euler(s);
	REP(i, 1, n) if (!vis[i]) return puts("No solution"), 0;
	PER(i, n, 1){
		if (ans[i] > 0) printf("%d +\n", ans[i]);
		else printf("%d -\n", -ans[i]);
	}
	return 0;
}