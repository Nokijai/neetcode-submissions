class MinStack {
    stack<pair<int, int>> st;
public:
    MinStack() {
        
    }
    
    void push(int val) {
        int minimum;
        if(st.empty()){
            minimum = val;
        }else{
            minimum = min(val , st.top().second);
        }

        st.push({val , minimum});
    }
    
    void pop() {
        st.pop();
    }
    
    int top() {
        if(!st.empty()){
            return st.top().first;
        }
        return -1;
    }
    
    int getMin() {
        return st.top().second;
    }
};
