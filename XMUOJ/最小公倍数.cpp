//#include<iostream>
//#include<algorithm>
//using namespace std;
//int gcd(int a, int b)
//{
//	return b ? gcd(b, a % b) : a;
//}
//int gb(int a,int b)
//{
//	if (a > b)swap(a, b);
//	int c = gcd(a, b);
//	if (b % a == 0)
//	{
//		return b;
//	}
//
//	else if ((b % a != 0)&&c==1)
//	{
//		return a * b;
//	}
//	else if ((b % a != 0) && c != 1)
//	{
//		int n = b;
//		for (int i = 2; n % a != 0; i++)
//		{
//			n = b;
//			n *= i;
//		}
//		return n;
//	}
//}
//int main()
//{
//	int n;
//	int a[100];
//	while (cin >> n)
//	{
//		for (int i = 0; i < n; i++)
//		{
//			cin >> a[i];
//		}
//		for (int j = 0; j < n-1; j++)
//		{
//			a[j+1]=gb(a[j], a[j + 1]);
//		}
//		cout << a[n-1] << endl;
//	}
//	return 0;
//}