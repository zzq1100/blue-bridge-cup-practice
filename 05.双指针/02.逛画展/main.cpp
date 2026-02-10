#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
#include<unordered_map>
using namespace std;

const int N = 1e6 + 10;
int a[N] = { 0 };
int mp[N] = { 0 };
int kind = 0;

int main()
{
	int n, m;
	cin >> n >> m;

	for (int i = 1; i <= n; i++)
	{
		cin >> a[i];
	}

	int left = 1, right = 1, ret = n, len = 0, begin = 1, end = n;


	while (right <= n)
	{
		if (mp[a[right]]++ == 0) kind++;

		while (kind == m)
		{
			len = right - left + 1;
			if (ret > len)
			{
				ret = len;
				begin = left;
				end = right;
			}
			if (mp[a[left]]-- == 1) kind--;
			left++;
		}

		right++;

	}

	cout << begin << " " << end << endl;

	return 0;
}