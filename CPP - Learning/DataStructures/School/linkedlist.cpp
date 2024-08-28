#include "linkedlist.h"
#include <iostream>

using namespace std;

int main()
{
    //List Nodes
    List<int> node1(100); //creates first node with data 100
    List<int> node2(200);
    List<int> node3(300);
    

    //Link these objects/nodes together to create linked list
    node1.next = &node2;  //making node1 point to the memory adddress of node 2
    node2.before = &node1;
    node2.next = &node3;
    node3.before = &node2;

    //Forward Traversal //linking nodes 
    List<int> *current = &node1;
    while(current != nullptr)
    {
        cout << current -> memorydata << " ";
        current = current -> next;
    }
    cout << endl;

}
