//problem to find valid word 
//Leetcode 3136) code in C++ (easy marked)
//daily problem 15/07/2025

***********************Approach1**********************
class Solution {
public:
    bool isValid(string word) {
        if(word.length() < 3) {
            return false;
        }

        bool hasVowel     = false;
        bool hasConsonant = false;

        for(char ch : word) {
            if(isalpha(ch)){
                ch = tolower(ch);
                if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'){
                    hasVowel = true;
                } else {
                    hasConsonant = true;
                }
            } else if(!isdigit(ch)) {
                return false;
            }
        }

        return hasVowel && hasConsonant;
    }
};
