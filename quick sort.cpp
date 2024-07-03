#include <iostream>
using namespace std;

int partition(int a[],int lower,int upper){
	int i=lower,j=upper,pivot=a[lower];
	
	while(i<j){
		while(a[i]<=pivot)
		i++;
		while(a[j]>pivot)
		j--;
		if(i<j){
			swap(a[i],a[j]);
		}
	}
	swap(a[j],a[lower]);
	return j;
}

void quick_sort(int a[],int lower,int upper){
	if(lower<upper){
		int pos=partition(a,lower,upper);
		quick_sort(a,lower,pos-1);
		quick_sort(a,pos+1,upper);
	}
}
void print(int A[],int n){
	for(int i=0;i<n;i++){
		cout<<A[i]<<" ";	
	}
	cout<<endl;
}
int main(){
	int a[9]={44,9,23,11,64,7,3,47};
	print(a,8);
	cout<<endl;
	quick_sort(a,0,7);
	print(a,8);
}
