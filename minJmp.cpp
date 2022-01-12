#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

int minJump(vector<int>arr,int n,vector<int>dp,int i=0){
	if(i==n-1)	return 0;
	if(i>n-1)	return INT_MAX;
//recursive
	if (dp[i]!=0)	return dp[i];

	int step=INT_MAX;
	int jump=arr[i];
	for (int jmp = 1; jmp <=jump ; ++jmp)
	{
		/* code */
		int ans=minJump(arr,n,dp,i+jmp);
		if(ans!=INT_MAX){
			step=min(step,ans+1);
		}

	}
	return dp[i]=step;
}

int main(){

}