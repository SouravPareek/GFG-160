//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends

class Solution {
  public:
    // arr: input array
    // Function to find maximum circular subarray sum.
    int circularSubarraySum(vector<int> &arr) {
        int n=arr.size();
        int totalSum=0,currMaxSum=0,currMinSum=0,maxSum,minSum;
        maxSum=minSum=arr[0];
        
        for(int i=0;i<n;i++){
            currMaxSum=max(currMaxSum+arr[i],arr[i]);
            maxSum=max(currMaxSum,maxSum);
            currMinSum=min(currMinSum+arr[i],arr[i]);
            minSum=min(currMinSum,minSum);
            totalSum+=arr[i];
        }
        
        int normalSum=maxSum;
        int circularSum=totalSum-minSum;
        if(minSum==totalSum)
            return normalSum;
        return max(circularSum,normalSum);
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

        // Read first array
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution ob;
        int res = ob.circularSubarraySum(arr);

        cout << res << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends
