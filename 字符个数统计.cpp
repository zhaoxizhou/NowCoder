/*
 * 字符个数统计.cpp
 *
 *  Created on: Aug 17, 2018
 *      Author: zhaoxizhou
 */

#include<iostream>
#include<string>
#include<map>

using namespace std;

int main()
{
	string str;
	while(cin>>str)
	{
		map<char,int> Table;
		int l=str.length();
		for(int i=0;i<l;i++)
			Table[str[i]]=1;
		int j=0;
		for(auto it=Table.begin();it!=Table.end();it++)
			j++;
		cout<<j<<endl;
	}
	return 0;
}
