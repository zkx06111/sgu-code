#include <bits/stdc++.h>
using namespace std;

int f(int x){
	if (x < 10) return x;
	int s = 0;
	while (x){
		s += x % 10;
		x /= 10;
	}
	return f(s);
}

int main(){
	int T; scanf("%d", &T);
	while (T--){
		int n; scanf("%d", &n);
		int s = 1, p = 0;
		for (int i = 1; i <= n; ++i){
			int x; scanf("%d", &x);
			s = f(f(s) * f(x));
			p = f(f(p) + f(s));
		}
		printf("%d\n", p);
	}
	return 0;
}
