//#include<iostream>
//using namespace std;
//
//
//const int N = 1e6 + 10;
//int arr1[N], arr2[N], arr3[N];
//string s1, s2;
//int l1, l2, l3;
//
//void Add()
//{
//	for (int i = 0; i < l3; i++)
//	{
//		arr3[i] += arr1[i] + arr2[i];
//		if (arr3[i] >= 10)
//		{
//			arr3[i + 1] += arr3[i] / 10;
//			arr3[i] %= 10;
//		}
//	}
//	if (arr3[l3] != 0) l3++;
//}
//
//int main()
//{
//	cin >> s1 >> s2;
//	l1 = s1.size(), l2 = s2.size(), l3 = max(l1, l2);
//	for (int i = 0; i < l1; i++) arr1[l1 - 1 - i] = s1[i] - '0';
//	for (int i = 0; i < l2; i++) arr2[l2 - 1 - i] = s2[i] - '0';
//	Add();
//	for (int i = l3 - 1; i >= 0; i--) cout << arr3[i];
//	return 0;
//}


//#include<iostream>
//using namespace std;
//
//
//const int N = 1e6 + 10;
//int arr1[N], arr2[N], arr3[N];
//string s1, s2;
//int l1, l2, l3;
//
//bool Swap()
//{
//	if (s1.size() == s2.size())
//		return s1 < s2;
//	else
//		return s1.size() < s2.size();
//}
//void Sub()
//{
//	for (int i = 0; i < l3; i++)
//	{
//		arr3[i] += arr1[i] - arr2[i];
//		if (arr3[i] < 0)
//		{
//			arr3[i] += 10;
//			arr3[i + 1] -= 1;
//		}
//	}
//	while (l3 > 1 && arr3[l3 - 1] == 0) l3--;
//}
//
//int main()
//{
//	cin >> s1 >> s2;
//	if (Swap())
//	{
//		swap(s1, s2);
//		cout << '-';
//	}
//	l1 = s1.size(), l2 = s2.size(), l3 = max(l1, l2);
//	for (int i = 0; i < l1; i++) arr1[l1 - 1 - i] = s1[i] - '0';
//	for (int i = 0; i < l2; i++) arr2[l2 - 1 - i] = s2[i] - '0';
//	Sub();
//	for (int i = l3 - 1; i >= 0; i--) cout << arr3[i];
//
//	return 0;
//}


#include<iostream>
using namespace std;


const int N = 1e6 + 10;
int arr1[N], arr2[N], arr3[N];
string s1, s2;
int l1, l2, l3;

void Mul()
{
	for (int i = 0; i < l3; i++)
	{
		for (int j = 0; j < l3; j++)
		{
			arr3[i + j] += arr1[i] * arr2[j];
		}
	}
	for (int i = 0; i < l3; i++)
	{
		arr3[i + 1] += arr3[i] / 10;
		arr3[i] %= 10;
	}
	while (l3 > 1 && arr3[l3 - 1] == 0) l3--;
}

int main()
{
	cin >> s1 >> s2;
	l1 = s1.size(), l2 = s2.size(), l3 = l1 + l2;
	for (int i = 0; i < l1; i++) arr1[l1 - 1 - i] = s1[i] - '0';
	for (int i = 0; i < l2; i++) arr2[l2 - 1 - i] = s2[i] - '0';
	Mul();
	for (int i = l3 - 1; i >= 0; i--) cout << arr3[i];
	return 0;
}