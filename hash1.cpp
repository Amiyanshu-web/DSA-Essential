#include <bits/stdc++.h>

using namespace std;

#define ll  long long


/*int main(){
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int hash[128] {0};
	string s;
	cin>>s;
	for (int i=0;i<s.length();i++){
		if(hash[s[i]]==0) hash[s[i]]=1;
		else hash[s[i]]+=1;
	}
	int maxm=hash[0];
	int index=0;
	for (int i = 0; i < 128; i++)
	{	
		if(hash[i]>maxm) {
			maxm=hash[i];
			index=i;
		}
		
	}
	cout<<char(index)<<" "<<maxm;
	cout<<hash[32];

}*/

int main(){
	string s;
	getline(cin,s);
	unordered_map<char,int> mp;
	for (int i = 0; i < s.size(); ++i)
	{	
		mp[s[i]]++;
	}
	int max=0;
	char chr;
	for(auto x:mp){
		if(x.second>max){
			max=x.second;
			chr=x.first;
		}
		if(x.second==max ){
			if(int(x.first)<int(chr)){

			chr=x.first;
			// max=x.second;
			}
		}
	}
	cout<<chr<<" "<<max;
}