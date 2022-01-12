

//Queue using array data structure
class Queue{
	int *arr;
	int cs;
	int ms;

	int front;
	int rear;

public:
	Queue(int default_size=5){
		ms=default_size;
		arr=new int[ms];
		cs=0;
		front=0;
		rear=ms-1;
	}
	bool full{
		return cs==ms;
	}
	void push(int data){
		if(!full()){
			//take rear to next index in circualr manner
			rear=(rear+1)%ms;
			arr[rear]=data;
			cs++;
		}
	}
	bool empty(){
		return cs==0;
	}
	void pop(){
		if(!empty()){
			//take the front pointer forward
			front=(front+1)%ms;
			cs--;
		}
	}
	int getfront(){
		return arr[front];
	}

}


//Queue using linked list


/*using namespace std;


template<typename T>
class queue; 	



template<typename T>
class node{
public:
	T data;
	node<T> *next;

	node(T d){
		data=d;
	}

}
class queue{
	node<T> *head;
public:
    queue(){
        head=NULL;
    }
    void push(T data){
        node<T> *n=new node(data);
        while(head->next!=NULL){
            head=head->next;
        }
        head->next=n;
        n->next=NULL;
    }
    void pop(){
        node<T> *temp=head;
        head=head->next;
        delete(temp);

    }
    int top(){
        while(head->next!=NULL){
            head=head->next;
        }
        return head->data;
    }
    
}
*/