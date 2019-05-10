#include <iostream>
#include <cstdio>
using namespace std;
int GCD(int x, int y);
int LCM(int x, int y);
int main() {
	int a1, b1, a2, b2;
	scanf("%d/%d %d/%d", &a1, &b1, &a2, &b2);
	int Tmpb1 = LCM(b1, b2);
	int Tmpa1 = a1*(Tmpb1 / b1) + a2*(Tmpb1 / b2);
	int TmpGCD = GCD(Tmpa1, Tmpb1);
	a1 = Tmpa1 / TmpGCD;
	b1 = Tmpb1 / TmpGCD;
	if (b1 == 1) cout << a1 << endl;
	else cout << a1 << "/" << b1 << endl;
	return 0;
}
int GCD(int x, int y) {
	return (!y) ? x : GCD(y, x % y);
}
int LCM(int x, int y) {
	return x*y / GCD(x, y);
}
