/*
 * 质数因子.cpp
 *
 *  Created on: Aug 15, 2018
 *      Author: zhaoxizhou
 */

#include<iostream>
using namespace std;
int main()
{
    long N;
    while(cin>>N)
    {
        long i;
        while(N>1)
        {
            for(i=2;i<=N;i++)
            {
                if(N%i==0)
                {
                    cout<<i<<" ";
                    N=N/i;
                    break;
                }
            }
        }
        cout<<endl;
    }
    return 0;
}


