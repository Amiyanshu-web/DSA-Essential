#include "bits/stdc++.h"
using namespace std ; 

#define endl "\n" ; 

int dp[400005] ; 

int main() 
{
	int n,p;
	cin>>n>>p;
	int l,r,li,ri;
	for (int i = 0; i < n; ++i)		
	{
		cin>>li>>ri;
		int l=li-ri;
		int r=li+ri;
		if(li-ri<0)	l=0;
		if(li+ri>p)	r=p;


		dp[l]++;
		dp[r+1]--;


	}
	for (int i = 1; i < p; ++i)
	{
		dp[i]+=dp[i-1];
	}
	int cnt=0;int ans=0;
	for (int i = 0; i <= p; ++i)
	{
		if(dp[i]!=1)	cnt++;
		else {
			ans=max(cnt,ans);
			cnt=0;
		}
	}
	cout<<max(ans,cnt)<<endl;
	
}