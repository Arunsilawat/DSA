#include <iostream>
using namespace std;

class Node{
	public:
		int data;
		Node *next;
		
	Node(int d){
		data=d;
		next=NULL;
	}	
};

class Queue{
	public:
		Node *front,*rear;
		
		Queue(){
			front=NULL;
			rear=NULL;
		}
		 void traversal(){
	   	Node *temp=front;
	   	
	   	while(temp!=NULL){
	   		cout<<temp->data<<" ";
	   		temp=temp->next;
		   }
	   }
		void enqueue(int d){
			if(front==NULL && rear==NULL){
				front =new Node(d);
				rear=front;
			}
			else{
				Node *temp=new Node(d);
				rear->next=temp;
				rear=temp;
			}
		}
		void dequeue(){
			 Node *temp=front;
	      front=front->next;

		   delete(temp);

		   return;
		}
};
int main(){
	Queue obj;
	obj.enqueue(56);
	obj.enqueue(89);
	obj.enqueue(9);
	obj.dequeue();
	obj.traversal();
	}
