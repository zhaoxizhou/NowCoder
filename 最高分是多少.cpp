/*
 * 最高分是多少.cpp
 *
 *  Created on: Aug 16, 2018
 *      Author: zhaoxizhou
 */

#include<iostream>

using namespace std;

int main()
{
	int N,M;
	while(cin>>N>>M)
	{
		int grade[N];
		int i,j,A,B;
		char c;
		for (i=0;i<N;i++)
		{
			cin>>grade[i];
		}

		for(i=0;i<M;i++)
		{
			cin>>c>>A>>B;
			if(c=='Q')
			{
				int H=0;
				if(A<=B)
					for(j=A-1;j<=B-1;j++)
					{
						if(grade[j]>H)
						{
							H=grade[j];
						}
					}
				else
				{
					for(j=A-1;j>=B-1;j--)
					{
						if(grade[j]>H)
						{
							H=grade[j];
						}
					}
				}
				cout<<H<<endl;
			}
			else
			{
				grade[A-1] = B;
			}
		}
	}
	return 0;
}



