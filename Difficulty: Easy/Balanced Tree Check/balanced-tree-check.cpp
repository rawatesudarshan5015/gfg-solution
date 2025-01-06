//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// Tree Node structure
struct Node {
    int data;
    Node* left;
    Node* right;
};

// Utility function to create a new Tree Node
Node* createNode(int value) {
    Node* temp = new Node;
    temp->data = value;
    temp->left = nullptr;
    temp->right = nullptr;
    return temp;
}

// Function to build a tree from a string representation
Node* buildTree(string str) {
    if (str.empty() || str[0] == 'N')
        return nullptr;

    vector<string> nodeValues;
    istringstream iss(str);
    for (string s; iss >> s;)
        nodeValues.push_back(s);

    Node* root = createNode(stoi(nodeValues[0]));
    queue<Node*> nodeQueue;
    nodeQueue.push(root);

    size_t i = 1;
    while (!nodeQueue.empty() && i < nodeValues.size()) {
        Node* currentNode = nodeQueue.front();
        nodeQueue.pop();

        string leftValue = nodeValues[i++];
        if (leftValue != "N") {
            currentNode->left = createNode(stoi(leftValue));
            nodeQueue.push(currentNode->left);
        }

        if (i >= nodeValues.size())
            break;

        string rightValue = nodeValues[i++];
        if (rightValue != "N") {
            currentNode->right = createNode(stoi(rightValue));
            nodeQueue.push(currentNode->right);
        }
    }

    return root;
}


// } Driver Code Ends
/* A binary tree node structure

struct Node
{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int x){
        data = x;
        left = right = NULL;
    }
};
 */

class Solution {
  public:
    // Function to check whether a binary tree is balanced or not.
    bool ans =true;
    int solve(Node*root){
        if(!root) return 0;
        
        int lh = solve(root->left);
        int rh = solve(root->right);
        if(abs(lh-rh)>1) ans =false;
        return max(lh,rh)+1;
    }
    bool isBalanced(Node* root) {
        // Code here
        solve(root);
        return ans;
        
    }
};


//{ Driver Code Starts.

int main() {
    int testCases;
    cin >> testCases;
    cin.ignore(); // Ignore the newline after the number of test cases

    while (testCases--) {
        string treeInput;
        getline(cin, treeInput);

        Node* root = buildTree(treeInput);
        Solution solution;
        bool result = solution.isBalanced(root);

        // Output "true" or "false"
        cout << (result ? "true" : "false") << endl;
        cout << "~" << endl;
    }

    return 0;
}

// } Driver Code Ends