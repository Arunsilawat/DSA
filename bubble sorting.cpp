#include <iostream>
using namespace std;

void bubble_sort(int A[],int n){
	int temp,flag;
	for(int i=0;i<n-1;i++){  //pass
	      flag=0;
		for(int j=0;j<n-i-1;j++){  //comp and swap
			if(A[j]>A[j+1]){
			//	swap(A[j],A[j+1]);
				temp=A[j];          //space compilicity ->o(1)
				A[j]=A[j+1];         //time -->o(n2)
				A[j+1]=temp;
				flag=1;
			}			
		}
		if(flag==0)
		   break;
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
	bubble_sort(ar,5);
	print(ar,5);
}
