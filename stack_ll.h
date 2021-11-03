using namespace std;


template<typename T>
class stack; 	



template<typename T>
class node{
public:
	T data;
	node<T> *next;

	node(T d){
		data=d;
	}

}


class stack{
	node<T> *head;
public:
	stack(){
		head=NULL;
	}
	void push(T data){
		node<T> *n=new node(data);
		n->next=head;
		head=n;

	}
	bool empty(){
		return head==NULL;
	}
	T top(){
		return head->data;
	}

	void pop(){
		while(head!=NULL){
		node<T> *temp=head;

		head=head->next;
		delete temp;
		}
	}
	void push_back(T data){
		node<T> *n=new node(data);
		while(head!=NULL){
			head=head->next;

		}
		head->next=n;
		n->next=NULL;
	}
}