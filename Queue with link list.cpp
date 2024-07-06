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
		Node *frant,*rear;
		
		Qurue(){
			frant=NULL;
			rear=NULL;
		}
	void enqueue(int d){
		if(frant==NULL && rear==NULL){
			frant=new Node(d);
			rear=frant;
		}
		else{
			Node *temp=new Node(d);
			rear->next=temp;
			rear=temp;
		}
	}
	void dqueue(int d){
		if(frant==NULL && rear==NULL){
		
		
		}
		else{
			Node *temp=new Node(d);
			rear->next=temp;
			rear=temp;
		}
	}
};
int main(){
	Queue obj;
	obj.enqueue(88);
}
