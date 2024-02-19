#include <bits/stdc++.h>
using namespace std;

int n, d[10000];
long long s = 0;

void nhap()
{
    int x;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> x;
        d[x - 10102010]++;
    }
}
void giai()
{
    for (int i = 0; i <= 8000; i++)
    {
        if (d[i] > 0)
        {
            if (d[i] <= 5)
                s = s + 100;
            else
                s = s + 100 + d[i] - 5;
        }
    }
    cout << s;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    nhap();
    giai();
}
