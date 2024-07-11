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
			cout<<"No data to delete";
	 		return;
		}
		else{
			Node *temp=frant;
			frant=frant->next;
			delete(temp);
		}
	}
	 void traversal(){
	 	if(frant==NULL && rear==NULL){
			cout<<"No data to print";
	 		return;
		}
	 	Node *temp=frant;
	 	while(frant!=NULL){
	 		cout<<temp->data<<" ";
	 		temp=temp->next;
		 }
	 }
};
int main(){
	Queue obj;
	obj.enqueue(88);
	obj.enqueue(18);
	obj.traversal();
}
