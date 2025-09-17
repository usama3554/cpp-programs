#include<iostream>
#include<vector>
using namespace std;

vector<int> majority(vector<int> nums){
    vector<int> ans;
    int n = nums.size();

    for(int val : nums){
        int freq = 0;

        for(int el : nums){
            if(val == el) freq++;
        }

        if(freq > n/2){
            ans.push_back(val);
            return ans;
        }
    }

    return ans; 
}

int main(){
    vector<int> nums = {1,2,2,4,4,4,4,4,5,4,1};

    vector<int> ans = majority(nums);
    
        cout << "Majority Element: " << ans[0] << "\n";

    return 0;
}

