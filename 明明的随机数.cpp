/*
 * 明明的随机数.cpp
 *
 *  Created on: Aug 15, 2018
 *      Author: zhaoxizhou
 */

#include<iostream>

using namespace std;

void sort(int* array, int n)
{
	int a,b,temp;
	for(a=n-1;a>0;a--)
	{
		for(b=0;b<a;b++)
		{
			if(array[b]>array[a])
			{
				temp=array[a];
				array[a]=array[b];
				array[b]=temp;
			}
		}
	}
}

int main()
{
	int n;
	while(cin>>n)
	{
		int array[n];
		int i,m;
		for(i=0;i<n;i++)
		{
			cin>>m;
			array[i]=m;
		}
		sort(array,n);
		int a,b;
		for(a=0;a<n-1;a++)
		{
			if(array[a]==array[a+1])
			{
				for(b=a;b<n-1;b++)
				{
					array[b]=array[b+1];
				}
				n--;
				a--;
			}
		}
		for(i=0;i<n;i++)
		{
			cout<<array[i]<<endl;
		}
	}
	return 0;
}



