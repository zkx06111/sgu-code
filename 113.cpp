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

int is_p(int x){
	for (int i = 2; i * i <= x; ++i)
		if (x % i == 0) return 0;
	return 1;
}

int main(){
	int n; scanf("%d", &n);
	REP(i, 1, n){
		int x, fl = 0; scanf("%d", &x);
		for (int j = 2; j * j <= x; ++j)
			if (x % j == 0){
				if (is_p(j) && is_p(x / j))
					fl = 1;
				else fl = 0;
				break;
			}
		puts(fl ? "Yes" : "No");
	}
	return 0;
}