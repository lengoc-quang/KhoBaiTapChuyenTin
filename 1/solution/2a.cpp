#include <bits/stdc++.h>
using namespace std;

int t, res, tmp;
string s;
int d[100];

void xuly()
{
    getline(cin, s);
    for (int i = 0; i < s.size(); i++)
    {
        d[int(s[i])]++;
    }
    res = 0;
    for (int i = 65; i <= 90; i++)
        if (d[i] != 0)
            res++;
    cout << res << endl;
}

int main()
{
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        xuly();
    }
}
