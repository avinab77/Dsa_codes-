//problem to find maximum no. of events that can be attended
//Leetcode 1353) code in C++ (medium marked)
//daily problem 07/07/2025

********************Approach1*******************
//Using Hashmap and sorting methods

class Solution {
public:
    int maxEvents(vector<vector<int>>& events) {
        int n = events.size();

        sort(begin(events), end(events));

        priority_queue<int, vector<int>, greater<int>> pq;

        int day = events[0] [0];
        int i = 0;
        int count = 0;

        while(!pq.empty() || i < n) {

            if(pq.empty()){
            day = events [i] [0];
            }

            while(i < n && events[i] [0] == day) {
                pq.push(events[i][1]);
                i++;
            }

            if(!pq.empty()) {
                pq.pop();
                count++;
            }

            day++;

            while(!pq.empty() && pq.top() < day) {
                pq.pop();
            }
        }

        return count;
         
    }
};

//T.C = O(nlogn)
