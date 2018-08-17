/*
 * 句子逆序.cpp
 *
 *  Created on: Aug 17, 2018
 *      Author: zhaoxizhou
 */

#include<iostream>
#include<vector>

using namespace std;

int main()
{
	string s;
	vector<string> vs;
	while(cin>>s)
		vs.push_back(s);
	for(int i=vs.size()-1;i>0;i++)
		cout<<vs[i]<<" ";
	cout<<vs[0]<<endl;
	return 0;
}
