//#include<iostream>
//#include<cstdio>
//using namespace std;
//int main()
//{
//	int m, n, num, c;
//		int g=0;
//	
//	while (scanf("%d%d",&m,&n)!=EOF)
//	{
//		for (int i = m; i < n + 1; i++)
//		{
//			num = i;
//			int a = 0;
//			int b = 0;
//			int c = 0;
//			a = num % 10;
//			b = num / 10 % 10;
//			c = num / 100 % 10;
//
//			if (a * a * a + b * b * b + c * c * c == num)
//			{
//				
//				if (g > 0)cout << " ";
//				cout << num;
//				
//				g++;
//			}
//		}
//		if (g == 0)
//		{
//			cout << "no" ;
//		}
//		cout << '\n';
//		
//		g = 0;
//	}
//	return 0;
//}