#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
#include<algorithm>
using namespace std;

const int N = 1e5 + 10;
int a[N], b[N];

int main()
{
	int m, n; cin >> m >> n;

	a[0] = -1e7;
	if (m == 1) a[2] = 1e7;

	for (int i = 1; i <= m; i++)
	{
		cin >> a[i];
	}

	for (int i = 1; i <= n; i++)
	{
		cin >> b[i];
	}

	sort(a + 1, a + 1 + m);

	long long ret = 0;
	for (int i = 1; i <= n; i++)
	{
		int left = 1, right = m;
		while (left < right)
		{
			int mid = (right + left) / 2;
			if (a[mid] >= b[i]) right = mid;
			else left = mid + 1;
		}
		ret += min(abs(b[i] - a[right]), abs(b[i] - a[right - 1]));
	}

	cout << ret << endl;

	return 0;
}