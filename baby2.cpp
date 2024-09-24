#include<bits/stdc++.h>

using namespace std;

int n,t;
string s;
int main()
{

	cin>>t;
	while(t--)
	{
		cin>>n>>s;
		s=" "+s;
		vector<int>a(n+1);
		for(int i=1; i<=n; i++)
		{
			a[i]=a[i-1]+s[i]-'0';
		}
		int ans=1e9;
		for(int i=0; i<=n; i++)
		{
			int star=i-a[i];
			int end=a[n]-a[i];
			if(star*2>=i&&end*2>=n-i)
			{
			if(abs(n-2*i)<abs(n-2*ans))
					ans=i;
			}
		}
		cout<<ans<<endl;
		
	}
	return 0;
}