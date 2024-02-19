#include <bits/stdc++.h>
using namespace std;

int n, m, x, y;
long long s;
int a[1000009], f[1000009];

void doc()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
}

void tinh_f()
{
    f[0] = 0;
    for (int i = 1; i <= n; i++)
        f[i] = f[i - 1] + a[i];
}

void xuly()
{
    cin >> n;
    for (int i = 1; i <= m; i++)
    {
        cin >> x >> y;
        s = f[y] - f[x - 1];
        cout << s << endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    doc();
    tinh_f();
    xuly();
}
