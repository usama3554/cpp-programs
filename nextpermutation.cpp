#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void NextPer(vector<int> &A){
	
	int n = A.size();
	int pivot = -1;
	for(int i = n-2; i>=0; i--){
		if(A[i]<A[i+1]){
		pivot = i;
		break;
		}
	}
	
	if(pivot == -1){
		reverse(A.begin(),A.end());
		return;
	}
	
	for(int i =n-1; i>pivot; i--){
		
		if(A[i]>A[pivot]){
			swap(A[i],A[pivot]);
			break;
		}
	}
	int i = pivot + 1;
	int j = n-1;
	while(i<=j){
		swap(A[i],A[j]);
		i++;
		j--;
	}
	
}


int main(){
	
	vector <int> A = {1,2,3,6,5,4};
	
	NextPer(A);
	
	for(int i =0; i<A.size();i++){
		cout<<A[i]<<" ";
	}
	
	cout<<"\n";
	
	return 0;
}
