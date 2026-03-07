#include<iostream>
using namespace std;

typedef long long ll;
const int N = 2e5 + 10;
int a[N];

int main()
{
	int n; cin >> n;
	for (int i = 1; i <= n; i++) cin >> a[i];

	ll sum = 0, ret = -1e6;
	for (int i = 1; i <= n; i++)
	{
		sum += a[i];
		ret = max(sum, ret);
		if (sum < 0) sum = 0;
	}

	cout << ret << endl;


	return 0;
}