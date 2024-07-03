#include <iostream>
using namespace std;
 int main(){
 	string s="its now or never";
 	s[0]=toupper(s[0]);
 	for(int i=0;i<s.size()-1;i++){
 		if(s[i]==' '){
 			s[i+1]=toupper(s[i+1]);
		 }
	 }
	 cout<<s;
 }
