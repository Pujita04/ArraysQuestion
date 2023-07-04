#include <bits/stdc++.h> 


int findSum(vector<int>&arr, int s) {
	int sum = 0;
	for(int i=0; i<s; i++) {
		sum = arr[i] + sum*10;

	}
	return sum;
}
vector<int> findArraySum(vector<int>&a, int n, vector<int>&b, int m) {
	int sum1 = findSum(a, n);
	int sum2 = findSum(b, m);

	int finalSum = sum1+sum2;
	vector<int>ans;
	while(finalSum>0) {
		ans.push_back(finalSum%10);
		finalSum/=10;
		
	}
	reverse(ans.begin(), ans.end());
	return ans;
	
}
