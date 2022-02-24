// https://practice.geeksforgeeks.org/problems/remove-duplicates3034/1#

// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++
class Solution{
public:	
		
	string removeDups(string S) 
	{
	    // Your code goes here
	    if (S == " " || S == "")
			return S;
		unordered_map<char, int>mp;
		int len = S.size();
		for (int i = 0; i < len; i++)
		{
			mp[S[i]]++;
		}
		string result = "";
		for (int i = 0; i < len; i++)
		{
			if (mp[S[i]] != -1)
			{
				result += S[i];
				mp[S[i]] = -1;
			}
		}
		return result;
	}
};

// { Driver Code Starts.


int main() 
{
   	

   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	cin >> t;
   	while(t--)
   	{
   		string s;
   		cin >> s;

   		
   		Solution ob;
   		cout << ob.removeDups(s) << "\n";
   		
   	}

    return 0;
}  // } Driver Code Ends
