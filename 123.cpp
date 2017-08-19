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

LL f[41];
int main(){
	int n;
	scanf("%d", &n);
	f[1] = 1, f[2] = 1;
	REP(i, 3, n) f[i] = f[i - 1] + f[i - 2];
	LL ans = 0;
	REP(i, 1, n) ans += f[i];
	printf("%lld\n", ans);
	return 0;
}