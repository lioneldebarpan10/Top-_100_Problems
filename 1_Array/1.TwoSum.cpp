#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    // LeetCode Grind Day - 1 (Solution - 2 Using HashMap)
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int ,int> mpp; // stores value -> index
        for(int i = 0 ; i < nums.size() ; i++){
            int need = target - nums[i];
            // if exist in map then return it's index
            if(mpp.find(need)  != mpp.end()){
                return {mpp[need] , i};
            }
            mpp[nums[i]] = i; // if not in map then store it
        }
        return {}; // no solution
    }
};