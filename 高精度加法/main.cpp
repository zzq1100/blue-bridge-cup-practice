#include <iostream>
using namespace std;

const int N = 1e6 + 10;

string a1, a2;
int add1[N] = {0}, add2[N] = {0}, ret[N] = {0};


int main()
{
    cin >> a1 >> a2;
    int la1 = a1.size(), la2 = a2.size();
    int lret = max(la1, la2);

    for (int i = 0; i < la1; i++) add1[i] = a1[la1 - i - 1] - '0';
    for (int i = 0; i < la2; i++) add2[i] = a2[la2 - i - 1] - '0';

    for (int i = 0; i < lret; i++)
    {
        ret[i] += add1[i] + add2[i];
        ret[i + 1] += ret[i] / 10;
        ret[i] %= 10;
    }

    if (ret[lret]) lret++;

    for (int i = lret - 1; i >= 0; i--) cout << ret[i];

    return 0;
}