#include<iostream>
#include "stack_v.h"
using namespace std;


int main(){
stack<int> l;
l.push(1);
l.push(4);
l.push(0);
// l.push_front(3);
while(!l.empty()){
	cout<<l.top()<<"->";
	l.pop();	
}

return 0;
}
