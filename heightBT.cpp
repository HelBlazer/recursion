#include<bits/stdc++.h>
using namespace std;

class Node{
public:
    int data;
    Node *left,*right;

    Node(int d){
        this->data=d;
        this->left=this->right=NULL;
    }
};

Node* preOrderBuild(){
    int d;
    cin>>d;
    if(d==-1)
        return NULL;
    Node* root=new Node(d);
    root->left=preOrderBuild();
    root->right=preOrderBuild();
    return root;
}

void printPreOrder(Node* root){
    if(root==NULL)
        return;
    cout<<root->data<<" ";
    printPreOrder(root->left);
    printPreOrder(root->right);
}

int height(Node* root){
    if(root==NULL)
        return 0;
    return 1+max(height(root->left),height(root->right));
}

int main(){
    Node* root=preOrderBuild();
    cout<<endl;
    printPreOrder(root);
    cout<<endl<<height(root);
    return 0;
}