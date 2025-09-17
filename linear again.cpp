#include<iostream>
#include<vector>
using namespace std;

void linear(vector<int> vec, int targetValue){
	
	int n = vec.size();
	
	for(int i =0; i <n; i++){
		
		if(vec[i]==targetValue){
			
			cout<<"Target Value is at index "<<i<<" ";
		}
	}
	
}



int main(){
	
	vector<int> vec = {20,40,15,30,65};
	int targetValue = 30;
	
	linear(vec, targetValue);
	
	
	return 0;
}
