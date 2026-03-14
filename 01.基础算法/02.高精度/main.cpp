
/////////////////////////////////高精度加法//////////////////////////////////////////////////////////

//#include<iostream>
//using namespace std;
//
//const int N = 1e6 + 10;
//string s1, s2;
//int arr1[N], arr2[N], arr3[N];
//void add(int arr1[], int arr2[], int arr3[], int* l)
//{
//	for (int i = 0; i < *l; i++)
//	{
//		arr3[i] += arr1[i] + arr2[i];
//		arr3[i + 1] = arr3[i] / 10;
//		arr3[i] %= 10;
//	}
//	if (arr3[*l]) (*l)++;
//}
//
//int main()
//{
//	cin >> s1 >> s2;
//	int l1 = s1.size(), l2 = s2.size();
//	for (int i = l1 - 1; i >= 0; i--) arr1[l1 - 1 - i] = s1[i] - '0';
//	for (int i = l2 - 1; i >= 0; i--) arr2[l2 - 1 - i] = s2[i] - '0';
//	int l3 = max(l1, l2);
//	add(arr1, arr2, arr3, &l3);
//	
//	for (int i = l3 - 1; i >= 0; i--) cout << arr3[i];
//	return 0;
//}

////////////////////////////////////高精度减法///////////////////////////////////////////////////////
//#include<iostream>
//using namespace std;
//
//const int N = 1e6 + 10;
//int arr1[N], arr2[N], arr3[N];
//string s1, s2;
//int l1, l2, l3;
//
//void sub(int* arr1, int* arr2)
//{
//	for (int i = 0; i < l3; i++)
//	{
//		if (arr1[i] - arr2[i] < 0)
//		{
//			arr3[i] += (10 + arr1[i] - arr2[i]);
//			arr1[i + 1] -= 1;
//		}
//		else arr3[i] = arr1[i] - arr2[i];
//	}
//	while (l3 > 1 && arr3[l3 - 1] == 0) l3--;
//}
//
//int main()
//{
//	cin >> s1 >> s2;
//	l1 = s1.size(), l2 = s2.size();
//	l3 = max(l1, l2);
//	int flag = 1;
//	if (l1 <= l2 && s1 < s2) flag = -1;
//	else if (l1 < l2) flag = -1;
//	for (int i = 0; i < l1; i++) arr1[l1 - 1 - i] = s1[i] - '0';
//	for (int i = 0; i < l2; i++) arr2[l2 - 1 - i] = s2[i] - '0';
//	if (flag > 0) sub(arr1, arr2);
//	else if (flag < 0)
//	{
//		sub(arr2, arr1);
//		cout << '-';
//	}
//	else sub(arr2, arr1);
//	for (int i = l3 - 1; i >= 0; i--)
//	{
//		cout << arr3[i];
//	}
//
//	return 0;
//}


////////////////////////////////////高精度乘法///////////////////////////////////////////////////////
//#include<iostream>
//using namespace std;
//
//const int N = 1e6 + 10;
//int arr1[N], arr2[N], arr3[N];
//string s1, s2;
//int l1, l2, l3;
//
//void mul(int* arr1, int* arr2)
//{
//	for (int i = 0; i < l1; i++)
//	{
//		for (int j = 0; j < l2; j++)
//		{
//			arr3[i + j] += arr1[i] * arr2[j];
//		}
//	}
//	for (int i = 0; i < l3; i++)
//	{
//		arr3[i + 1] += arr3[i] / 10;
//		arr3[i] %= 10;
//	}
//	while (l3 > 1 && arr3[l3 - 1] == 0) l3--;
//}
//
//int main()
//{
//	cin >> s1 >> s2;
//	l1 = s1.size(), l2 = s2.size();
//	l3 = l1 + l2;
//	for (int i = 0; i < l1; i++) arr1[l1 - 1 - i] = s1[i] - '0';
//	for (int i = 0; i < l2; i++) arr2[l2 - 1 - i] = s2[i] - '0';
//	mul(arr1, arr2);
//	for (int i = l3 - 1; i >= 0; i--) cout << arr3[i];
//	return 0;
//}


////////////////////////////////////高精度除法///////////////////////////////////////////////////////
#include<iostream>
using namespace std;

const int N = 1e6 + 10;
int arr1[N], a2, arr3[N];
string s1;
int l1,l3;

void div(int* arr1)
{
	long long t = 0;
	for (int i = l1 - 1; i >= 0; i--)
	{
		t = t * 10 + arr1[i];
		arr3[i] = t / a2;
		t %= a2;
	}
	while (l3 > 1 && arr3[l3 - 1] == 0) l3--;
}

int main()
{
	cin >> s1 >> a2;
	l1 = s1.size();
	for (int i = 0; i < l1; i++) arr1[l1 - i - 1] = s1[i] - '0';
	l3 = l1;
	div(arr1);
	for (int i = l3 - 1; i >= 0; i--) cout << arr3[i];
	return 0;
}

