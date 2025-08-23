class Solution {
public:
    int maxRepeating(string sequence, string word) {
        int k = 0;
        string t = word;
        while (sequence.find(t) != string::npos) {
            ++k;
            t += word;
        }
        return k;
    }
};
