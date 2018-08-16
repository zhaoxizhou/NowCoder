/*
 * 计算字符个数.cpp
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
        char c;
        cin>>c;
        int n=0;
        for(int i=0;i<l;i++)
        {
            if(c>='A'&&c<='Z')
            {
                if(str[i]==c || str[i]==c-'A'+'a')
                    n++;
            }
            else if(c>='a'&&c<='z')
            {
                if(str[i]==c || str[i]==c-'a'+'A')
                    n++;
            }
            else
            {
                if(str[i]==c)
                    n++;
            }
        }
        cout<<n<<endl;
    }
    return 0;
}
