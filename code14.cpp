//problem to find lucky integer in an array.
//Leetcode 1394) code in C++ (easy marked)
//daily problem 05/07/2025

class Solution {
public:
    int findLucky(vector<int>& arr) {
        unordered_map<int, int> freq;

        for(int num : arr) {
            freq[num]++;
        }

        int lucky = -1;

        for(auto& [key, value] : freq) {
            if (key == value) {
                lucky = max(lucky, key);
            }
        }
        
        return lucky;
    }
};

//T.C = O(n)
//S.C = O(n)
