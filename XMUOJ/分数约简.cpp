//#include<stdio.h>
//int gcd(int a, int b)
//{
//	return b ? gcd(b, a % b) : a;
//}
//int main()
//{
//	int n;
//	int a, b;
//	scanf("%ld", &n);
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d%d", &a, &b);
//		if (b == 0)
//		{
//			printf("Error!\n");
//		}
//		else if (b == 1)
//		{
//			printf("%d\n", a);
//		}
//		else if (a % b == 0)
//		{
//			printf("%d\n", a / b);
//		}
//		else
//		{
//			int c = gcd(a, b);
//			a /= c;
//			b /= c;
//			printf("%d/%d\n", a, b);
//		}
//
//	}
//	return 0;
//}