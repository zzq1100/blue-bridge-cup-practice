#include<iostream>
#include<algorithm>
using namespace std;


typedef long long ll;
const int N = 1e5 + 10;

struct node
{
	ll t;
	ll d;
}a[N];

bool cmp(node& x, node& y)
{
	return x.t * y.d < y.t * x.d;
}

int main()
{
	int n; cin >> n;
	ll d = 0;
	for (int i = 1; i <= n; i++)
	{
		cin >> a[i].t >> a[i].d;
		d += a[i].d;
	}

	sort(a + 1, a + 1 + n, cmp);

	ll ret = 0;
	for (int i = 1; i <= n; i++)
	{
		d -= a[i].d;
		ret += a[i].t * 2 * d;
	}

	cout << ret;

	return 0;
}