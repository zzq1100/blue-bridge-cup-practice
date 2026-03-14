#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
using namespace std;

const int N = 1e5 + 10;
long long a[N];
long long n, k;

long long cal(long long m)
{
	long long ret = 0;
	for (int i = 1; i <= n; i++)
	{
		ret += a[i] / m;
	}
	return ret;
}

int main()
{
	cin >> n >> k;

	long long maxlen = 0;
	for (int i = 1; i <= n; i++)
	{
		cin >> a[i];
		maxlen = max(maxlen, a[i]);
	}

	long long left = 0, right = maxlen;
	while (left < right)
	{
		long long mid = (right + left + 1) / 2;
		if (cal(mid) >= k) left = mid;
		else right = mid - 1;
	}


	cout << left << endl;


	return 0;
}


