/*
 * 福尔摩斯的约会.cpp
 *
 *  Created on: Aug 16, 2018
 *      Author: zhaoxizhou
 */

#include<iostream>
#include<string>
#include<map>

using namespace std;

int main()
{
	map<char, string> Day={
			{'A',"MON"},
			{'B',"TUE"},
			{'C',"WED"},
			{'D',"THU"},
			{'E',"FRI"},
			{'F',"SAT"},
			{'G',"SUN"}
	};
	string Str1,Str2,Str3,Str4;
	while(cin>>Str1>>Str2>>Str3>>Str4)
	{
		int i,j=0;
		for(i=0; Str1[i]!='\0' && Str2[i]!='\0';i++)
		{
			if(j==0 && Str1[i]==Str2[i] && Str1[i]>='A' && Str1[i]<='G')
			{
				cout<<Day[Str1[i]]<<" ";
				j++;
				continue;
			}
			if(j==1 && Str1[i]==Str2[i])
			{
				if(Str1[i]>='0'&&Str1[i]<='9')
					cout<<"0"<<Str1[i]<<":";
				else if(Str1[i]>='A'&&Str1[i]<='N')
					cout<<Str1[i]-'A'+10<<":";
				break;
			}
		}
		for(i=0; Str3[i]!='\0' && Str4[i]!='\0';i++)
		{
			if(Str3[i]==Str4[i] && ((Str3[i]>='A' && Str3[i]<='Z') || (Str3[i]>='a' && Str3[i]<='z')))
			{
				if(i<10)
					cout<<"0"<<i<<endl;
				else
					cout<<i<<endl;
				break;
			}
		}
	}
	return 0;
}
