#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define LT "a"

string s;

void Move_left(int k)
{
    string s = "1234567812345678";
    for (int i = k; i < k + 8; i++)
        cout << s[i];
}

void giai()
{
    int l = 0, r = 0;
    for (int i = 0; i <= s.size() - 1; i++)
    {
        if (s[i] == 'L')
            l++;
        else
            r++;
    }
    if (l >= r)
        l = (l - r) % 8;
    else
    {
        r = (r - l) % 8;
        l = 8 - r;
    }
    Move_left(l);
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> s;
    giai();
}
