#include<iostream>
#include "linked_list.h"
using namespace std;


/*void reverse(node* &head){
	node *C=head;
	node*P =NULL;
	node *N;
	while(C!=NULL){
		//save the next node
		N=C->next;
		//point to previous 
		C->next=P;
		//take next step
		
		P=C;
		C=N;
	}
	head=P;
}*/
int main(){
List l;
l.push_back(1);
l.push_back(4);
l.push_back(0);
l.push_front(3);
l.insert(2,2);
// l.pop_front();
l.key_delete(2);
// l.pop_back();
node * head=l.begin();
while(head!=NULL){
	cout<<head->getdata()<<"->";
	head=head->next;
}
cout<<endl;
cout<<get_count();
finddata(3);
return 0;
}
