class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        stack<int> st;
        vector<int> res(temperatures.size() , 0);

        for(int i = 0 ; i < temperatures.size() ;i++){
            while(!st.empty() && temperatures[i] > temperatures[st.top()]){
                int j = st.top(); st.pop();
                res[j] = i - j;
            }          
            st.push(i);
        }
        return res;
    }
};
