class MinStack {
public:
    vector<pair<int,int>>st;

    void push(int val) {
        // two cases can happen
        
        //when vector is empty
        if(st.empty()){
            pair<int,int>p = make_pair(val,val);
            st.push_back(p);
        }
        // when vector is not empty
        else{
            pair<int,int>p;
            p.first = val;
            p.second = min(val , st.back().second);
            st.push_back(p);
        }
    }
    
    void pop() {
     st.pop_back();   
    }
    
    int top() {
       return st.back().first;
    }
    
    int getMin() {
         return st.back().second;
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