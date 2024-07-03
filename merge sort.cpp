#include <iostream>
using namespace std;

//void print(int A[],int n){
//	for(int i=0;i<n;i++){
//		cout<<A[i]<<" ";	
//	}
//	cout<<endl;
//}
//void merge(int a[],int low, int mid, int high){
//	int i=low,j=mid+1,size=high-low+1,k=0;
//	int temp[size];
//	while(i<=mid && j<=high){
//		if(a[i]<=a[j]){
//			temp[k]=a[i];
//			i++,k++;
//		}
//		else{
//			temp[k]=a[j];
//			j++,k++;
//		}
//	}
//	
//	while(i<=mid){
//		temp[k]=a[i];
//		k++, i++;
//	}
//	
//	while(j<=high){
//		temp[k]=a[j];
//		k++, j++;
//	}
//	for(int i=0;i<size;i++){
//		a[low]=temp[i];
//		low++;
//	}
//}
//
//void merge_sort(int a[],int low, int high){
//	if(low<high){
//		int mid=(high+low)/2;
//		merge_sort(a,low,mid);
//		merge_sort(a,mid+1,high);
//		merge(a,low,mid,high);
//	}
//}
//
//int main(){
//	int a[9]={44,9,23,11,64,7,3,47};
//	print(a,8);
//	cout<<endl;
//	merge_sort(a,0,7);
//	print(a,8);
//}
//--------------------------------------------------------------------
void print(int a[],int n){
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;
}
void merge(int a[],int low,int mid,int high){
	int i=low,j=mid+1,k=0,size=high-low+1,temp[size];
	while(i<=mid && j<=high){
		if(a[i]<=a[j]){
			temp[k]=a[i];
			i++,k++;
		}
		else{
			temp[k]=a[j];
			j++,k++;
		}
	}
	while(i<=mid){
		temp[k]=a[i];
		i++,k++;
	}
	while(j<=high){
		temp[k]=a[j];
		j++,k++;
	}
	for(int i=0;i<size;i++){
		a[low]=temp[i];
		low++;
	}
}
void merge_sort(int a[],int low,int high){
	if(low<high){
		int mid=(high+low)/2;
		merge_sort(a,low,mid);
		merge_sort(a,mid+1,high);
		merge(a,low,mid,high);
	}
}
int main(){
	int a[8]={44,9,23,11,64,7,3,47};
	print(a,8);
	merge_sort(a,0,7);
	print(a,8);
}
