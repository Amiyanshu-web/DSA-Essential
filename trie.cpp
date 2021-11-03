#include <iostream>
#include "trie.h"
using namespace std;

int main(){
	/*string words[]={"hello","he","app","apple","news"};
	Trie t;
	for(auto word:words){
		t.insert(word);
	}
	string key;
	cin>>key;
	cout<<t.search(key)<<endl;*/
	string s="hello";
	string suff[]={"ell","hello","lo"};
	Trie t;
	t.insert_suffix(s);
	for(auto sf:suff){
		if(t.search(sf))	cout<<"YES";
		else cout<<"NO";
	}
	return 0;
}