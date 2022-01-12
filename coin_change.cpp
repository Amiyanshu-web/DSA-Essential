#include<iostream>
#include<vector>
using namespace std;

int minNumberOfCoinsForChange(int m,vector<int>denoms){
vector<int>dp(m+1,0);
dp[0]=0;
for (int i = 1; i <=m ; ++i)
{
	/* code */
	dp[i]=INT_MAX;
	for(int c:denoms ){
		if(i-c>=0 && dp[i-c]!=INT_MAX){
			dp[i]=min(dp[i],dp[i-c]+1);
		}
	}
}
return dp[m]==INT_MAX?-1:dp[m];
}
int main(){
	vector<int> denoms={1,5,7,10};
	int m=8;
	cout<<minNumberOfCoinsForChange(m,denoms);
}