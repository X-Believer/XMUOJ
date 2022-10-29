/*#include<iostream>
using namespace std;
int main()
{
	int q;
	int a;
	double num = 0;
	double k=0;
	cin >> q;
	for (int i = 0; i < q; i++)
	{
		cin >> a;

		for (int j = 1; j < a + 1; j++)
		{
			if (j % 2 == 0)
			{
				k = static_cast<double>((-1)) / j;
			}
			else
			{
				k = static_cast<double>(1) / j;
			}
			num += k;
		}
		printf("%.2f\n", num);
		num = 0;
	}
	return 0;
}
*/