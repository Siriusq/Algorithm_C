#include<iostream>
#include<cmath>
using namespace std;
typedef long long LL;
LL a1, b1, c1, a2, b2, c2;
int main()
{
    scanf("%d.%d.%d %d.%d.%d", &a1, &b1, &c1, &a2, &b2, &c2);
    LL suma = a1 * 17 * 29 + b1 * 29 + c1;
    LL sumb = a2 * 17 * 29 + b2 * 29 + c2;
    LL res = sumb - suma;
    if (res < 0)printf("-"), res = -res;
    printf("%lld.%lld.%lld", res / (29 * 17), res / 29 % 17, res % 29);
    return 0;
}