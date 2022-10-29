//#include<iostream>
//using namespace std;
//int main()
//{
//	{
//		int n;
//		string a;
//		cin >> n;
//		for (int i = 0; i < n; i++)
//		{
//			cin >> a;
//			int len = a.length();
//			if (len < 8 || len>16)
//			{
//				cout << "NO" << endl;
//				continue;
//			}
//			else
//			{
//				int al = 0, di = 0, AL = 0, co = 0;
//				int to;
//				for (int i = 0; i < len; i++)
//				{
//					if (isdigit(a[i]))di = 1;
//					else if (a[i] <= 'z' && a[i] >= 'a')al = 1;
//					else if (a[i] <= 'Z' && a[i] >= 'A')AL = 1;
//					else if (a[i] == '~' || a[i] == '!' || a[i] == '@' || a[i] == '#' ||
//						a[i] == '$' || a[i] == '%' || a[i] == '^')co = 1;
//				}
//				to = al + di + AL + co;
//				if (to >= 3)cout << "YES" << endl;
//				else cout << "NO" << endl;
//			}
//		}
//	}
//	return 0;
//}
