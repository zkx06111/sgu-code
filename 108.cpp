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

int n, k, tab[10005], s[5005], id[5005], ans[5005];
bitset<10000005> vis;

bool cmp(int a, int b){
	return s[a] < s[b];
}

int main(){
	REP(i, 1, 10000){
		tab[i] = (i % 10 + i / 10 % 10 + i / 100 % 10 
			+ i / 1000 % 10 + i / 10000 % 10);
	}
	int n, k;
	scanf("%d%d", &n, &k);
	REP(i, 1, k) scanf("%d", &s[i]), id[i] = i;
	sort(id + 1, id + k + 1, cmp);
	int cnt = 0, cur = 1;
	REP(i, 1, n){
		if (!vis[i]){
			++cnt;
			while (cur <= k && s[id[cur]] == cnt){
				ans[id[cur]] = i;
				++cur;
			}
		}
		vis[i + tab[i / 10000] + tab[i % 10000]] = 1;
	}
	printf("%d\n", cnt);
	REP(i, 1, k) printf("%d ", ans[i]);
	puts("");
	return 0;
}