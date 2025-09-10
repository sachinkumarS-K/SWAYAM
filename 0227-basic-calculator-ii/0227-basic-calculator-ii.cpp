class Solution {
public:
    int calculate(string s) {
        stack<int> stk;
        int num = 0;
        char ch = '+';
        for (int j = 0 ; j<s.size(); j++) {
            char i = s[j];
            if (i >= '0' && i <= '9') {
                num = num * 10 + (i - '0');
            } 
            if ((!(i >= '0' && i <= '9') && i != ' ') || j == s.size()-1) {
                if (ch == '+')
                    stk.push(num);
                else if (ch == '-')
                    stk.push(-num);
                else if (ch == '*') {
                    int t = stk.top();
                    stk.pop();
                    stk.push(t * num);
                } else if (ch == '/') {
                    int t = stk.top();
                    stk.pop();
                    stk.push(t / num);
                }
                // cout<<num<<" ";
                ch = i;
                num = 0;
            }
        }
        int ans = 0;
        while (!stk.empty()) {
            cout<<stk.top()<<" ";
            ans += stk.top();
            stk.pop();
        }
        return ans;
    }
};