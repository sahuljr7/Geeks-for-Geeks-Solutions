// https://practice.geeksforgeeks.org/problems/sum-of-digits1742/1#

// { Driver Code Starts
#include<bits/stdc++.h> 
using namespace std;

 // } Driver Code Ends
class Solution{
public:
    int sumOfDigits(int N){
        //code here
        int sum_digits = 0;
        while(N  >0)
        {
            sum_digits += N%10;
            N /=10; 
        }
        return sum_digits;
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
        cout << ob.sumOfDigits(N) << endl;
    }
    return 0; 
}  // } Driver Code Ends
