#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
using namespace std;

typedef long long ll;
const int N = 1e5 + 10;
long long a[N];

int main()
{
	int n; cin >> n;

	for (int i = 1; i <= n; i++)
	{
		cin >> a[i];
	}

	int q; cin >> q;

	while (q--)
	{
		ll x, y; cin >> x >> y;

		ll left = 1, right = n;
		while (left < right)
		{
			ll mid = left + (right - left) / 2;
			if (a[mid] >= x) right = mid;
			else left = mid + 1;
		}
		ll retleft = left;
		if (a[left] < x)
		{
			cout << '0' << endl;
			continue;
		}

		left = 1, right = n;
		while (left < right)
		{
			ll mid = left + (right - left + 1) / 2;
			if (a[mid] <= y) left = mid;
			else right = mid - 1;
		}
		ll retright = right;
		if (a[right] > y)
		{
			cout << '0' << endl;
			continue;
		}

		ll ret = retright - retleft + 1;
		cout << ret << endl;
	}

	return 0;
}