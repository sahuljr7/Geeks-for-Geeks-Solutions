//https://practice.geeksforgeeks.org/problems/check-string1818/1#

// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends

class Solution
{
    public:
        bool check (string s)
        {
        	int len = s.size(); 
        	   for(int i =1;  i< len-1; i++)
        	   {
        	       if(s[i] != s[0])
        	        return false; 
        	   }
        	   return true;
        }
};

// { Driver Code Starts.

int main()
{
    int t; cin >> t;
    while (t--)
    {
		string s;
		cin >> s;
		Solution ob;
		if (ob.check (s))
			cout << "YES\n";
		else 
			cout << "NO\n";
	}
}

// Contributed By: Pranay Bansal
  // } Driver Code Ends
