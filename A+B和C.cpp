/*
 * A+B和C.cpp
 *
 *  Created on: Aug 16, 2018
 *      Author: zhaoxizhou
 */

#include<iostream>

using namespace std;

int main()
{
    int T;
    cin>>T;
    int i;
    for (i=0; i<T; i++)
    {
        long int A,B,C;
        cin>>A>>B>>C;
        if(A+B>C)
        {
            cout<<"Case #"<<i+1<<": true"<<endl;
        }
        else
        {
            cout<<"Case #"<<i+1<<": false"<<endl;
        }
    }
    return 0;
}
