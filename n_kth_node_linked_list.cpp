// https://practice.geeksforgeeks.org/problems/find-nk-th-node-in-linked-list/1#

// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

int fractional_node(struct Node* head,int k);

struct Node
{
    int data;
    struct Node *next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
    
};

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        Node* ptr,*start = NULL,*ptr1;
        int n,i;
        cin>>n;
        
        for(i=0;i<n;i++)
        {
            int value;
            cin>>value;
            
            ptr=new Node(value);
            
            if(start==NULL)
            {
                start=ptr;
                ptr1=ptr;
            }
            else
            {
                ptr1->next=ptr;
                ptr1=ptr1->next;
            }
        }
        ptr1->next=NULL;
        int k;
        cin>>k;
        int p = fractional_node(start,k);
        cout<<p<<endl;
    }
}
// } Driver Code Ends


/*The structure of the node is
struct Node
{
    int data;
    struct Node *next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
    
};
*/

int count_number_of_nodes(Node *head)
{
    int counter = 0;
    while(head != NULL)
    {
        counter++;
        head = head->next;
    }
    
    return counter; 
}


int fractional_node(struct Node *head, int k)
{
    Node *current =head;
    int number_of_nodes = count_number_of_nodes(current);
    
    current = head;
    int position;
    if((number_of_nodes % k) == 0)
        position = number_of_nodes / k;
    else
        position = (number_of_nodes / k)+1;
    while(head != NULL && position >1)
    {
        position--;
        current = current->next;
    }
    
    if(current == NULL)
        return -1; 
    return current->data; 
}
