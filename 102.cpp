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

const int N = 10005;
int n, phi[N], pr[N], nop[N];

void sieve(){
	phi[1] = 1;
	REP(i, 2, n){
		if (!nop[i]){
			pr[++pr[0]] = i;
			phi[i] = i - 1;
		}
		for (int j = 1; j <= pr[0] && i * pr[j] <= n; ++j){
			nop[i * pr[j]] = 1;
			if (i % pr[j] == 0){
				phi[i * pr[j]] = phi[i] * pr[j];
				break;
			} else{
				phi[i * pr[j]] = phi[i] * (pr[j] - 1);
			}
		}
	}
}

int main(){
	scanf("%d", &n);
	sieve();
	printf("%d\n", phi[n]);
	return 0;
}