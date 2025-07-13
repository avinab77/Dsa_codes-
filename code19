//problem to Maximum matching of players with trainers.
//Leetcode 2410) code in C++ (medium marked)
//daily problem 13/07/2025

class Solution {
public:
    int matchPlayersAndTrainers(vector<int>& players, vector<int>& trainers) {
        sort(begin(players), end(players));
        sort(begin(trainers), end(trainers));
        int m = players.size();
        int n = trainers.size();

        int count = 0;
        
        int i = 0;
        int j = 0;

        while(i < m && j < n) {
            if(players[i] <= trainers[j]){
               i++;
               count++;
            } 

            j++;
        }

        return count;
    }
};
