/*
class Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/
class Solution {
  public:
    vector<int> zigZagTraversal(Node* root) {
        // code here
        vector<int>result;
        queue<Node*>q;
        q.push(root);
        bool leftToRight = true;
        while(!q.empty()){
            int n = q.size();
            vector<int> temp(n);
            
            for(int i=0;i<n;i++){
                Node* front = q.front();
                q.pop();
                
                int index = (leftToRight)?i:(n-i-1);
                temp[index] = front->data;
                
                if(front->left){
                    q.push(front->left);
                }
                
                if(front->right){
                    q.push(front->right);
                }
            }
            leftToRight = !leftToRight;
            
            for(auto x: temp){
                result.push_back(x);
            }
            
        }
        return result;
        
    }
};