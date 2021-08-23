// { Driver Code Starts
#include<bits/stdc++.h> 
using namespace std;

 // } Driver Code Ends
class Solution{
public:
    long long int factorial(int N){
        //code here
        long long int fac=N;
        if(N==0){
            return 1;
        }
        for (long long int i = N-1; i >0; i--)
        {
            fac=fac*i;
        }
        return fac;
    }
};

// { Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        Solution ob;
        cout << ob.factorial(N) << endl;
    }
    return 0; 
} 