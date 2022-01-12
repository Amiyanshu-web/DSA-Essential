#include<iostream>
#include<vector>
using namespace std;

int fibtd(int n,int dp[]){
	if(n==0 || n==1)	return n;

	if(dp[n]!=0)	return dp[n];

	return dp[n]=fibtd(n-1,dp)+fibtd(n-2,dp);
}
int fib_bu(int n){
	int dp[n+1] {0};
	dp[0]=0;
	dp[1]=1;
	for(int i=2;i<=n;i++){
		dp[i]=dp[i-1]+dp[i-2];
	}
	return dp[n];
}
int ladder(int n,int k){
	int dp[n+1] {0};
	dp[0]=1;
	dp[1]=1;
	for(int i=2;i<=n;i++){
		for(int j=1;j<=k;j++)	{
			if(i-j>=0){

			dp[i]+=dp[i-j];
			}
			
		}
		
}
return dp[n];
}
//Bottom up optimised(O(n+k))
int ladder2(int n,int k){
int dp[n+1] {0};
dp[0]=1;
dp[1]=1;
for(int i=2;i<=n;i++){
	dp[i]=2*dp[i-1];
}
for(int i=k+1;i<=n;i++){
	dp[i]=2*dp[i-1]-dp[i-k-1];

}
return dp[n];
}

int main(){
// int n = 9;
     
//     cout << fib_bu(n);
	cout<<ladder2(4,3);
    return 0;
}