//#include<iostream>
//#include<string>
//#include<vector>
//#include<algorithm>
//using namespace std;
//int main()
//{
//	string a;
//	const string b = "5";
//	string c;
//	while (cin >> a)
//	{
//		int pos = 0;
//		vector<int> num;
//		int len = a.length();
//		
//		while ((pos = a.find(b, pos)) != string::npos)//�жϴ�pos��ʼa�Ƿ����b
//		{
//			a[pos] = ' ';
//			pos++;
//		}
//		for (int i = 0; i < len; i++)
//		{
//			if (a[i] != ' ')
//				c += a[i];
//			else if (a[i] == ' ')
//			{
//				if (c.size() > 1 && c[0] == '0')
//				{
//					c = c.substr(1);
//				}
//				num.push_back(stoi(c));//��c������Ԫ��ת��Ϊ10����
//				c.clear();
//			}
//		}
//		sort(num.begin(), num.end());
//		for (int i = 0; i < num.size(); i++)
//		{
//			cout << num[i] << " ";
//		}
//		cout << endl;
//	}
//	return 0;
//}