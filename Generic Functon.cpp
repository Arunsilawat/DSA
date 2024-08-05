#include <iostream>
using namespace std;
template <typename T>
T great(T a,T b){
	if(a>b){
		return a; 
	}
	else
	   return b;
}
int main(){
	int result=great<int> (10,20);
	cout<<result<<endl;
	
	char result1=great<char> ('A','a');
	cout<<result1<<endl;
	
	double result2=great<double> (10.98,10.99);
	cout<<result2<<endl;
	
}
