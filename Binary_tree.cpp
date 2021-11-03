#include <bits/stdc++.h>
using namespace std;
// Input 1 2 4 -1 -1 5 7 -1 -1 -1 3 -1 6 -1 -1 {Preorder}
// Inorder 4 2 7 5 1 3 6 

class Node{
public:
	int data;
	Node* left;
	Node *right;

	Node(int d){
		data=d;
		left=right=NULL;
	}
};
Node * BuildTree(){
int d;
cin>>d;
if(d==-1)	return NULL;
Node* n=new Node(d);
n->left=BuildTree();
n->right=BuildTree();
return n;	 
}

void Print_preorder(Node * root){
	if(root==NULL){
		return;
	}
	cout<<root->data<<" ";
	Print_preorder(root->left);
	Print_preorder(root->right);

}

void printInorder(Node *root){
if(root==NULL)	return;
printInorder(root->right);
cout<<root->data<<" ";
printInorder(root->left);
}
void printPostOrder(Node *root){
	if(root==NULL) return;
	printInorder(root->left);
	printInorder(root->right);
	cout<<root->data<< " ";
}

int main(){
	Node* root=BuildTree();
	// Print_preorder(root);
	// cout<<endl;
	printInorder(root);
	cout<<endl;
	// printPostOrder(root);
}