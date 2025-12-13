#include <bits/stdc++.h>   
using namespace std;

class Solution {
public:
    // Neetcode Problem - 1 1D-DP
    int climbStairs(int n) {
        // using bottom up space optimized DP
        if(n <= 3) return n;
        int prev1 = 3; // f(i-1)
        int prev2 = 2; // f(i-2)
        int curr = 0;

        for(int i = 3 ; i < n ; i++){
            curr = prev1 + prev2; // curr = f(i-1) + f(i-2)
            prev2 = prev1; // update pointers
            prev1 = curr;
        }
        return curr; 
    }
};