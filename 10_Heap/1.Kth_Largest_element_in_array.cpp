#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        int n = nums.size();
        // create a min heap (priority queue)
        priority_queue<int , vector<int> , greater<int>> pq;
        // iterate through array elements
        for(int  i = 0 ; i < n ; i++){
            pq.push(nums[i]);
            // if the size of pq exceeds k then pop the smallest
            // as in min-heap , smallest present at front
            if(pq.size() > k){
                pq.pop();
            }
        }
        // return the k-th largest element (top of min heap)
        return pq.top();
    }
};