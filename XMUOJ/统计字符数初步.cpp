//#include<iostream>
//#include<string>
//#include<algorithm>
//using namespace std;
//int main()
//{
//	int n;
//	string str;
//	cin >> n;
//	cin.get();//去掉末尾换行符，为getline准备
//	for(int j=0;j<n;j++)
//	{
//		getline(cin, str);
//		int len = str.length();
//		for (int k = 0; k < len; k++)
//		{
//			if (str[k] <= 'Z' && str[k] >= 'A')str[k] += 32;
//		}
//		int a = count(str.begin(), str.end(),'a');
//		int e = count(str.begin(), str.end(), 'e');
//		int i = count(str.begin(), str.end(), 'i');
//		int o = count(str.begin(), str.end(), 'o');
//		int u = count(str.begin(), str.end(), 'u');
//		cout << "a:" << a << endl << "e:" << e << endl << "i:" << i << endl
//			<< "o:" << o << endl << "u:" << u<<endl;
//		if (n != n-1)cout << endl;
//	}
//	return 0;
//}