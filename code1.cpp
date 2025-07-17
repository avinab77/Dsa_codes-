//problem to solve max manhattan distance from the origin that can be achieved at any time while performing the movements in order. 
//Leetcode 3443) code in C++ (medium marked)
//daily problem 20/06/2025

class Solution {
public:
    int maxDistance(string s, int k) {
        int maxMD = 0;

        int east = 0;
        int west = 0;
        int north = 0;
        int south = 0;

        for(int i = 0; i < s.length(); i++) {
            if(s[i] == 'E') east++;
            if(s[i] == 'W') west++;
            if(s[i] == 'N') north++;
            if(s[i] == 'S') south++;

            int currMD = abs(east-west) + abs(north-south);
            int steps = i + 1;
            int wasted = steps - currMD;

            int extra = 0;
            if(wasted != 0) {
                extra = min(2*k,wasted);
            }
            int finalcurrentMD = currMD + extra;
            maxMD = max(maxMD, finalcurrentMD);
        }
        return maxMD;
        
    }
};

