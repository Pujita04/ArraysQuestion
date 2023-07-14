#include<iostream>
#include<vector>

using namespace std;

// User function template for C++

class Solution{
  public:
    int missingNumber(vector<int>& array, int n) {
        
        int sum = (n) * (n+1)/2;
        int sumarray = 0;
        
        for(int i=0; i<array.size(); i++) {
            sumarray += array[i];
        }
        
        return sum - sumarray;
    }
};
