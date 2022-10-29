/*#include<iostream>
#include<cstdio>
#include<math.h>
#include<cmath>
using namespace std;
void swap(double a,double b)
{
	double  c;
		c = a;
		a = b;
		b = c;
}
int main()
{
	double a, b, c, x1, x2, del, n,m;
	cin >> a >> b >> c;
	del = pow(b, 2) - 4 * a * c;
	if (del >= 0)
	{
		x1 = (-b + sqrt(del)) / (2 * a);
		x2 = (-b - sqrt(del)) / (2 * a);
		if (x1 == x2)
		{
			printf("x1=x2=%.5f", x1);
		}
		if (x1 != x2)
		{
			if (x1 < x2)
			{
				swap(x1, x2);
			}
			printf("x1=%.5f;x2=%.5f", x1,x2);
		}
		else
		{
			n = -b / (2 * a);
			m = pow(del, 2) / 2*a;
			printf("x1=%.5f+%.5fi;x2=%.5f-%.5fi", n, m,n,m);
		}
	}
	return 0;
}*/

/*#include<stdio.h>
#include<math.h>
int main() {
	double a, b, c;
	scanf("%lf %lf %lf", &a, &b, &c);
	double d = pow(b, 2);
	double e = d - 4 * a * c;
	if (e == 0) {
		printf("x1=x2=%.5lf", (-b + sqrt(e)) / (2 * a));
	}
	else if (e > 0) {
		double x1 = (-b + sqrt(e)) / (2 * a);
		double x2 = (-b - sqrt(e)) / (2 * a);
		if (x1 > x2)         
			printf("x1=%.5lf;x2=%.5lf", x1, x2);
		else
			printf("x1=%.5lf;x2=%.5lf", x2, x1);
	}
	else if (e < 0) {
		double m = 0 - b / (2 * a);
		double n = (sqrt(-e)) / (2 * a);
		if (a > 0)        
			printf("x1=%.5lf+%.5lfi;x2=%.5lf-%.5lfi", m, n, m, n);
		else
			printf("x1=%.5lf-%.5lfi;x2=%.5lf+%.5lfi", m, n, m, n);
	}
	return 0;
}*/
