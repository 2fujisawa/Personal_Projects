#include <iostream>
using namespace std;

class Node
{
public: 
    int value;
    Node *next;
    Node *previous;
};

//printing head -> end
void printforward(Node *head)
{
    Node *traverse = head;
    while(traverse != NULL)
    {
        cout << traverse -> value << endl;
        traverse = traverse -> next; //pointing to next node
    }
}
//printing end -> head
void printreverse(Node *tail)
{
    Node *traverse = tail;
    while(traverse != NULL)
    {
        cout << traverse -> value << endl;
        traverse = traverse -> previous; //pointing to next node
    }
}
int main()
{

Node *head;
Node *tail;

//add first node
Node* node = new Node();
node -> value = 100;
node -> next = NULL;
node -> previous = NULL;

head = node;//You are using = here because you are jut copying the memory address of first node to the pointrs head and tail. not changing the
tail = node;//the node class member variables, poiting to the same node objects as firstnode

//add 2nd node - process of adding elements to linked list
node = new Node(); //allocating space for new node 
node ->value = 200;
node -> next = NULL;
node ->previous =  tail;
tail -> next = node;
tail = node;

printforward(head);
printreverse(tail);

}