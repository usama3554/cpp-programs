#include<iostream>
#include<vector>
using namespace std;
int main(){
	
	vector<int> vec;
	
	/////vector funxtions
	cout<<"initially Size = "<<vec.size()<<"\n";
	
	
	//pushback funtion => add in programming
	vec.push_back(25); ///js order ma push bat kr rhy hain usi order ma print hotay chakay jain gy jasy pehly 25 aye ga phr 35 aur phr 45
	vec.push_back(35);
	vec.push_back(45);
	
	cout<<"After push back size = "<<vec.size()<<"\n";
	
	
	// popback function => delete in programmig
	//jb ham pop back krtay hain to hamay value btanay ki zrorat nai hoti ku k by default hamaray vector ko pata ha uska last index kya ha
	
	vec.pop_back();
	
	cout<<"After pop back size = "<<vec.size()<<"\n";
	
	
	// front funtion => vector k start py jo value ha ham usay print krwana chah rhy hain
	
	cout<<"Vector front value is "<<vec.front()<<"\n";
	
	
	// back funtion => returns back value
	
	cout<<"Vector Back Value is "<<vec.back()<<"\n";
	
	//at function gives the value at particular index
	
	cout<<"Vector at the 0 index is "<<vec.at(0)<<"\n";

	for(int j : vec){
		
		cout<<j<<"\n";
}
	
	
	
	
	return 0;
}
