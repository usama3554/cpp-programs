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
    vector<int> nums = {1,2,1,1,1,1,1,4,5,1,1};

    cout << "Majority Element: " << majority(nums) << "\n";

    return 0;
}

