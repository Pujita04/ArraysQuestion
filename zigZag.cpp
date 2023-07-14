#include<iostream>
using namespace std;

// User function template for C++
class Solution {
  public:
    // Program for zig-zag conversion of array
    void zigZag(int arr[], int n) {
        
        int i = 0;
        while(i< n-1) {
            
            //even indexes
            if(i % 2==0) {
                if(arr[i] > arr[i+1]) {
                    swap(arr[i], arr[i+1]);
                    i++;
                }
                else {
                    i++;
                }   
            }
            
            //odd indexes
            else {
                if(arr[i] < arr[i+1]) {
                    swap(arr[i], arr[i+1]);
                    i++;
                }
                else {
                    i++;
                }
            }
        }
       
        
    }
};
