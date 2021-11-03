#include<iostream>
#include "hashtable.h"
using namespace std;

int main(){
	hashTable<int> h;
	h.insert("Mango",100);
	h.insert("Banana",25);
	h.insert("Apple",140);
	h.insert("Tree",120);
	

	h.print();


	return 0;
}