#include<iostream>
#include<queue>
using namespace std;

class Node
{
 public:
     int data;
     Node*left,*right;
     Node(int data)
     {
         this->data=data;
         left=NULL;right=NULL;
     }
};
void Level_traversal(Node *root)
{
    queue<Node *>q;
    q.push(root);
    while(root!=NULL || q.empty()==false)
    {
        root=q.front();
        cout<<root->data<<" ";
        if(root->left!=NULL)
            q.push(root->left);
        if(root->right!=NULL)
            q.push(root->right);

        q.pop();
    }
}
int main()
{
    Node *root=new Node(10);
    root->right=new Node(30);
    root->right->right=new Node(40);
    root->right->right->left=new Node(50);
    root->right->right->right=new Node(60);

    Level_traversal(root);

    return 0;
}
