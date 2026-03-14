#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
using namespace std;

const int N = 1e5 + 10;
long long a[N];

int main()
{
	int n; cin >> n;
	long long sum = 0;
	for (int i = 1; i <= n; i++) cin >> a[i],sum += a[i];
	
	int left = 1, right = 1;
	long long k = 0, ret = 0;
	while (right <= n)
	{
		k += a[right];
		while (2 * k >= sum)
		{
			ret = max(ret, sum - k);
			k -= a[left++];
		}

		ret = max(ret, k);
		right++;
	}

	cout << ret << endl;

	return 0;
}