class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        if(s.size() == 1) return false;

        for(const auto& c: s){
            if(c == '(' || c == '{' || c == '['){
                st.push(c);
            }else{
                if(st.empty()) return false;
                else{
                    if((c == ')' && st.top() != '(') || 
                        (c == '}' && st.top() != '{') ||
                        (c == ']' && st.top() != '[')
                    )return false;
                        st.pop();
                    }
                }
            }
        

        
        return st.empty();
    }
};
