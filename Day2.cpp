//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// User function template for C++
class Solution {
  public:
    void pushZerosToEnd(vector<int>& arr) {
        int n=arr.size();
        vector<int> ans;
        int count=0;
        for(int i=0;i<n;i++){
            if(arr[i]!=0){
                ans.push_back(arr[i]);
            }else{
                count++;
            }
        }
        for(int i=0;i<ans.size();i++){
            arr[i]=ans[i];
        }
        for(int i=ans.size();i<ans.size()+count;i++){
            arr[i]=0;
        }
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution ob;
        int n = arr.size();
        ob.pushZerosToEnd(arr);
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends
