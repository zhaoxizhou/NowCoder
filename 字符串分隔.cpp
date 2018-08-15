/*
 * 字符串分隔.cpp
 *
 *  Created on: Aug 15, 2018
 *      Author: zhaoxizhou
 */

#include<iostream>
#include<string>

using namespace std;

int main()
{
    string str;
    while(cin>>str)
    {
        int l=str.length();
        int i=l/8;
        if(l%8==0)
            i--;
        int j,k,m;
        if(l!=0)
        {
            for(j=0;j<=i;j++)
            {
                for(m=0;m<8;m++)
                {
                    k=j*8+m;
                    if(k<l)
                        cout<<str[k];
                    else
                        cout<<"0";
                }
                cout<<endl;
            }
        }
    }
    return 0;
}


