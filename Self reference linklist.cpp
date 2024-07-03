
#include <iostream>
using namespace std;
//class Employee{
//	public:
//		int data;
//		Employee *next //self reference class (data member)
//		               // track all objects.
//};
//
//struct Employee{
//	public:
//		int data;
//		Employee *next //self reference class
//		
//};

//--------------------------------------------------
//class P25{
//	public:
//		string name;
//		P25 *next ;//self reference class (data member)
//		               // track all objects.
//		 P25(string n) {
//		 	name=n;
//		 	next=NULL;
//		 }             
//};
//int main(){
//	P25 s1("Arun"),s2("Rahul"),s3("Mohit");
//	s1.next=&s2;
//	s2.next=&s3;
//	cout<<s1.name<<endl;
//	cout<<s1.next<<endl;
//	
//	cout<<s1.next->name<<endl;
//	cout<<s1.next->next<<endl;
//
//	cout<<s1.next->next->name<<endl;
//	cout<<s1.next->next->next<<endl;	
//}
//----------------------------------------

 class P25{
 	public:
 		string name;
 		P25 *next;
 	P25(string n){
 		name=n;
 		next=NULL;
	 }
 };
 int main(){
 	P25 s1("Arun"),s2("Rahul"),s3("Mohit"),s4("Raj");
 	s1.next=&s2;
 	s2.next=&s3;
 	s3.next=&s4;
 	cout<<s1.next->next->next->next<<endl;
 	cout<<s1.name<<endl;
 	cout<<s1.next<<endl;
 	cout<<s1.next->name<<endl;
 	cout<<s1.next->next->name<<endl;
 }
