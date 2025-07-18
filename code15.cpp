//problem to find pairs with a certain sum.
//Leetcode 1865) code in C++ (medium marked)
//daily problem 06/07/2025


class FindSumPairs {
public:
    vector<int> vec1;
    vector<int> vec2;
    unordered_map<int, int> mp;
    FindSumPairs(vector<int>& nums1, vector<int>& nums2) {
        vec1 = nums1;
        vec2 = nums2;
        for(int &x : vec2) {
            mp[x]++;
        }
    }
    
    void add(int index, int val) {
        mp[vec2[index]]--;
        vec2[index] += val;
        mp[vec2[index]]++;
        
    }
    
    int count(int tot) {
        int c = 0;
        for(int &x : vec1) {
            c += mp[tot - x];
        }

        return c;    
    }
};

//T.C = O(m+n)
