#include<iostream>
#include<map>

using namespace std;

int main()
{
	int N;
	while( cin>>N )
	{
		map<int,int> Table;
		int Key, Value, i;
		for( i = 0 ; i < N ; i++ )
		{
			cin>>Key>>Value;
			Table[Key] += Value;
		}
		for( auto j = Table.begin(); j != Table.end(); j++)
			cout<<j->first<<" "<<j->second<<endl;
	}
	return 0;
}
