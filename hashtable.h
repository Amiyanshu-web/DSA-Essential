#include<cstring>
#include <iostream>
using namespace std;

template<typename T>

class Node{
public:
	string key;
	T value;
	Node * next;
	Node(string key,T value){
		this->key=key;
		this->value=value;
		next=NULL;
	}

	~Node(){
		if(next!=NULL){
			delete next;
		}
	}
};


template<typename T>
class hashTable{
	Node<T>** table;
	int cs;
	int ts;

	hashfn(string key){
		int idx=0;
		int power=1;
		for(auto ch:key){
			idx=(idx+ch*power)%ts;
			power=(power*29)%ts;
		}
		return idx;
	}
	void rehash(){
		//ptr to old table 
		Node<T> ** oldTable=table;
		int oldTs=ts;

		//inc table size
		cs=0;
		ts=2*ts+1;
		table =new Node<T>* [ts];//try to make it prime

		for(int i=0;i<ts;i++){
			table[i]=NULL;
		}

		//copy element from old table 
		for(int i=0;i<oldTs;i++){
			Node<T> *temp=oldTable[i];
			while(temp!=NULL){
				string key=temp->key;
				T value=temp->value;

				insert(key,value);
			}
		if(oldTable[i]!=NULL){
			delete oldTable[i];
		}
		}
		delete [] oldTable;

	}
public:
	hashTable(int default_size=7){
		cs=0;
		ts=default_size;

		table=new Node<T>* [ts];
		for(int i=0;i<ts;i++){
			table[i]=NULL;
		}

	}
	void insert(string key,T val){
		int idx=hashfn(key);

		Node<T>* n=new Node<T>(key,val);


		//insertion at head of node
		n->next=table[idx];
		table[idx]=n;
		cs++;
		float load_factor=cs/float(ts);
		if(load_factor>0.7){
			rehash();
			}
		}

	void print(){
		for(int i=0;i<ts;i++){
			cout<<"Bucket "<<i<<"->";
			Node<T>* temp=table[i];
			while(temp!=NULL){
				cout<<temp->key<<"->";
				temp=temp->next;

			}
			cout<<endl;
		}
	}
};