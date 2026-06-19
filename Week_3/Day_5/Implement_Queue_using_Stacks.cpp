class MyQueue {
public:
    stack<int>input;
    stack<int>output;
    MyQueue() {
        
    }
    
    void push(int x) {
    input.push(x);    
    }
    
    int pop() {
    if(output.empty()){
        while(!input.empty()){
            output.push(input.top());
            input.pop();
        }
    }
    int val = output.top();
    output.pop();
    return val;   
    }
    
    int peek() {
        if(output.empty()){
        while(!input.empty()){
            output.push(input.top());
            input.pop();
        }
    }
    int val = output.top();
    return val;
        
    }
    
    bool empty() {
    return input.empty() && output.empty();    
    }
};