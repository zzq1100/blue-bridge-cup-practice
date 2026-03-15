#include<iostream>
#include<algorithm>
using namespace std;

const int N = 1e6 + 10;

struct node
{
	int l, r;
}a[N];

bool cmp(node& x, node& y)
{
	return x.l < y.l;
}

int main()
{
	int n; cin >> n;

	for (int i = 1; i <= n; i++)
	{
		cin >> a[i].l >> a[i].r;
	}

	sort(a + 1, a + 1 + n, cmp);

	int ret = 1;
	int cur_right = a[1].r;
	for (int i = 2; i <= n; i++)
	{
		if (cur_right > a[i].l)
		{
			cur_right = min(cur_right, a[i].r);
		}
		else
		{
			cur_right = a[i].r;
			ret++;
		}
	}

	cout << ret << endl;

	return 0;
}