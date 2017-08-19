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

int main(){
	int n; cin >> n;
	if (n < 9) puts("0");
	else if (n == 9) puts("8");
	else{
		printf("72");
		for (int i = 0; i < n - 10; ++i) printf("0");
		puts("");
	}
	return 0;
}