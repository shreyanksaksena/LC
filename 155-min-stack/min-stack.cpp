class MinStack {
public:
stack<int> st , mn ;
    MinStack() {
        
    }
    
    void push(int val) {
        st.push(val) ; // Keep pushing the elements in the stack st
        if(mn.empty() || val <= mn.top()) // check if the stack is empty push into min stack and most importantly check if the the new incoming value is <= mn.top  st = 3 1 2 1    mn = 3 1 1  3 gets pushed into the stack then since 1 <=3 1 get pushed 
        {
            mn.push(val) ;
        }
    }
    
    void pop() {
        if(st.top()==mn.top())
        {
            mn.pop() ;
        }
        st.pop() ;

    }
    
    int top() {
        return st.top() ;
    }
    
    int getMin() {
        return mn.top();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */