//#include<iostream>
//using namespace std;
//int main()
//{
//	int n, g, x=0 ,X=0;
//	float j=0, J=0, gpa=0;
//	cin >> n;
//	for (int i = 0; i < n; i++)
//	{
//		cin >> g >> x;
//		J = 0;
//		
//		if (g >= 90)
//		{
//			J = 4;
//		}
//		else if (g < 90 && g>=85)
//		{
//			J = 3.7;
//		}
//		else if (g < 85 && g>=81)
//		{
//			J = 3.3;
//		}
//		else if (g < 81 && g>=78)
//		{
//			J = 3;
//		}
//		else if (g < 78 && g>=75)
//		{
//			J = 2.7;
//		}
//		else if (g < 75 && g >= 72)
//		{
//			J = 2.3;
//		}
//		else if (g < 72 && g >= 68)
//		{
//			J = 2;
//		}
//		else if (g < 68 && g >= 64)
//		{
//			J = 1.7;
//		}
//		else if (g < 64&& g >= 60)
//		{
//			J = 1;
//		}
//		else if (g < 60 )
//		{
//			J = 0;
//		}
//		j += J * x;
//		X += x;
//	}
//	gpa = j / X;
//	printf("%.4f", gpa);
//	return 0;
//}