#include<iostream>
using namespace std;

void bubblesort(int arr[], int n){
	for(int i =0; i<n-1; i++){
		bool isSwap = false;
		for(int j =0; j<n-i-1; j++){
			if(arr[j]>arr[j+1]){
				swap(arr[j],arr[j+1]);
				isSwap = true;
			}
		}
		if(!isSwap){
			return;
		}
	}
}

void printArray(int arr[], int n){
	for(int i =0; i<n; i++){
		cout<<arr[i]<<" ";
	}
	cout<<"\n";
}

void SelectionSort(int arr[], int n){
	for(int i =0;i<n-1; i++){
		int smallestIndex =i;
		for(int j =i+1;j<n; j++){
			if(arr[j]<arr[smallestIndex]){
			smallestIndex = j;
			}
		}
		
		swap(arr[i], arr[smallestIndex]);
	}
}


int main(){
	
	int n =5;
	
	int arr[] = {4,1,5,2,3};
	
	//bubblesort(arr,n);
	SelectionSort(arr,n);
	printArray(arr,n);
	
	
	return 0;
}
