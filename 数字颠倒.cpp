/*
 * 数字颠倒.cpp
 *
 *  Created on: Aug 17, 2018
 *      Author: zhaoxizhou
 */

#include<iostream>

using namespace std;

int get_length(int N)
{
	int length=1;
	while(N/10>0)
	{
		N=N/10;
		length++;
	}
	return length;
}

int main()
{
	int N;
	while(cin>>N)
	{
		int l=get_length(N);
		char a[l];
		for(int i=0;i<l;i++)
		{
			int r=N%10;
			a[i]=r+'0';
			N=N/10;
		}
		for(int i=0;i<l;i++)
			cout<<a[i];
		cout<<endl;
	}
	return 0;
}
