#include<iostream>
#include<vector>
using namespace std;

void merge (vector<int> &A, vector<int> &B){
	
	int m = 3;
	int n = B.size();
	int i = m-1, j =n-1, index = m + n -1;
	
	while(i>=0 && j >=0){
		if(A[i]>B[j]){
			A[index] = A[i];
			index--;
			i--;
		}
		else{
			A[index] = B[j];
			index--;
			j--;
		}
		
	}
	
	while(j>=0){
		A[index] = B[j];
		    index--;
			j--;
	}
}
int main(){
	
	vector<int> A = {1,2,3,0,0,0};
	
	vector<int> B = {2,5,6};
	
	merge(A,B);
	
	
	for(int i =0; i<A.size(); i++){
		cout<<A[i]<<" ";
	}
	
	cout<<"\n";
	
	return 0;
}
