//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    int isdivisible7(string num){
        //complete the function here
        
        int rem =0 ;

        for(int i=0;i<num.size();i++){
            int temp = num[i]-'0';
            rem = (rem*10 + temp)%7;
            
        }
        if(rem*7==0){
            return 1;
        }
        return 0;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        Solution ob;
        cout << ob.isdivisible7(s) << endl;
    
cout << "~" << "\n";
}
    return 0;
}
// } Driver Code Ends