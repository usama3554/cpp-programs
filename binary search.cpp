#include<iostream>
#include<vector>
using namespace std;

int binarySearch(vector<int> arr, int tar){
	
	int start = 0;
	
	int end = arr.size()-1;
	
	while(start<=end){
		int mid = start + (end - start)/2;
		if(tar>arr[mid]){
			start = mid +1;
		}
		else if(tar<arr[mid]){
			end = mid -1;
		}
		else 
		return mid;	
	}
	
	return -1;
}


int main(){
	
	vector<int> arr1 = {-1,0,3,4,5,9,12}; //odd
	 
	int tar1 = 12;
	
	vector<int> arr2 = {-1,0,3,5,9,12}; //even
	
	int tar2 = 0;
	
	cout<<binarySearch(arr2,tar2)<<"\n";
	
	return 0;
}
