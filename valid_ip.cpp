#include <bits/stdc++.h>

using namespace std;


bool isvalid(string s){
	if(s.length()>3)	return false;
	if(s[0]=='0' && s.length()>1)	return false;

	stringstream learn(s);
	int value=0;
	learn>>value;
	return value>=0 && value<=255;
}

void convert(string s){
	vector<string>v;
	string concat="";
	int n=s.length();
	for(int i=1;i<n && i<4;i++){
		string first=s.substr(0,i);
		if(!isvalid(first))	continue;
		for(int j=i+1;j<n&&j<i+4;j++){
			string second=s.substr(i,j);
		if(!isvalid(second))	continue;

		
		for(int k=j+1;k<n&&k<j+4;k++){
			string third=s.substr(j,k);
			string fourth=s.substr(k);
			if(!isvalid(third) || !isvalid(fourth))	continue;
		
		concat=first+"."+second+"."+third+"."+fourth;
		v.push_back(concat);
		cout<<concat<<endl;
		concat="";
	}}}
}


int main(){
	string A = "25525511135";
    string B = "25505011535";
  
    convert(A);
    convert(B);
  
    return 0;
}