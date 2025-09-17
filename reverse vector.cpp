#include<iostream>
#include<vector>
using namespace std;

void reverse(vector<int> &vec){
	
	int start = 0;
	
	int end = vec.size()-1;
	
	while(start<end){
		
		swap(vec[start],vec [end]);
		
		start++;
		end--;
		
	}
}


int main(){
	
	vector<int> vec = {10,20,30,40,50};
	
	reverse(vec);
	
	for(int value : vec){
		
		cout<<value<<" ";
		
	}
	
	cout<<"\n";
	return 0;
}
