//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
  public:
    string secFrequent (string arr[], int n)
    {
        //code here.
        
        int mx = 0;
        map<string,int>mp;
        for( int i=0;i<n;i++){
            mp[arr[i]]++;
            mx = max(mx,mp[arr[i]]);
        }
        
        string ans;
        int dif=INT_MAX;
        for(auto it = mp.begin();it!=mp.end();it++)
        {
            int k = it->second;
            string x = it->first;
            int d = mx-k;
            if(d!=0 && d < dif){
                dif = d;
                ans = x;
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        string arr[n];
        for (int i = 0; i < n; ++i)
            cin >> arr[i];
        Solution ob;
        cout << ob.secFrequent (arr, n) << endl;
    }
}
// Contributed By: Pranay Bansal

// } Driver Code Ends