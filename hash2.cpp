// #include<bits/stdc++.h>
#include <iostream>
#include <string>
#include<algorithm>
#include <unordered_map>

using namespace std;

	
#define _z ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int has[100001];
int main()
{
	_z;
	int n;cin>>n;
	unordered_map<string,int>mp;
	string str;
	while(n--){
		cin>>str;
		mp[str]++;
		for(auto x:mp){
			if(x.first==str){
				if(x.second==1)	cout<<"OK"<<endl;
				else cout<<str<<x.second-1<<endl; 

		}
			}

	}

}

