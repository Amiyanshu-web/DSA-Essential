#include <iostream>
#include <algorithm>
#include <string.h>

using namespace std;

int main(){
	string txt = "THIS IS A TEST TEXT";
    string pat = "TEST";
    int len2=pat.length();
    int len1=txt.length();
    for(int i=0;i<len1-len2;i++){
    	for(int j=len2;j<len1;j++){
    		if(pat==txt.substr(i,j))	cout<<i<<endl;
    	}
    }

}