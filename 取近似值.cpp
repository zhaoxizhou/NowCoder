/*
 * 取近似值.cpp
 *
 *  Created on: Aug 15, 2018
 *      Author: zhaoxizhou
 */

#include<iostream>
using namespace std;
int main()
{
    double N;
    while(cin>>N)
    {
        int A;
        A=int(N);
        if(N>=A+0.5)
            cout<<A+1<<endl;
        else
            cout<<A<<endl;
    }
    return 0;
}
