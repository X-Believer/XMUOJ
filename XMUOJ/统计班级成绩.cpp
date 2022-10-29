//#include<iostream>
//using namespace std;
//int main()
//{
//	int n, m;
//	int a[50][5];
//	double b[5];
//	double stu;
//	double cos;
//	while (cin >> n >> m)
//	{
//		for (int i = 0; i < n; i++)
//		{
//			for (int j = 0; j < m; j++)
//			{
//				cin >> a[i][j];
//			}
//		}
//		for (int i = 0; i < n; i++)
//		{
//			stu = 0;
//			for (int j = 0; j < m; j++)
//			{
//				stu += a[i][j];
//			}
//			if (i == n - 1)printf("%.2f\n", stu / m);
//			else printf("%.2f ", stu / m);
//		}
//
//		for (int j = 0; j < m; j++)
//		{
//			cos = 0;
//			for (int i = 0; i < n; i++)
//			{
//				cos += a[i][j];
//			}
//			b[j] = cos / n;
//			if (j == m - 1)
//				printf("%.2f\n", b[j]);
//			else printf("%.2f ", b[j]);
//		}
//		int h = 0;
//
//		for (int i = 0; i < n; i++)
//		{
//			bool ig = true;
//			for (int j = 0; j < m; j++)
//			{
//				if (a[i][j] < b[j]) ig = false;
//			}
//			if (ig ) h++;
//		}
//		
//		printf("%d\n\n", h);
//	}
//	return 0;
//}