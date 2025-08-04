#include <map>
class Solution {
public:
    int romanToInt(string s) {
       
       map<char, int> Roman = {
            {'I', 1}, {'V', 5}, {'X', 10},
            {'L', 50}, {'C', 100}, {'D', 500}, {'M', 1000}
        };
        int value=0;
    for(int i=0;i<s.length();i++){
        if(Roman[s[i]]>=Roman[s[i+1]])
            value+=Roman[s[i]];
        else
            value-=Roman[s[i]];
    }
    return value;
    }
    
};