#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
using namespace std;

const int N = 1e6 + 10;
typedef long long ll;
ll n, m;
ll a[N];

ll cal(ll x)
{
	ll ret = 0;
	for (int i = 1; i <= n; i++)
	{
		if (a[i] - x < 0)
			continue;

		ret += a[i] - x;
	}
	return ret;
}

int main()
{
	cin >> n >> m;

	ll maxheight = 0;
	for (int i = 1; i <= n; i++)
	{
		cin >> a[i];
		maxheight = max(maxheight, a[i]);
	}

	ll left = 0, right = maxheight;
	while (left < right)
	{
		ll mid = (left + right + 1) / 2;
		if (cal(mid) >= m) left = mid;
		else right = mid - 1;
	}

	cout << left << endl;



	return 0;
}