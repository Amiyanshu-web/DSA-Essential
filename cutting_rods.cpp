#include<bits/stdc++.h>
using namespace std
//recursive
int max_profit(int price[],int n){
	if(n<=0){
		return 0;
	}
	int ans=INT_MIN;
	for(int i=0;i<n;i++){
		int cut=i+1;
		int curr_price=price[i]+max_profit(price,n-cut);
		ans=max(curr_price,ans);
	}
	return ans;
}
int max_profit_dp(){
	int dp[n+1]	{0};
	
}

int main(){
int price={1,5,8,9,10,17,17,20};
int n=sizeof(price)/sizeof(int);
cout<max_profit(price,n)<<endl;
}