/*
 * 数素数.cpp
 *
 *  Created on: Aug 16, 2018
 *      Author: zhaoxizhou
 */

#include<iostream>
using namespace std;

bool Is_Prime(int n)
{
	if(n==1)
		return false;
	for(int i=2; i*i<=n; i++)
	{
		if(n%i==0)
			return false;
	}
	return true;
}

int main()
{
	int M,N;
	while(cin>>M>>N)
	{
		int i=1,j=0,l=0;
		while(j<N)
		{
			if(Is_Prime(i))
			{
				j++;
				if(j>=M)
				{
					if(l==10)
					{
						l=0;
						cout<<endl;
					}
					if(l!=9 && j!=N)
						cout<<i<<" ";
					else
						cout<<i;
					l++;
				}
			}
			i++;
		}
	}
	return 0;
}
