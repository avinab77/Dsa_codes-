//problem to find the maximum length of a valid subsequence 1.
//Leetcode 3201) code in C++ (medium marked)
//daily problem 16/07/2025

*****************************Approach1*************************
class Solution {
public:
    int maximumLength(vector<int>& nums) {
        int count_even = 0, count_odd = 0;
        for (int num : nums) {
            if (num % 2 == 0) count_even++;
            else count_odd++;
        }

        int even_dp = 0, odd_dp = 0;
        for (int num : nums) {
            if (num % 2 == 0)
                even_dp = max(even_dp, odd_dp + 1);
            else
                odd_dp = max(odd_dp, even_dp + 1);
        }

        return max({count_even, count_odd, even_dp, odd_dp});
    }
};

//T.C = O(n)
