/*
 * 求int型正整数在内存中存储1的个数.cpp
 *
 *  Created on: Aug 22, 2018
 *      Author: zhaoxizhou
 */

#include<iostream>

using namespace std;

int main()
{
	int N;
	while(cin>>N)
	{
		int num=0;
		while(N>0)
		{
			if(N%2)
			{
				num++;
			}
			N=N/2;
		}
		cout<<num<<endl;
	}
	return 0;
}
