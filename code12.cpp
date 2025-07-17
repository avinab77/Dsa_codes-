//problem to find the K-th character in the String Game I
//Leetcode 3304) code in C++ (easy marked)
//daily problem 03/07/2025

class Solution {
public:
    char kthCharacter(int k) {
        std::string sb = "a";
        while (sb.length() < k) {
            int size = sb.length();
            for (int i = 0; i < size; ++i) {
                char nextChar = 'a' + ((sb[i] - 'a' + 1) % 26);
                sb += nextChar;
            }
        }
        return sb[k - 1];
        
    }
};

//T.C = S.C = O(k)
