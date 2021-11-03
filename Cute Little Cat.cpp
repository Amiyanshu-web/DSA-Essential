#include<bits/stdc++.h>
using namespace std;

class Node{
public:
	char data;
	unordered_map<char,Node*>children;
	bool isTerminal;

	Node(char d){
		data=d;
		isTerminal=false;
	} 
};
class Trie{
	Node *root;
public:
	Trie(){
		root=new Node('\0');
	}
	void insert(string word){
		Node* temp=root;
		for(char ch:word){
			if(temp->children.count(ch)==0){
				Node* n=new Node(ch);
				temp->children[ch]=n;
			}
			temp=temp->children[ch];
		}
		temp->isTerminal=true;	
	}
	void searchHelper(Trie t,unordered_map<string,bool>&m,string document,vector<string> word){

	}
	void DocumentSearch(string document,vector<string> word){
		Trie t;
		for(auto w:word){

		t.insert(w);
		}

	}

}

int main(){

}