#include <iostream>
#include <string>
using namespace std;
int main3()
{
	string str;
	while (getline(cin, str))
	{
		int count = 0;
		for (int i = 0; i < str.size(); ++i)
		{
			if (str[i] == ' ')
				++count;
			if (str[i] == '"')
			{
				++i;
				while (str[i] != '"')
					++i;
			}
		}
		cout << count + 1 << endl;
		int flag = 1;
		for (int i = 0; i < str.size(); ++i)
		{
			if (str[i] == '"')
				flag ^= 1;
			if (str[i] != ' '&&str[i] != '"')
				cout << str[i];
			if (str[i] == ' ' && (!flag))
				cout << str[i];
			if (str[i] == ' '&&flag)
				cout << endl;
		}
		cout << endl;
	}
	return 0;
}