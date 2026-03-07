#include<iostream>
#include<algorithm>
using namespace std;

const int N = 1e5 + 10;
int a[N];
typedef long long ll;


int main()
{
	int n; cin >> n;

	for (int i = 1; i <= n; i++) cin >> a[i];

	sort(a + 1, a + 1 + n);

	ll ret = 0;
	for (int i = 1; i <= n; i++)
	{
		ret += abs(a[i] - a[(1 + n) / 2]);
	}

	cout << ret << endl;

	return 0;
}