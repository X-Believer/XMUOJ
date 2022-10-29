//#include<iostream>
//using namespace std;
//int main()
//{
//	double x1, y1, x2, y2, x3, y3, x4, y4;
//	while (cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4)
//	{
//		double s = 0;
//		if (x1 > x2)swap(x1, x2); 
//		if(y1>y2)swap(y1, y2);
//		if (x3 > x4)swap(x3, x4); 
//		if(y3>y4)swap(y3, y4);
//		double a = x2 > x4 ? x4 : x2;
//		double b = x3 > x1 ? x3 : x1;
//		double c = y2 > y4 ? y4 : y2;
//		double d = y1 > y3 ? y1 : y3;
//		s = (a - b) * (c - d);
//		if (a < b || c < d)
//		{
//			printf("0.00\n");
//		}
//		else
//			printf("%.2f\n", s);
//	}
//	return 0;
//}