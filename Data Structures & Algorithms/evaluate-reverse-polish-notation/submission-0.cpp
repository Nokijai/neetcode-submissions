class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;
        int sum;
        for(const string& t: tokens){
            if(t == "+" || t == "-" || t == "*" || t == "/"){
                int right = st.top();st.pop();
                int left = st.top();st.pop();

                if(t == "+") st.push(right + left);
                else if(t == "-") st.push(left - right);
                else if(t == "*") st.push(left * right);
                else st.push(left / right);
            }else{
                st.push(stoi(t));
            }
            
        }
        return st.top();
    }
};
