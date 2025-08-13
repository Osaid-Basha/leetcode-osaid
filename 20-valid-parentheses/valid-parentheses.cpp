#include <stack>
#include <string>
using namespace std;

class Solution {
public:
    bool isValid(string s) {
        if (s.empty()) return true; // الفارغ صحيح في المسألة
        if (s[0]==')' || s[0]==']' || s[0]=='}') return false;

        stack<char> c;

        for (int i = 0; i < (int)s.length(); i++) {
            if (s[i]=='(' || s[i]=='[' || s[i]=='{') {
                c.push(s[i]);
            }
         
            else if (c.empty()) {
                return false;
            }
            else if (!((c.top()=='(' && s[i]==')') ||
                       (c.top()=='[' && s[i]==']') ||
                       (c.top()=='{' && s[i]=='}'))) {
                return false;
            }
            else {
                c.pop();
            }
        }

        return c.empty();
    }
};
