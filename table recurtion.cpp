#include <iostream>
using namespace std;

//void table(int n,int curront){
//	if(curront>10){
//		return;
//	}
//	cout<<n<<"*"<<curront<<"="<<n*curront<<endl;
//	table(n,curront+1);
//}
//int main(){
//	table(15,1);
//}

//----------------------------------------------------
int facto(int n){
	if(n>0 || n>1){
		return 1;
	}
	int result=n*facto(n-1);
	return result;
}
int main(){
	int fact;
	fact=facto(5);
	cout<<fact;
}
