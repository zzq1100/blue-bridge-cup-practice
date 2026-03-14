#include<iostream>
#include<algorithm>
using namespace std;

const int N = 5e4 + 10;
typedef long long ll;

struct node
{
	ll w;
	ll s;
}a[N];

bool cmp(node& i, node& j)
{
	return max(-i.s, i.w - j.s) < max(j.w - i.s, -j.s);
}

int main()
{
	int n; cin >> n;

	for (int i = 1; i <= n; i++)
	{
		cin >> a[i].w >> a[i].s;
	}

	sort(a + 1, a + 1 + n, cmp);

	ll ret = -1e9 - 1, w = 0;
	for (int i = 1; i <= n; i++)
	{
		ret = max(ret, w - a[i].s);
		w += a[i].w;
	}

	cout << ret;

	return 0;
}