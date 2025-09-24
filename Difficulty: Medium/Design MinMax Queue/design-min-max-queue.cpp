class SpecialQueue {

  public:
    
   
    queue<int>q;
    queue<int>temp;
    void enqueue(int x) {
        // Insert element into the queue
        q.push(x);
        // minelement = min(minelement,x); 
        // maxelement = min(maxelement,x); 

    }

    void dequeue() {
        // Remove element from the queue
        q.pop();
        
    }

    int getFront() {
        // Get front element
        return q.front();
    }

    int getMin() {
        // Get minimum element
        int minelement = INT_MAX;
        while(!q.empty()){
            temp.push(q.front());
            minelement = min(minelement,q.front()); 
            q.pop();
        }
         while(!temp.empty()){
            q.push(temp.front());
             
            temp.pop();
        }
        // cout<<minelement;
        return minelement;
    }

    int getMax() {
        // Get maximum element
         int maxelement = INT_MIN;
        while(!q.empty()){
            temp.push(q.front());
            maxelement = max(maxelement,q.front()); 
            q.pop();
        }
         while(!temp.empty()){
            q.push(temp.front());
             
            temp.pop();
        }
        // cout<<maxelement;
        return maxelement;
    }
};