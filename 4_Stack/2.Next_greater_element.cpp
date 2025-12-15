#include <bits/stdc++.h>
using namespace std;
   
class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int> mpp;
        stack<int> stk; //stack for tracking next greater element

        for(int num : nums2){
            // if stack is not empty and num is grater than tos then
            // for example - nums1 = [4, 1, 2] , nums2 = [1, 3, 4, 2]
            // stack is empty push 1 ,  then 3 > 1
            // pop 1 , and set map[1] = 3 and push 3
            while(!stk.empty() && num > stk.top()){
                mpp[stk.top()] = num;
                stk.pop();
            }
            stk.push(num);
        }
        // for remaining elements , for example
        // 4 and 2 assigned as -1
        while(!stk.empty()){
            mpp[stk.top()] = -1;
            stk.pop();
        }
        // push num into the ans array
        vector<int> ans;
        for(int num : nums1){
            ans.push_back(mpp[num]);      
        }  
        return ans; 
    }
};