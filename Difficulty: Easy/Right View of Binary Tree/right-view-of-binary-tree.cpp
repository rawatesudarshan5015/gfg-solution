/*
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = nullptr;
        right = nullptr;
    }
};
*/

class Solution {
  public:
    vector<int> rightView(Node *root) {
        //  code here
        vector<int>ans;
        
        queue<Node*>q;
        
        q.push(root);
        
        while(!q.empty()){
            
            int n = q.size();
            
            for(int i=0;i<n;i++){
                Node* rightNode = q.front();

                q.pop();
                
                if(i==n-1) ans.push_back(rightNode->data);
                
                if(rightNode->left){
                    q.push(rightNode->left);
                }
                if(rightNode->right){
                    q.push(rightNode->right);
                }
                
            }
        }
        return ans;
    }
};