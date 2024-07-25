#include <iostream>
using namespace std;
// int great(int a,int b){
// 	if(a>b){
// 		return a;
//	 }
//	 else
//	 return b;
// }
// int main(){
// 	int result=great(11,23);
// 	cout<<result;
// }
template <typename T>

 T great(T a,T b){
 	if(a>b){
 		return a;
	 }
	 else
	 return b;
 }
 int main(){
 	cout<<great<int>(11,23);
 	cout<<endl;
 	cout<<great<double>(11.43,23.99);
 	cout<<endl;
 	cout<<great<char>('A','a');
 	cout<<endl;
 	double result=great<double>(33.43,86.89);
 	cout<<result;
 }
