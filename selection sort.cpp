#include <iostream>
using namespace std;

void selection(int a[],int n){
	int index,temp;
	for(int i=0;i<n-1;i++){
		index=i;
		for(int j=i+1;j<n;j++){
			if(a[index]>a[j]){
				index=j;
			}
		}
		if(i!=index){
			temp=a[i];
			a[i]=a[index];
			a[index]=temp;
		}
	}
}
void print(int A[],int n){
	for(int i=0;i<n;i++){
		cout<<A[i]<<" ";
	}
}
int main(){
	int ar[5]={17,14,3,21,5};
	print(ar,5);
	cout<<endl;
	selection(ar,5);
	print(ar,5);
}
