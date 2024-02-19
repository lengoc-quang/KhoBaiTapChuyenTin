#include <bits/stdc++.h>
using namespace std;

int n, kq, x;
int a[1000000 + 10];
int d[1000000 + 10];

void nhap()
{
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &x);
        d[x]++;
    }
}
void xuli()
{
    for (int i = 1; i <= n; i++)
        if (d[i] == 0)
            kq++;
    printf("%d", kq);
}
int main()
{
    nhap();
    xuli();
}
