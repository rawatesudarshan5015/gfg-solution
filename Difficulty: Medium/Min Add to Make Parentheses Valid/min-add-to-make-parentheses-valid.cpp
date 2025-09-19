class Solution {
  public:
    int minParentheses(string& s) {
        // code here
        stack<char> st;
        int count =0;
        for(char x:s){
            if(x=='(') st.push(x);
            else if(x==')'&& !st.empty()){
                st.pop();
            }else if(st.empty() && x==')'){
                count++;
            }
        
        
        }
        
        while(!st.empty()){
            count++;
            st.pop();
        }
        return count;
    }
};