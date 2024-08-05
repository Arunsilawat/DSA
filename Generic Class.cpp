#include <iostream>
using namespace std;
template<class T,class P>
class Employee{
	public:
		string name;
		T gender;
		P age;
		
	Employee(string n,T g,P a){
		name=n;
		gender=g;
		age=a;
	}
	
	void display(){
		cout<<"Name : "<<name<<" Gender : "<<gender<<" Age : "<<age<<endl;
	}
};
int main(){
	Employee<char,int> obj("Arun",'M',24);
	Employee<string,double> obj1("Mohit","male",33.3);
	obj.display();
	obj1.display();
}
