//problem to solve number of subsequences that satisfy the given sum condition.
//Leetcode 1498) code in C++ (medium marked)
//daily problem 29/06/2025

*********************Approach1*********************
//Using 2-pointer & Sorting

class Solution {
public:
    int M = 1e9+7;
    int numSubseq(vector<int>& nums, int target) {
        int n = nums.size();
        
        sort(begin(nums), end(nums));
        
        vector<int> power(n);
        power[0] = 1;
        
        for(int i = 1; i<n; i++) {
            power[i] = (power[i-1] * 2) % M;
        }   
        
        int l = 0, r = n-1;
        int result = 0;
        while(l <= r) {
            
            if(nums[l] + nums[r] <= target) {
                int diff = r-l;
                result = (result % M + power[diff]) % M;
                l++;
            } else {
                r--;
            }
            
        }
        
        return result;
    }
};

//T.C = O(nlogn)
//S.C = O(n)
