// https://practice.geeksforgeeks.org/problems/palindrome0746/1#

// { Driver Code Starts
//Initial Template for C++


#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function Template for C++

class Solution
{
	public:
		string is_palindrome(int n)
		{
		    string number = to_string(n);
		    int start = 0; 
		    int end = number.size()-1;
		    for(start =0; start < number.size()/2; start++)
		    {
		        if(number[start] != number[end])   
		            return "No";
		        end--;
		    }
		    return "Yes"; 
		}
};

// { Driver Code Starts.
int main(){
    int T;
    cin >> T;
    while(T--)
    {
    	int n;
    	cin >> n;
    	Solution ob;
    	string ans = ob.is_palindrome(n);
    	cout << ans <<"\n";
    }
	return 0;
}
  // } Driver Code Ends
