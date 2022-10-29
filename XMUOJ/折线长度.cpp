//#include<iostream>
//#include<cmath>
//#include<math.h>
//using namespace std;
//int main()
//{
//	int n, a, b;
//	int x1, y1, x2, y2;
//	double dis=0;
//	
//	cin >> n;
//	for (int m = 0; m < n; m++)
//	{
//		cin >> x1 >> y1 >> x2 >> y2;
//		a = x1 + y1;
//		b = x2 + y2;
//		if (a == b)
//		{
//			dis = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
//		}
//		else if (a < b)
//		{
//			for (int i = a; i < b; i++)
//			{
//				dis += sqrt(pow(i, 2) + pow(i +1, 2));
//			}
//			if (b - a > 1)
//			{
//				dis += (b-a - 1) * (a + b) / 2*sqrt(2);
//			}
//			dis += (a - x1) * sqrt(2) + x2 * sqrt(2);
//		}
//		else if (a > b)
//		{
//			
//			for (int j = b; j < a; j++)
//			{
//				dis = sqrt(pow(j,2)+pow(j+1,2));
//			}
//			if (a-b > 1)
//			{
//				dis += (a-b - 1) * (a + b) / 2 * sqrt(2);
//			}
//			dis += (b - x2) * sqrt(2) + x1 * sqrt(2);
//			
//		}
//		else if (x1 == x2 && y1 == y2)
//		{
//			dis = 0;
//		}
//		printf("%.3f\n", dis);
//		dis = 0;
//		
//	}
//	return 0;
//}