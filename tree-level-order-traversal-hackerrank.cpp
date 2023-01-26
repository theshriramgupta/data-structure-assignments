#include <bits/stdc++.h>	

using namespace std;

class Node {
    public:
        int data;
        Node *left;
        Node *right;
        Node(int d) {
            data = d;
            left = NULL;
            right = NULL;
        }
};

class Solution {
    public:
  		Node* insert(Node* root, int data) {
            if(root == NULL) {
                return new Node(data);
            } else {
                Node* cur;
                if(data <= root->data) {
                    cur = insert(root->left, data);
                    root->left = cur;
                } else {
                    cur = insert(root->right, data);
                    root->right = cur;
               }

               return root;
           }
        }
/*
class Node {
    public:
        int data;
        Node *left;
        Node *right;
        Node(int d) {
            data = d;
            left = NULL;
            right = NULL;
        }
};
*/

    void levelOrder(Node * root) {
        if(!root)return;
        
        queue<Node*>Q;
        
        Q.push(root);
        
        cout << root ->data << " ";
        
        while(!Q.empty()){
            Node* temp = Q.front();
            Q.pop();
            if(temp->left){
                cout << temp->left->data << " ";
                Q.push(temp ->left);
            }
            if(temp ->right){
                cout << temp->right->data << " ";
                Q.push(temp ->right);
            }
        }
        
    }

};
