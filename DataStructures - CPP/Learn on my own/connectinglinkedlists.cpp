#include <iostream>

using namespace std;

class Node
{
    public: 
    Node* next;
    int data;


};
 
//Function that loops through the linked lists until it reaches NUll
void printlist(Node* head)
{
    while(head != NULL) // While the 
    {
        cout << head -> data << endl;
        head = head -> next; //Current pointer points to the next pointer until the pointer is null

    }

} 

int main()
{
    //creating the nodes using pointers and allocating memory for the node Object on the heap 
    Node* head = new Node;//creating pointer to the dynammically allocated node objects
    Node* second = new Node; 
    Node* third = new Node;
    
    //Connecting the pointers here
    head -> data = 1;
    head -> next = second ;

    second -> data = 2;
    second -> next = third ;

    third -> data = 3;
    third -> next = NULL; //last element of linked list is assigned to NULL

    printlist(head);
    
    //freeing the memory
    delete head;
    delete second;
    delete third;
}