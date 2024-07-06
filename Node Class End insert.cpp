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
//--------------------------------------------------------------
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
	 	if(head==NULL){
	 		cout<<"No data to Traversal";
	 		return;
		 }
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
	 void delete_end(){
	 	if(head==NULL){
	 		cout<<"No data to delete";
	 		return;
		 }
	 	Node *temp=head;
	 	if(temp->next==NULL){
	 		delete(temp);
	 		head=NULL;
	 		return;
		 }
	 	while(temp->next->next!=NULL){
	 		temp=temp->next;
		 }
		 delete(temp->next);
		 temp->next=NULL;
	 }
	 
	void insert_f(int d){
	 	if(head==NULL){
	 		head=new Node(d);
		 }
		else{
		   Node *temp;
		   temp=new Node(d);
		   temp->next=head;
		   head=temp;
		 }
	 }
	 
	 void delete_frant(){
	 	if(head==NULL){
	 		cout<<"No data to delete";
	 		return;
		 }
	 	else{
	 		 Node *temp=head;
	 		 head=head->next;
	 		delete(temp);	
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
// 	obj.delete_end();
// 	obj.delete_end();
// 	obj.delete_end();
// 	obj.delete_end();
// 	obj.delete_end();
// 	obj.delete_end();
// 	obj.delete_end();
// 	obj.delete_end();
//obj.delete_end();
    obj.insert_f(121);
	obj.delete_frant();
 	obj.traversal();
 	cout<<obj.head->next->data;
 } 
 //---------------------------------------------------------------------------

