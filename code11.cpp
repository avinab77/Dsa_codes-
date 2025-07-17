//problem to find longest harmonious subsequence.
//Leetcode 594) code in C++ (easy marked)
//daily problem 30/06/2025


class Solution {
public:
    int findLHS(vector<int>& nums) {
        unordered_map<int, int> mp;
        int result = 0;

        for(int &num: nums) {
            mp[num]++;
        }

        for(int &num : nums){
            int minNum = num;
            int maxNum = num + 1;

            if(mp.count(maxNum)) {
                result = max(result, mp[minNum] + mp[maxNum]);
            }
        }

        return result;
    }
};

//T.C = O(n)
//S.C = O(n)
