#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

int solve(int h[],int n){
	vector<int>dp(n,0);
	dp[0]=0;dp[1]=abs(h[1]-h[0]);
	for (int i = 2; i < n; ++i)
	{
		/* code */
		dp[i]=min(dp[i-1]+abs(h[i]-h[i-1]),dp[i-2]+abs(h[i]-h[i-2]));
	}
	return dp[n-1];
}
int na_sum(int arr[]){
	int n=2;
	vector<int>dp(n,0);
	dp[0]=arr[0];
	dp[1]=max(arr[1],arr[0]);
	for(int i=2;i<n;i++){
		dp[i]=max(arr[i]+dp[i-2],dp[i-1]);
	}
	return dp[n-1];
}

int main(){
	int n=6;
	int arr[2]={10,6};
	cout<<na_sum(arr)<<endl;
	int h[n]={30,10,60,10,60,50};
	cout<<solve(h,n);
}