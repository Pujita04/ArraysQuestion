#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {

        int maxi = INT_MIN;
        int mini = INT_MAX;

        for(int i = 0; i<prices.size(); i++) {
            mini = min(mini, prices[i]);
            maxi = max(maxi, prices[i]-mini);
        }
      
        return maxi>=0 ? maxi: 0;
       
    }
   
};
