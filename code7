//problem to solve longest binary subsequence less than or equal to k.
//Leetcode 2311) code in C++ (medium marked)
//daily problem 26/06/2025


class Solution {
public:
    int longestSubsequence(string s, int k) {
        int n = s.size();
        int zeroes = 0, ones = 0;
        long long value = 0, pow = 1;

        for(char c : s) {
            if(c == '0') zeroes++;
        }

        for(int i = n - 1; i >= 0; i--) {
            if (s[i] == '1') {
                if(value + pow > k){
                    continue;
                }
                value += pow;
                ones++;
            }
            pow <<= 1;
            if (pow > k) break;
        }

        return zeroes + ones;
        
    }
};

//Time complexity:O(n)
//Space complexity:O(1)
