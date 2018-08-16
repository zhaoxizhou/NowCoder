#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
    int N;
    cin>>N;
    int i;
    int k[5]={0};
    int A[5]={0};
    for(i=0;i<N;i++)
    {
		  int a;
        cin>>a;
        switch(a%5)
        {
            case 0:
                if(a%2==0)
                {
                	k[0]++;
                    A[0]+=a;
                }
                break;
            case 1:
                if(k[1]%2==0)
                    A[1]+=a;
                else
                    A[1]-=a;
                k[1]++;
                break;
            case 2:
                A[2]++;
                k[2]++;
                break;
            case 3:
                k[3]++;
                A[3]+=a;
                break;
            case 4:
            	  k[4]++;
                if(a>A[4])
                    A[4]=a;
                break;
        }
    }
    for(i=0;i<3;i++)
    {
        if(k[i]!=0)
            cout<<A[i]<<" ";
        else
        	  cout<<"N ";
    }
    if(k[3]!=0)
    	  cout<<setiosflags(ios::fixed)<<setprecision(1)<<double(A[3])/k[3]<<" ";
    else
    	  cout<<"N ";
    if(k[4]!=0)
    	  cout<<A[4]<<endl;
    else
    	  cout<<"N"<<endl;
    return 0;
}
