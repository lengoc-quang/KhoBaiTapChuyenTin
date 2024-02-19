#include <bits/stdc++.h>
using namespace std;

#define maxn 1000005

int n;
int a[maxn];
int minn[maxn], maxx[maxn];

void nhap()
{
	cin >> n;
	for (int i = 1; i <= n; i++)
		cin >> a[i];
}

void tao_min()
{
	minn[1] = a[1];
	for (int i = 2; i <= n; i++)
	{
		minn[i] = min(minn[i - 1], a[i]);
	}
}

void tao_max()
{
	maxx[n] = a[n];
	for (int i = n - 1; i >= 1; i--)
	{
		maxx[i] = max(maxx[i + 1], a[i]);
	}
}

void giai()
{
	tao_min();
	tao_max();
	int ans = 0;
	for (int i = 2; i <= n; i++)
	{
		ans = max(ans, maxx[i] - minn[i - 1]);
	}
	cout << ans << endl;
}

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	nhap();
	giai();
}
