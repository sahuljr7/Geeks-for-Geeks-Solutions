// https://practice.geeksforgeeks.org/problems/lower-case-to-upper-case/0#:~:text=Given%20a%20string%20str%20containing,same%20letters%2C%20but%20in%20uppercase.&text=Your%20Task%3A,and%20returns%20the%20resultant%20string.

// { Driver Code Starts

#include <bits/stdc++.h>
using namespace std;
 
string to_upper(string in);
 
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string str;
		cin>>str;
		cout << to_upper(str)<<endl;
	}
	return 0;
}// } Driver Code Ends



string to_upper(string str){
    for(int i =0; i< str.size(); i++)
    {
        if(islower(str[i]))
            str[i] = toupper(str[i]);
    }
    return str;
    
}
