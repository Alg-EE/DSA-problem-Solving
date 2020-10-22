#include<iostream>
#include<stack>
#include<queue>
using namespace std;

class Node
{
public:
    int data;
    Node *right,*left;
    Node(int data)
    {
        this->data=data;
        right=left=NULL;
    }
};

void spiral_form(Node *root)
{
     stack<Node*>stk1;
     stack<Node*>stk2;

    //Traversing in level spiral form
    stk1.push(root);

    while((!stk1.empty()) || (!stk2.empty()))
    {
        while(!stk1.empty())
        {
            root=stk1.top();
            cout<<root->data<<" ";
            if(root->right!=NULL)
                stk2.push(root->right);
            if(root->left!=NULL)
                stk2.push(root->left);
            stk1.pop();
        }
        while(!stk2.empty())
        {
            root=stk2.top();
            cout<<root->data<<" ";
            if(root->left!=NULL)
                stk1.push(root->left);
            if(root->right!=NULL)
                stk1.push(root->right);
                stk2.pop();
        }
    }

}
void line_by_line(Node *root)
{


    queue<Node *>q;
    q.push(root);
    q.push(NULL);
    while(!q.empty())
    {

        root=q.front();
        q.pop();
        if(root!=NULL)
        {

            cout<<root->data<<" ";
            if(root->left!=NULL)
                q.push(root->left);
            if(root->right!=NULL)
                q.push(root->right);
        }
        if(root==NULL)
        {
            if(q.size()>1)
            q.push(NULL);

            cout<<"\n";
        }
    }

}
void inorder(Node *root)
{
    if(root==NULL)
        return;
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
int main()
{
    Node *root=new Node(1);
    root->right=new Node(3);
    root->left=new Node(2);
    root->left->left=new Node(7);
    root->left->right=new Node(6);
    root->right->right=new Node(4);
    root->right->left=new Node(5);
 cout<<"Spiral Form :";
   spiral_form(root);

 cout<<"\nInorder Form : ";
    inorder(root);

 cout<<"\n line by line"<<endl;
   line_by_line(root);
    return 0;
}
