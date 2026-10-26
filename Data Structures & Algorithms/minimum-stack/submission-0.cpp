class MinStack {
    std::stack<int> st;
    std::stack<int> minSt;
public:
    MinStack() {
    }
    
    void push(int val) {
        st.push(val);
        
        if (minSt.empty()) {
            minSt.push(val);
        } else if (val < minSt.top()) {
            minSt.push(val);
        } else {
            minSt.push(minSt.top());
        }
    }
    
    void pop() {
        st.pop();

        minSt.pop();
    }
    
    int top() {
        return st.top();
    }
    
    int getMin() {
        return minSt.top();
    }
};
