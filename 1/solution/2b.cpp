#include <bits/stdc++.h>
using namespace std;

int d[10000000];
string s;

int main()
{
    getline(cin, s);
    for (int i = 0; i <= s.length() - 1; i++)
    {
        d[int(s[i])]++;
    }
    for (int i = 65; i <= 90; i++)
    {
        if (d[i] > 0)
            cout << char(i) << " " << d[i] << endl;
    }
}
