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
void search_key(Node *root,int key)
{
        queue<Node *>q;
        q.push(root);
        int flag=0;
        while((root!=NULL&&flag==0) || (!q.empty()&&flag==0))
        {
            root=q.front();
            if(root->data==key)
            {
                flag=1;
            }

                if(root->left!=NULL)
                    q.push(root->left);
                if(root->right!=NULL)
                    q.push(root->right);
                     q.pop();
        }
        if(flag==1)
            cout<<"found";
        else
            cout<<"Not found";
}

int main()
{
    Node *root=new Node(10);
    root->right=new Node(30);
    root->right->right=new Node(40);
    root->right->right->left=new Node(50);
    root->right->right->right=new Node(60);

    int key;
    cout<<"Enter the number to search :";
    cin>>key;
    search_key(root,key);

    return 0;
}
