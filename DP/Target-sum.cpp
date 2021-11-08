// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;
// } Driver Code Ends
//Back-end complete function Template for C++

class Solution {
public:
    int findTargetSumWays(vector<int>&A , int target) {
        //Your code here
        int sum = 0, d = 0;
        for (int i = 0; i < A.size(); i++) {
            sum += A[i];
        }
        d = sum + target;
        if (d % 2 != 0) {
            return 0;
        }
        d = d / 2;
        int n = A.size();
        int dp[n + 1][d + 1];
        for (int i = 0; i < d + 1; i++) {
            dp[0][i] = 0;
        }
        for (int i = 0; i < n + 1; i++) {
            dp[i][0] = 1;
        }
        for (int i = 1; i < n + 1; i++) {
            for (int j = 1; j < d + 1; j++) {
                if (A[i - 1] <= j) {
                    dp[i][j] = dp[i - 1][j] + dp[i - 1][j - A[i - 1]];
                }
                else {
                    dp[i][j] = dp[i - 1][j];
                }
            }
        }
        return dp[n][d];
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;

        cin >> N;
        vector<int>arr(N);

        for (int i = 0 ; i < N ; i++) {
            cin >> arr[i];
        }
        int target;
        cin >> target;

        Solution ob;
        cout << ob.findTargetSumWays(arr, target);
        cout << "\n";
    }
    return 0;
}  // } Driver Code Ends