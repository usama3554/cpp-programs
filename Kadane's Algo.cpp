#include<iostream>
using namespace std;
int main(){
	
    int n =7;
	
	int arr[7] = {3,-4,5,4,-1,7, -8};
	
	
	int maxSum = INT_MIN;
	
	int currentSum =0;
	
	for(int i =0; i<n; i++){
		currentSum += arr[i];
		maxSum = max(currentSum,maxSum);
		if(currentSum<0){
			currentSum =0;
		}
	}
	
	cout<<"Maximum sub array sum is "<<maxSum<<"\n";
	
	return 0;
}
