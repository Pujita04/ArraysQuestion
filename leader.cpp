#include<iostream>
#include<vector>
using namespace std;

class Solution{
    //Function to find the leaders in the array.
    public:
    vector<int> leaders(int a[], int n){
        
        vector<int> ans;
        
        int i = n-2;
        
        int maxi = a[n-1];
        ans.push_back(a[n-1]);
        while(i>=0) {
            if(maxi <= a[i]) {
                maxi = a[i];
                ans.push_back(a[i]);
                i--;
            }
            else{
                i--;
            }
        }
        
        reverse(ans.begin(),ans.end());
        return ans;
      
    }
};
