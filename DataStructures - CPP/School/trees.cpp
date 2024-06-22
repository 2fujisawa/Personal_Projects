#include <iostream>

using namespace std;

//Class alternative
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
    newNode -> left = nullptr;
    newNode -> right = nullptr;
    return newNode;
}

//DFS - searching through depth using - PREORDER algorithm(data,left,right,left)
void preorder(Node* root)
{
    if (root == NULL)
    {
        return;
    }
    cout << root -> data << " ";
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
    cout << root -> data << " ";
    inordertree(root->right);
}

void postordertree(Node* root)
{
    if(root == NULL)
    {
        return;
    }
    inordertree(root->left);
    inordertree(root->right);
    cout << root -> data << " ";
}

int main()
{
    Node *root = createNode(1);
    root -> left = createNode(2);
    root -> right = createNode(3);

    root -> left -> left = createNode(4);
    root -> left -> right = createNode(5);

    cout << "The preorder traversal is: ";
    preorder(root);
    cout << "\nThe inorder traversal is: ";
    inordertree(root);
    cout << "\nThe postorder traversal is: ";
    postordertree(root);

}

//Tree Traversal Algorithms
//DFS - Preorder, Inorder, Postorder BFS and 
//We are using tree traversal to access in the nodes
//DFS Iterates through the depth(Vertically) of tree one by one
//BFS Iterates through the Width(Horizontally) of tree one by one 

