#include <iostream>
using namespace std;
//
//class Node{
//	public:
//		int data;
//		Node *next;
//	Node(int d){
//		data=d;
//		next=NULL;
//	}
//};
//class Linkedlist{
//	public:
//		Node *head;
//	Linkedlist(){
//		head=NULL;
//	}
//	void insert_end(int d){
//		if(head==NULL){
//			head=new Node(d);
//		}
//	}
//};
//int main(){
//	Linkedlist obj;
//	obj.insert_end(89);
//	cout<<obj.head->data;
//}
//--------------------------------
 class Node{
 	public:
 		int data;
 		Node *next;
 	Node(int d){
 		data=d;
 		next=NULL;
	 }
 };
 class Linkedlist{
 	public:
 		Node *head;
 	Linkedlist(){
 		head=NULL;
	 }
	 void traversal(){
	 	Node *temp=head;
	 	while(temp!=NULL){
	 		cout<<temp->data<<" ";
	 		temp=temp->next;
		 }
	 }
	 void insert_end(int d){
	 	if(head==NULL){
	 		head=new Node(d);
		 }
		else{
		 	Node *temp=head;
		 	while(temp->next!=NULL){
		 		temp=temp->next;
			 }
			 temp->next=new Node(d);
		 }
	 }
 };
 int main(){
 	Linkedlist obj;
 	obj.insert_end(88);
 	obj.insert_end(78);
 	obj.insert_end(54);
 	obj.insert_end(9);
 	obj.insert_end(80);
 	obj.insert_end(70);
 	obj.insert_end(50);
 	obj.insert_end(90);
 	obj.traversal();
// 	cout<<obj.head->next->data;
 }
