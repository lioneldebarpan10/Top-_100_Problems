#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        // external list stores all subsets starting from empty subset
        vector<vector<int>> external = {{}};
        for(int num : nums){
            int n = external.size();
            // for each existing subset , create a new one with num included
            for(int i = 0 ; i < n ; i++){
                vector<int> internal = external[i]; // copy ith existing subset
                internal.push_back(num); // push current number to the copy
                external.push_back(internal); // push new subset in external list of list
            }
        }
        return external;
    }
};