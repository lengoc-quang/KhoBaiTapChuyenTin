#include <bits/stdc++.h>
using namespace std;

int f[50005];
string s;
void nhap_tinhf()
{
    getline(cin, s);
    f[0] = 0;
    for (int i = 1; i <= s.length() - 1; i++)
        if (s[i] == '(' && s[i - 1] == '(')
            f[i] = f[i - 1] + 1;
        else
            f[i] = f[i - 1];
}

void giai()
{
    int res = 0;
    for (int i = 1; i <= s.length() - 1; i++)
        if (s[i] == ')' && s[i - 1] == ')')
            res = res + f[i];
    cout << res;
}

int main()
{
    nhap_tinhf();
    giai();
}
