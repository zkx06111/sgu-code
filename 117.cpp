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

int n, m, mo;

LL pwr(LL a, LL b){
	LL res = 1;
	a = a % mo;
	for (; b; b >>= 1, (a *= a) %= mo)
		if (b & 1) (res *= a) %= mo;
	return res;
}

int main(){
	scanf("%d%d%d", &n, &m, &mo);
	int ans = 0;
	REP(i, 1, n){
		int x; scanf("%d", &x);
		if (pwr(x, m) == 0) ++ans;
	}
	printf("%d\n", ans);
	return 0;
}