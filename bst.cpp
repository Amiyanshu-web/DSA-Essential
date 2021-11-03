#include<bits/stdc++.h>
using namespace std;


class Node{
public:
	int key;
	Node *left;
	Node *right;
	Node(int key){


	this->key=key;
	left=NULL;
	right=NULL;
}

};



Node* insert(Node* root,int key){
	if(root==NULL){
		return new Node(key);
	}
//rec
	if(key<=root->key){
		root->left=insert(root->left,key);
	}
	else{
		root->right=insert(root->right,key);
	}
	return root;
}

bool search(Node* root,int key){

if(root==NULL)	return false;
if(root->key==key){
	return true;
}
if(root->key>key){
	return search(root->left,key);
}
else {
	return search(root->right,key);
}
return false;
}

Node* findMin(Node *root){
	while(root->left!=NULL){
		root=root->left;
	}
	return root;
}

Node* remove(Node* root,int key){
	if(root==NULL){
		return NULL;
	}
	else if(root->key>key){
		root->left=remove(root->left,key);
	}
	else if(root->key<key){
		root->right=remove(root->right,key);
	}
	//no child
	else{

	if(root->left==NULL && root->right==NULL){
		delete root;
		root=NULL;
		return root;
	}
	//one child
	else if(root->left==NULL){
		Node* temp=root;
		root=root->right;
		delete temp;
	}
	else if(root->right==NULL){
		Node* temp=root;
		root=root->left;
		delete temp;
	}
	

	//2 child-inorder traversal
	else{
		Node *temp=findMin(root->right);
		root->key=temp->key;
		root->right=remove(root->right,temp->key);
	}

	}
	return root;
}


void printInorder(Node * root){
	if(root==NULL)	return;

	printInorder(root->left);
	cout<<root->key<<"->";
	printInorder(root->right);
}

int main(){
	Node*root=NULL;

int arr[]={8,3,10,1,6,14,4,7,13};
for(int x:arr){
	root=insert(root,x);
}
printInorder(root);

cout<<endl;
root=remove(root,6);
printInorder(root);
cout<<search(root,0);
}