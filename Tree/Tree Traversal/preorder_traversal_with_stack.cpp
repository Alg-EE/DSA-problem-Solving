#include<iostream>
#include<stack>
using namespace std;

class Node
{
    public:
    int data;
    Node *right,*left;
    Node(int item)
    {
         data=item;
        left=NULL;
        right=NULL;
    }

};

void preOrder(Node *curr)
{
    stack<Node *>stk;
    while(curr!=NULL || stk.empty()==false)
    {

        while(curr!=NULL)
        {

            stk.push(curr);
            cout<<curr->data<<" " ;
            curr=curr->left;
        }
        curr=stk.top();
        stk.pop();
        curr=curr->right;
    }
}
int main()
{
    Node *root=new Node(1);
    root->left=new Node(2);
    root->right=new Node(3);
    root->left->left=new Node(4);
    root->left->right=new Node(5);

    preOrder(root);


    return 0;
}
