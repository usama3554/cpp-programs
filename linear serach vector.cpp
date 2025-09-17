#include<iostream>
#include<vector>
using namespace std;

int linearSearch(vector<int> &vec, int targetValue){
	
	int n = vec.size();
	
	for(int i =0; i<n; i++){
		
		
		if(vec[i]==targetValue){
			
			return i;
		}
		
	}
	
	return -1;
	
}


int main(){
	
	vector<int> vec = {8,4,5,3,10,9,2,1};
	
	int targetValue = 1;
	
	int result = linearSearch(vec, targetValue);
    
    if(result != -1)
        cout << "Value found at index: " << result << endl;
    else
        cout << "Value not found." << endl;
	
	return 0;
}
