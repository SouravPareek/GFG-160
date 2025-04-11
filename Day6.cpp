//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    // Function to find the majority elements in the array
    vector<int> findMajority(vector<int>& arr) {
        int n=arr.size();
        int count1=0;
        int count2=0;
        int ele1,ele2;
        
        for(int i=0;i<n;i++){
            if(count1==0&&ele2!=arr[i]){
                count1=1;
                ele1=arr[i];
            }
            else if (count2==0&&ele1!=arr[i]){
                count2=1;
                ele2=arr[i];
            }
            else if(arr[i]==ele1){
                count1++;
            }
            else if(arr[i]==ele2){
                count2++;
            }
            else{
                count1--;
                count2--;
            }
        }
        
        count1=0,count2=0;
        for(int i=0;i<n;i++){
            if(arr[i]==ele1){
                count1++;
            }
            if(arr[i]==ele2){
                count2++;
            }
        }
        
        vector<int>ans;
        int mini=(int)(n/3)+1;
        if(count1>=mini){
            ans.push_back(ele1);
        }
        if(count2>=mini){
            ans.push_back(ele2);
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {

        string s;
        getline(cin, s);
        stringstream ss(s);
        vector<int> nums;
        int num;
        while (ss >> num) {
            nums.push_back(num);
        }
        Solution ob;
        vector<int> ans = ob.findMajority(nums);
        if (ans.empty()) {
            cout << "[]";
        } else {
            for (auto &i : ans)
                cout << i << " ";
        }
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends
