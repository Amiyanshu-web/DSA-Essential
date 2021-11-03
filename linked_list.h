#include <iostream>
using namespace std;

class List;
class node{
	int data;
public:
	node* next;

	node(int value){
		data=value;
		next=NULL;
	}
	int getdata(){
		return data;
	}	
	/*~node(){
		if(next!=NULL){
			delete next;
		}
	}*/
	friend class List;

};
class List{
	node * head;
	node * tail;
	int helper(node* start,int key){
		if(start==NULL){
			return -1;
		}
		if(start->data==key){
			return 0;
		}
		int subIdx=helper(start->next,key);
		if(subIdx==-1){

			return -1;
		}
		
		return subIdx+1;
		
	}
public:
	List():head(NULL),tail(NULL){}
	node * begin(){
		return head;
	}

	void push_front(int data){
		if(head==NULL){
			node * n=new node(data);
			head=tail=n;
		}
		else {
			node * n=new node(data);
			n->next=head;
			head=n; 

		}

	}

	void push_back(int data){
		if(head==NULL){
			node * n=new node(data);
			head=tail=n;
		}
		else{
			node *n=new node(data);
			tail->next=n;
			tail=n;
		}
	}
	void insert(int data,int pos){
		if(pos==0){
			push_front(data);
			return;
		}
		node *temp=head;
		for(int jump=1;jump<pos-1;jump++){
			temp=temp->next;

		}
		node *n=new node(data);
		n->next=temp->next;
		temp->next=n;
	}
	bool search(int key){
		node* temp=head;
		int index=0;
		while(temp!=NULL){
			if(temp->data==key){
				return index;
			}
			index++;
			temp=temp->next;
		}
		return -1;

	}

	int recursive_search(int key){
		int idx=helper(head,key);
		return idx;
		
	}
	void pop_front(){
			node*temp=head;
			head=head->next;
			temp->next=NULL;
			delete temp;
	}
	/*void pop_back(){
		node* temp=tail;
		temp->next=NULL;
		delete temp;
	}*/
	void key_delete(int key){
		node *temp=head;
		node *prev=NULL;
		if(temp==NULL){
			return; 
		}

		while(temp!=NULL && temp->data!=key){
			prev=temp;
			temp=temp->next;
		}
		prev->next=temp->next;
		delete temp;
	}
	int get_count(){
		int t=0;

		node *temp=head;

		while(temp!=NULL){
			t++;
			temp=temp->next;
		}
		return t;
	}
	void finddata(int index){
		int t=0;
		node * temp=head;
		while(t!=index){
			t++;
			temp=temp->next;

		}
		cout<< "nth indx from start"<<temp->data<<endl;
	}
	/*~List(){
		if(head!=NULL){
			delete head;
			head=NULL;
		}
	}*/
};
/*void insertatTail(node* &head,int value){	
	node *n=new node(value);
	node* temp=head;
	while(temp->next!=NULL){
		temp=temp->next;
	}
	temp->next=n;

}*/
