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

int K, n, ai[8005];

int main(){
	scanf("%d%d", &K, &n);
	REP(i, 1, n) scanf("%d", &ai[i]);
	sort(ai + 1, ai + n + 1);
	int cur = 0, ans = 2;
	REP(i, 1, n){
		if (cur == K || ai[i] / 1000 != ai[i - 1] / 1000){
			cur = 0;
			++ans;
		}
		++cur;
	}
	printf("%d\n", ans);
	return 0;
}