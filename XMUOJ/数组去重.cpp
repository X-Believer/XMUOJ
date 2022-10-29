//#include<iostream>
//#include<algorithm>
//#include<vector>
//using namespace std;
//int uni(int a[], int size)
//{
//	vector<int> b;
//	int n = size;
//	for (int j = 0; j < size; j++)
//		b.push_back(a[j]);
//	for (int i = 0; i < size;i++)
//	{
//		if (count(b.begin(), b.end(), b[i]) > 1)
//		{
//			n--;
//			b[i] = -1;
//		}
//	}
//	return n;
//}
//int main()
//{
//	int a[1000];
//	int m;
//	int size;
//	cin >> m >> size;
//	for(int i=0;i<m;i++)
//	{
//		cin >> a[i];
//	}
//	cout << m -size+ uni(a, size) << endl;
//	return 0;
//}