/*
 * 提取不重复的整数.cpp
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
		int a[10]={0};
		int l=get_length(N);
		int z=0;
		for(int i=0; i<l; i++)
		{
			int r=N%10;
			N=N/10;
			if(r==0 && z==0)
				continue;
			else if(a[r]==0)
			{
				z=z*10+r;
				a[r]=1;
			}
		}
		cout<<z<<endl;
	}
	return 0;
}

