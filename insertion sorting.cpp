#include <iostream>
using namespace std;

void insertion_sort(int a[],int n){
	int key,j;
	for(int i=1;i<n;i++){
		key=a[i];
		j=i-1;
		while(j>=0 && a[j]>key){
			a[j+1]=a[j];
			j--;
		}
		j++;
		a[j]=key;
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
	insertion_sort(ar,5);
	print(ar,5);
}
