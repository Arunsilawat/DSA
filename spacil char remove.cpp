#include <iostream>
using namespace std;
int main(){
   string s="abcd$js#@acde$";
   string result;

   for(int i=0;i<s.size();i++){
    if((s[i]>='A' && s[i]<='Z') ||
        (s[i]>='0' && s[i]<='9') ||
        (s[i]>='a' && s[i]<='z') ||
    (s[i]==' ' && s[i]==' ')){
    result.push_back(s[i]);
   }
   else{
        if(result[i-1]==' ')
           continue;
        else
        result.push_back(' ');
    }
  }
    cout<<s<<endl;
    cout<<result<<endl;
}
