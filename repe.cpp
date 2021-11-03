#include <bits/stdc++.h>

using namespace std;

#define ll  long long

int main(){
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	// int count_a=0,count_g=0,count_c=0,count_t=0;
	
	string s;
	cin>>s;
	int max_length=1;
	int len,i=0;
	while(i+1!=s.size()){
		if(s[i]==s[i+1]){
			int k=i;
			while(s[i]==s[i+1])
				i++;
			len=i-k+1;
			max_length=max(max_length,len);
		}
		else i++;
	}
	cout<<max_length<<endl;

}