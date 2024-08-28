//Linked List - Using nodes(pointers to point to other nodes/element)
#include <iostream>

using namespace std;

struct Node //calling stuct Node
{
    int data; //initializing variables data 
    Node *connect; // creating pointer to a node called connect node ----> connect
};

typedef Node *nodePtr; //everytime we declare the *nodePtr we don't have to put the * anymore as we are defining it here as a typedef
                        //Node* nodeptr is the same thing as Node *nodeptr

//creating function to input a node
void insert(nodePtr& head, int data) //inserting the head pointers memory address, so the actual value to what the head is poiting to
{
    nodePtr temporaryptr;
    temporaryptr = new Node; //creating a new node everytime we bring in a pointer that saves the link for the next node and the int
    temporaryptr -> data = data; //bringing in the values from the parameter list in this case 100
    temporaryptr -> connect = head; //linking the next node to head which as the data 20
    head = temporaryptr;

}


int main()
{
    nodePtr head = NULL; //declaring a variable called head that is pointing to nothing
    nodePtr newnode = new Node(); //allocate memory for newnode

    head = newnode; //pointing head to newnode


    newnode -> data = 20;
    newnode -> connect = NULL;

    cout << head -> data << endl  << head -> connect << endl; //using the pointer head that is pointing to the newnode and dereferencing the data you should get 20 and 0

    insert(head,100); //bringing the ndata 100 to the head of the list  
 
    nodePtr tmp;
    tmp = head; //head should be the front of the list

    while(tmp != NULL)
    {
        cout << tmp -> data << endl;
        tmp = tmp -> connect;
    }

}