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

void lot(Node* root){
   if(root==NULL){
       return;
   }
  
  queue<Node*> q;
  q.push(root);
  while(!q.empty()){
      Node* temp = q.front();
      q.pop();
      cout<<temp->data<<" ";
      if(temp->left!=NULL){
          q.push(temp->left);
      }
      if(temp->right!=NULL){
          q.push(temp->right);
      }
  }


}

int main(){
 Node* root = nodes(5);
  root->left = nodes(7);
  root->right = nodes(8);
  root->left->left = nodes(10);
  root->left->right = nodes(50);
  root->right->right = nodes(2);

  lot(root);
  return 0;
}