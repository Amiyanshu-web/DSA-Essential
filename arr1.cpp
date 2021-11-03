#include<bits/stdc++.h>


using namespace std;


#define ll              long long 

int main(){
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int t;cin>>t;
	while(t--){
		ll int x,y,z; 
		cin>>x>>y>>z;
		ll int hero=max(z-x,z-y);
		cout<<hero<<'\n';
	}

}