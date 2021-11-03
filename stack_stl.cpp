#include <iostream>
#include <stack>
using namespace std;

void insert_at_bottom(stack<int>&s,int data){
//base case when stack is empty
if(s.empty()){
	s.push(data);
	return;
}

//recursion
int temp=s.top();
s.pop();

insert_at_bottom(s,data);
s.push(temp);

}


void reverse(stack<int>&s){
	if(s.empty()){

	return;
}

//recursion
int temp=s.top();
s.pop();

reverse(s);
insert_at_bottom(s,temp);
}


int main(){
	stack<int>s;
	s.push(1);
	s.push(2);
	s.push(3);
	s.push(4);
	s.push(5);
	// insert_at_bottom(s,10);
	// reverse(s);
	while(!s.empty()){
		cout<<s.top()<<" ";
		s.pop();
	}
	cout<<endl;

}

