#include <iostream>
using namespace std;

//void f1(){
//	cout<<"This is function"<<endl;
//	f1();
//}
//int main(){
//	f1();
//}

//---------------------factorial find with recursion----------------------------

//int fact(int n){
//	if(n<0){
//		cout<<"There is not factorial of negative num";
//		return 0;
//	}
//	else if(n==0 || n==1){  //exit point
//		return 1;
//	}
//	else{
//		return n*fact(n-1);  //recursion 
//	}
//}
//int main(){
//	cout<<fact(4);
//}

//----------------------- fobona find with recursion-------------------------------------
static int count;
int fibo(int n){
	count++;
	if(n==0 || n==1){
		return n;
	}
	else 
	return fibo(n-1)+fibo(n-2);
}
int main(){
	
	for(int i=0;i<8;i++){
		cout<<fibo(i)<<" ";
	}
	cout<<endl<<count;
}
