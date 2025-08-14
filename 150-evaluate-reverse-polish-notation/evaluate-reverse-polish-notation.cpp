class Solution {
public:
    int evalRPN(vector<string>& tokens) {
       stack <int> value;
       for(int i=0;i< tokens.size();i++){
        if(tokens[i] == "*"){
            int v1=value.top();
            value.pop();
            int v2=value.top();
            value.pop();
            int v3=v2*v1;
            value.push(v3);
        }
        else if(tokens[i] == "/"){
            int v1=value.top();
            value.pop();
            int v2=value.top();
            value.pop();
            int v3=v2/v1;
            value.push(v3);
        }
        else if(tokens[i] == "+"){
            int v1=value.top();
            value.pop();
            int v2=value.top();
            value.pop();
            int v3=v2+v1;
            value.push(v3);
        }
        else if(tokens[i]== "-"){
            int v1=value.top();
            value.pop();
            int v2=value.top();
            value.pop();
            int v3=v2-v1;
            value.push(v3);
        }
        else{
        int v=stoi(tokens[i]);
        value.push(v);
        }

       }
       return value.top();
    }
};