#include<iostream>
#include<vector>
using namespace std;
int main(){
	
	vector<int> vec;
	
	vec.push_back(0);
	vec.push_back(1);
	vec.push_back(2);
	
	///is case ma hamary pas size 3 aye ga lkn capicity 4 aye ge. 
	cout<<vec.size()<<"\n";
	cout<<vec.capacity()<<"\n";

	
	vec.push_back(3);
	vec.push_back(4);
	
	
	
	///is case ma size bas 2 increase ho ga lkn capicity double ho jaye ge.
	
	cout<<vec.size()<<"\n";
	cout<<vec.capacity()<<"\n";
	
	return 0;
}
