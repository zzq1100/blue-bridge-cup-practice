#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
#include<algorithm>
using namespace std;

typedef long long ll;
const int N = 2e5 + 10;
ll a[N];

int main()
{
	ll n, c; cin >> n >> c;

	for (ll i = 1; i <= n; i++)
	{
		cin >> a[i];
	}

	sort(a + 1, a + 1 + n);

	ll ret = 0;
	for (int i = 1; i <= n; i++)
	{
		ll b = a[i] - c;
		ret += upper_bound(a + 1, a + i, b) - lower_bound(a + 1, a + i, b);
	}

	cout << ret << endl;


	return 0;
}