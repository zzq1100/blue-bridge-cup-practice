#include<iostream>
#include<algorithm>
using namespace std;

const int N = 3e4 + 10;
int a[N];

int main()
{
	int w, n; cin >> w >> n;

	for (int i = 1; i <= n; ++i) cin >> a[i];

	sort(a + 1, a + 1 + n);

	int ret = 0;
	int i = 1, j = n;
	while (i <= j)
	{
		if (a[i] + a[j] > w)
		{
			++ret;
			--j;
		}
		else
		{
			++ret;
			++i;
			--j;
		}
	}

	cout << ret << endl;

	return 0;
}