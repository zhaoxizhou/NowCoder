/*
 * 进制转换.cpp
 *
 *  Created on: Aug 15, 2018
 *      Author: zhaoxizhou
 */

#include<iostream>
#include<string>

using namespace std;

int main()
{
	string s;
	while(cin>>s)
	{
		int num=0;
		int i;
		for (i=2;i<s.length();i++)
		{
			if(s[i]>='A'&&s[i]<='F')
			{
				num=num*16+(s[i]-'A'+10);
			}
			else if(s[i]>='a'&&s[i]<='f')
			{
				num=num*16+(s[i]-'a'+10);
			}
			else
			{
				num=num*16+(s[i]-'0');
			}
		}
		cout<<num<<endl;
	}
	return 0;
}



