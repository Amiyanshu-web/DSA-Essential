#include<iostream>
#include<vector>
#include<cmath>
#include <algorithm>
using namespace std;
bool sortcol(  vector<int> v1,
                vector<int> v2 ) {
 return v1[2] < v2[2];
}

int solve(vector<vector<int>>v){
	int n=v.size();
	sort(v.begin(), v.end(),sortcol);
	vector<int>dp (n+1,0);
	dp[0]=v[0][2];
	int maxm=dp[0];
	for(int i=1;i<n;i++){
		for(int j=0;j<i;j++){
			if(v[i][0]>v[j][0] && v[i][1]>v[j][1] && v[i][2]>v[j][2] ){
				dp[i]=max(dp[i],dp[j]+v[i][2]);
				maxm=max(maxm,dp[i]);
			}
			else dp[i]=max(dp[i],v[i][2]);
		}
	}
return maxm;
	}

int main(){
	vector<vector<int>>v={
		{2,1,2},
		{3,2,3},
		{2,2,8},
		{2,3,4},
		{2,2,1},
		{4,4,5}
	};
	cout<<solve(v);
}