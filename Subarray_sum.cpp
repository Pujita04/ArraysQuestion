include<iostream>
using namespace std;
include<vector>

vector<int> subarraySum(vector<int>arr, int n, long long s)
    {
        long long currentSum;
        vector<int> v;
        
        for(int i = 0; i<n; i++) {
            
            currentSum = arr[i];
            
            for(int j = i+1; j<=n; j++) {
                
                if(currentSum == s) {
                   
                   v.push_back(i+1);
                   v.push_back(j);
                   return v;
                }
                
                if(currentSum > s || j==n) {
                    break;
                }
                
                currentSum += arr[j];
            }
        }
        v.push_back(-1);
        return v;
        
     }
