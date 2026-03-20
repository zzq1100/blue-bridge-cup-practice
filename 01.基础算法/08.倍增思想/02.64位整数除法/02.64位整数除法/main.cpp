#include<iostream>

using namespace std;

typedef long long ll;

ll qpow(ll a, ll b, ll p)
{
	ll ret = 0;
	while (b)
	{
		if (b & 1) ret = (ret + a) % p;
		a = (a + a) % p;
		b >>= 1;
	}
	return ret;
}

int main()
{
	ll a, b, p; cin >> a >> b >> p;

	cout << qpow(a, b, p) << endl;



	return 0;
}