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

void Levelorder(Node *root ){
	queue<Node*>q;
	q.push(root);
	q.push(NULL);
	while(!q.empty()){
		Node* temp=q.front();
		if(temp==NULL){
			cout<<endl;
			q.pop();
			if(!q.empty()){
				q.push(NULL);
			}
		}
			else {
				q.pop();
				cout<<temp->data<<" ";
				if(temp->left)	q.push(temp->left);
				if(temp->right)	q.push(temp->right);
			}
		}
	return;
	}

	Node *levelorder_build(){
		int d;
		cin>>d;
		Node*root=new Node(d);
		queue<Node*>q;
		q.push(root);	
		while(!q.empty()){
			Node *curr=new Node(d);
			q.pop();
			int c1,c2;
			cin>>c1>>c2;
			if(c1!=-1){
				curr->left=new Node(c1);
				q.push(curr->left);
			}
			if(c2!=-1){
				curr->right=new Node(c2);
				q.push(curr->right);
			}	
		}
		return root;
	}
	int height(Node* root){
		if(root==NULL)	return 0;
		int h1=height(root->left);
		int h2=height(root->right);
		return 1+max(h1,h2);

		//Post order
	}
	int dia(Node *root){
		//takes O(n^2) time
		if(root==NULL)	return 0;
		int D1=height(root->right)+height(root->left);
		int D2=dia(root->right);
		int D3=dia(root->left);
		return max(D1,max(D2,D3));
	}


class HDPair{
public:
	int height;
	int diameter;
	};

	HDPair Optdiameter(Node*root){
		HDPair p;
		if(root==NULL){
			p.height=0;
			p.diameter=0;
			return p;
		}
		HDPair left=Optdiameter(root->left);
		HDPair right=Optdiameter(root->right);
		p.height=max(left.height,right.height)+1;
		int D1=left.height+right.height;
		int D2=right.diameter;
		int D3=left.diameter;
		p.diameter=max(D1,max(D2,D3));
		return p;

	}
int main(){
	Node* root=BuildTree();
	// Levelorder(root);
	// cout<<dia(root);
	cout<<"Optimised Diameter: "<<Optdiameter(root).diameter;
}