#include<iostream>
using namespace std;

class Solution{
    public:
    // Function to find equilibrium point in the array.
    // a: input array
    // n: size of array
    int equilibriumPoint(long long a[], int n) {
        
        //for calculating the total sum;
        int sum = 0;
        for(int i= 0; i<n; i++) {
            sum+=a[i];
        }
        
        int leftSum = 0;
        for(int i= 0; i<n; i++) {
            leftSum += a[i];
            if(sum == leftSum) {
                return i+1;       //1-based indexing
            }
            else {
                sum-= a[i];      //calculating right sum
            }
        }
        
        return -1;   //no point is found
    }
};
