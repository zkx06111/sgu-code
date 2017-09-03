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

int n;
pii a[20005];

int main(){
	scanf("%d", &n);
	REP(i, 1, n) scanf("%d%d", &a[i].fi, &a[i].se);
	sort(a + 1, a + n + 1);
	int mx = -1, ans = 0;
	REP(i, 1, n){
		int j = i;
		while (j <= n && a[j].fi == a[i].fi){
			if (mx > a[j].se) ++ans;
			++j;
		}
		i = j - 1;
		mx = max(mx, a[i].se);
	}
	printf("%d\n", ans);
	return 0;
}