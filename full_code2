#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

class Solution {
public:
    int minimumDeletions(string word, int k) {
        vector<int> freq(26, 0);

        for (char &ch : word) {
            freq[ch - 'a']++;
        }

        sort(begin(freq), end(freq));
        int result = word.length();
        int cumulative_del = 0;

        for (int i = 0; i < 26; i++) {
            int del = cumulative_del;
            for (int j = 25; j > i; j--) {
                if (freq[j] - freq[i] <= k) {
                    break;
                }
                del += freq[j] - freq[i] - k;
            }
            result = min(result, del);
            cumulative_del += freq[i];
        }
        return result;
    }
};

int main() {
    string word;
    int k;
    cout << "Enter the word: ";
    cin >> word;
    cout << "Enter k: ";
    cin >> k;

    Solution sol;
    int ans = sol.minimumDeletions(word, k);
    cout << "Minimum deletions: " << ans << endl;
    return 0;
}
