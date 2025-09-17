#include<iostream>
#include<vector>
using namespace std;

void reverseVector(vector<int> &vec){
	
	int start=0;
	
	int end = vec.size()-1;
	
	 while(start < end){
        swap(vec[start], vec[end]);
        start++;
        end--;
    }


	
}


int main(){
	
	vector<int> vec = {8,4,5,7,9,2,5};
	
	reverseVector(vec);
	
	for(int val : vec){
        cout << val << " ";
    }
    cout << endl;
	
	
	return 0;
}
