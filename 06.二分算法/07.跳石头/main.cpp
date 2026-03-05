#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
using namespace std;

typedef long long LL;
const int N = 5e4 + 10;
LL l, n, m;
LL a[N];

LL cal(LL x)
{
	LL ret = 0;

	for (int i = 0; i <= n; i++)
	{
		int j = i + 1;
		while (j <= n && a[j] - a[i] < x) j++;
		ret += j - i - 1;
		i = j - 1;
	}
	return ret;
}

int main()
{
	cin >> l >> n >> m;

	for (int i = 1; i <= n; i++) cin >> a[i];
	a[n + 1] = l;
	n++;

	LL left = 1, right = l;
	while (left < right)
	{
		LL mid = (left + right + 1) / 2;
		if (cal(mid) <= m) left = mid;
		else right = mid - 1;
	}

	cout << left << endl;
	return 0;
}