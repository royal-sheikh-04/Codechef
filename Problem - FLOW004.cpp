#include<bits/stdc++.h>
using namespace std;
int main()
{
	int T;
	cin>>T;
	for(int i=0;i<T;i++)
	{
		int N,ans=0,first=0;
		cin>>N;
		ans+=N%10;
		while(N>0)
		{
			first=N%10;
			N/=10;
		}
		ans+=first;
		cout<<ans<<"\n";
	}
	return 0;
}
