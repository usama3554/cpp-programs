#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int majority(vector<int> nums) {
    int n = nums.size();

    sort(nums.begin(), nums.end()); 

    int freq = 1;
    for(int i = 1; i < n; i++) {
        if(nums[i] == nums[i-1]) {
            freq++;
        } else {
            freq = 1;
        }

        if(freq > n/2) {
            return nums[i]; 
        }
    }

    return -1; 
}

int main() {
    vector<int> nums = {1,2,1,3,3,3,3,4,3,3,1};

    cout << "Majority Element: " << majority(nums) << "\n";

    return 0;
}

