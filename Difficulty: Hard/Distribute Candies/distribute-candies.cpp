/*
class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int x) {
        data = x;
        left = right = nullptr;
    }
};
*/

class Solution {
  public:
    
    int ans;
  
    int solve(Node* root){
        if(root==NULL) return 0;
        
        int left = solve(root->left);
        int right = solve(root->right);
        ans += abs(left) + abs(right);
        return root->data + left + right - 1;
        
        
    }
    int distCandy(Node* root) {
        // code here
        ans = 0;
        
        
        solve(root);
        return ans;
        
    }
};