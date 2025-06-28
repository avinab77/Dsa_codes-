//problem to find subsequence of length k with the largest sum. 
//Leetcode 2099) code in C++ (easy marked) by 2 approaches
//daily problem 28/06/2025


*************************Approach-1****************************

class Solution {
public:
    vector<int> maxSubsequence(vector<int>& nums, int k) {
        
        int n = nums.size();
        if(k == n){
            return nums;
        }

        vector<pair< int,int>> vec(n);
        for(int i = 0; i < n; i++) {
            vec[i] = make_pair(i, nums[i]);
        } 

        auto lambda = [](auto &p1, auto& p2){
            return p1.second > p2.second; //DESC ORDER of element value
        };

        sort(begin(vec), end(vec), lambda);

        sort(begin(vec), begin(vec)+k); //Correct order of top k elements

        vector<int> result(k);
        for(int i = 0; i < k; i++) {
            result[i] = vec[i].second;
        }
        
        return result;
    }
};

//T.C = O(nlogn)
//S.C = O(n)

*************************Approach-2****************************

class Solution {
public:
    vector<int> maxSubsequence(vector<int>& nums, int k) {

        int n =nums.size();
        if(k == n) {
            return nums;
        }

        vector<int> temp(nums);

        nth_element(begin(temp), begin(temp) + k - 1, end(temp), greater<int>()); //kth largest at right index

        int kthLargest = temp[k-1];
        int countKthLargest = count(begin(temp), begin(temp) + k, kthLargest);

        vector<int> result;
        
        for(int &num : nums) {
            if(num > kthLargest) {
                result.push_back(num);
            } else if(num == kthLargest && countKthLargest > 0) {
                result.push_back(num);
                countKthLargest--;
            }

            if(result.size() == k){
                break;
            }
        }

        return result;
        
    }
};

//T.C = O(n) improved from before
//S.C = increased extra space from before as we take temp here 
