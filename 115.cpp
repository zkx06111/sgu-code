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

int cnt[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
int ans[105][105];
int main(){
	int p = 0;
	REP(i, 1, 12) REP(j, 1, cnt[i]){
		ans[i][j] = ++p;
		p %= 7;
	}
	int a, b;
	cin >> a >> b;
	if (!ans[b][a]) puts("Impossible");
	else printf("%d\n", ans[b][a]);
	return 0;
}