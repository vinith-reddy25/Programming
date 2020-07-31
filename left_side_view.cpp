#include<bits/stdc++.h>

using namespace std;

struct Node
{
    int data;
    Node *left, *right;
};

Node* nodes(int data){
   Node* temp = new Node();
   temp->data = data;
   temp->left = NULL;  temp->right = NULL;
   return temp;
}

void lfs(Node* root, int level, int& max_level){
    if(root==NULL){
        return;
    }
    if(max_level < level){
        cout<<root->data<<" ";
        max_level = level;
    }
    lfs(root->left, level+1, max_level);
    lfs(root->right, level+1, max_level);
}

int main(){
 Node* root = nodes(5);
  root->left = nodes(7);
  root->right = nodes(8);
  root->left->left = nodes(10);
  root->left->right = nodes(50);
  root->right->right = nodes(2);
  int max_level=0;
  lfs(root,1,max_level);
  return 0;
}