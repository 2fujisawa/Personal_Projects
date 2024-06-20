#include <iostream>

using namespace std;

struct Node
{
    Node* left;
    Node* right;
    int data;

};

//Function creating new node
Node *createNode(int data)
{
    Node *newNode = new Node();
    newNode -> data = data;
    newNode -> left = newNode -> right = nullptr;
    return newNode;
}

//DFS - searching through depth using - PREORDER algorithm(data,left,right,left)
void preorder(Node* root)
{
    if (root == NULL)
    {
        return;
    }
    cout << root -> data << endl;
    preorder(root->left);
    preorder(root->right);
}

//DFS - searching through depth using - INORDER algorithm(left,data,right)
void inordertree(Node* root)
{
    if (root == NULL)
    {
        return;
    }
    inordertree(root->left);
    cout << root -> data << endl;
    inordertree(root->right);
}


int main()
{
    Node *root = createNode(1);
    root -> left = createNode(2);
    root -> right = createNode(3);

    root -> left -> left = createNode(4);
    root -> left -> right = createNode(5);

    preorder(root);
    inordertree(root);
}

//Tree Traversal Algorithms
//BFS and DFS - Preorder, Inorder, Postorder
//We are using tree traversal to access in the nodes
// BFS Iterates through the Width(Horizontally) of tree one by one 
//DFS Iterates through the depth(Vertically) of tree one by one
