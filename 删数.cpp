/*
 * 删数.cpp
 *
 *  Created on: Aug 16, 2018
 *      Author: zhaoxizhou
 */

#include<iostream>

using namespace std;

int main()
{
	int N;
	while(cin>>N)
	{
		if(N>1000)
			N=1000;
		int i,j;
		int a[N];
		for(i=0;i<N;i++)
			a[i]=i;
		int k=N;
		i=0;
		j=0;
		while(k>1)
		{
			if(i==N)
				i=0;
			if(a[i]<0)
			{
				i++;
			}
			else if(j==2)
			{
				a[i]=-1;
				k--;
				j=0;
				i++;
			}
			else
			{
				i++;
				j++;
			}
		}
		for(i=0;i<N;i++)
			if(a[i]>=0)
				break;
		cout<<i<<endl;
	}
	return 0;
}
