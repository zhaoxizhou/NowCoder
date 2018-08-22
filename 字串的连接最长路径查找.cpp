/*
 * 字串的连接最长路径查找.cpp
 *
 *  Created on: Aug 22, 2018
 *      Author: zhaoxizhou
 */

#include<iostream>
#include<vector>
#include<string>
#include<algorithm>

using namespace std;

int main()
{
	int n;
	while(cin>>n)
	{
		vector<string> vec;
		string str;
		for(int i=0;i<n;i++)
		{
			cin>>str;
			vec.push_back(str);
		}
		sort(vec.begin(),vec.end());
		for(auto it=vec.begin();it!=vec.end();it++)
		{
			cout<<*it<<endl;
		}
	}
	return 0;
}
