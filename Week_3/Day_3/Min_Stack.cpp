class MinStack {
public:
    stack<long long>st;
    long long min;
    MinStack() {
        
    }
    
    void push(int val) {
      if(st.empty()){
        st.push(val);
        min = val;
      }
        else{
            if(val >= min) st.push(val);
            else{
                st.push(2LL*val-min);
                min = val;
            }
        }
      }  
    
    void pop() {
        if(st.empty()) return;
            long long x = st.top();
            st.pop();
            if(x < min){
            min = 2*min - x;
            }
    }
    
    int top() {
    if(st.empty()) return -1;
    if(min <= st.top()) return st.top();
    else return min;   
    }
    
    int getMin() {
     return min;   
    }
};