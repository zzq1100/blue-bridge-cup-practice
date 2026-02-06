#define _CRT_SECURE_NO_WARNINGS 1


//const int  N = 1e6 + 10;
//int arr1[N], arr2[N], arr3[N];
//string s1, s2;
//int l1, l2, l3;
//
//void add()
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
//	l1 = s1.size(), l2 = s2.size();
//	for (int i = l1 - 1; i >= 0; i--) arr1[l1 - 1 - i] = s1[i] - '0';
//	for (int i = l2 - 1; i >= 0; i--) arr2[l2 - 1 - i] = s2[i] - '0';
//	l3 = max(l1, l2);
//	add();
//	for (int i = l3 - 1; i >= 0; i--) cout << arr3[i];
//	return 0;
//}


//
//const int N = 1e6 + 10;
//int arr1[N], arr2[N], arr3[N];
//
//bool cmp(string& s1, string& s2)
//{
//	if (s1.size() != s2.size()) return s1.size() < s2.size();
//	return s1 < s2;
//}
//
//void sub(int arr1[], int arr2[], int arr3[], int* l3)
//{
//	for (int i = 0; i < *l3; i++)
//	{
//		arr3[i] += arr1[i] - arr2[i];
//		if (arr3[i] < 0)
//		{
//			arr3[i + 1] -= 1;
//			arr3[i] += 10;
//		}
//	}
//	while (*l3 > 1 && arr3[*l3 - 1] == 0) (*l3)--;
//}
//
//int main()
//{
//	string s1, s2;
//	int l1, l2, l3;
//	cin >> s1 >> s2;
//	if (cmp(s1, s2))
//	{
//		swap(s1, s2);
//		cout << "-";
//	}
//	l1 = s1.size(), l2 = s2.size(), l3 = max(l1, l2);
//	for (int i = 0; i < l1; i++) arr1[l1 - 1 - i] = s1[i] - '0';
//	for (int i = 0; i < l2; i++) arr2[l2 - 1 - i] = s2[i] - '0';
//	sub(arr1, arr2, arr3, &l3);
//	for (int i = l3 - 1; i >= 0; i--) cout << arr3[i];
//
//	return 0;
//}

//#include <iostream>
//using namespace std;
//const int N = 1e6 + 10;
//int a[N], b[N], c[N];
//int la, lb, lc;
//
//
//bool cmp(string& x, string& y)
//{
//	
//
//		if (x.size() != y.size()) return x.size() < y.size();
//        return x < y;
//}
//// ⾼精度减法的模板- c = a - b
//void sub(int c[], int a[], int b[])
//{
//    for (int i = 0; i < lc; i++)
//    {
//        c[i] += a[i] - b[i]; // 
//
//
//            if (c[i] < 0)
//            {
//                c[i + 1] -= 1; // 
//
//
//                    c[i] += 10;
//            }
//    }
//    // 
//
//        while (lc > 1 && c[lc - 1] == 0) lc--;
//}
//int main()
//{
//    string x, y; cin >> x >> y;
//
//        if (cmp(x, y))
//        {
//            swap(x, y);
//            cout << '-';
//        }
//    // 1. 
//
//        la = x.size(); lb = y.size(); lc = max(la, lb);
//    for (int i = 0; i < la; i++) a[la - i - 1] = x[i] - '0';
//    for (int i = 0; i < lb; i++) b[lb - i - 1] = y[i] - '0';
//    // 2. 
//     sub(c, a, b); // c = a - b
//
//    // 
//
//        for (int i = lc - 1; i >= 0; i--) cout << c[i];
//    return 0;
//}

//#include<iostream>
//using namespace std;
//
//const int N = 1e6 + 10;
//int arr1[N], arr2[N], arr3[N];
//int l1, l2, l3;
//
//void mul()
//{
//	for (int i = 0; i < l1 - 1; i++)
//	{
//		for (int j = 0; j < l2 - 1; j++)
//		{
//			arr3[i + j] += arr1[i] * arr2[j];
//		}
//	}
//	for (int i = 0; i < l3 - 1; i++)
//	{
//		arr3[i + 1] += arr3[i] / 10;
//		arr3[i] %= 10;
//	}
//}
//
//int main()
//{
//	string s1, s2; 
//	cin >> s1 >> s2;
//	l1 = s1.size(), l2 = s2.size(), l3 = l1 + l2;
//	for (int i = 0; i < l1 - 1; i++) arr1[l1 - 1 - i] = s1[i] - '0';
//	for (int i = 0; i < l2 - 1; i++) arr2[l2 - 1 - i] = s2[i] - '0';
//	mul();
//	for (int i = l3 - 1; i >= 0; i--) cout << arr3[i];
//
//
//
//	return 0;
//}

