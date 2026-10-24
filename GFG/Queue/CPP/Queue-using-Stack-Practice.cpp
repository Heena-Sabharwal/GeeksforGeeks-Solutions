void dequeue() {
        // Implement dequeue operation
        if(helper.empty()){
            while(!s.empty()){
                helper.push(s.top());
                s.pop();
            }
        }
        helper.pop();
    }
    int front() {
        // Implement front operation
        if(helper.empty()){
            while(!s.empty()){
                helper.push(s.top());
                s.pop();
            }
        }
        if(helper.empty())
            return -1;
        return helper.top();
    }
    int size() {
        // Implement size operation
        return s.size()+helper.size();
    }
};