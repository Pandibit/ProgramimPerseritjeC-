


#include<iostream>
using namespace std;

class Node // Elementi i listes tone qe eshte i perbere prej vleres dhe pointer-it do ta kete tipin Node
{
public:
    int Value;
    Node* Next; //  * gjithmone do te kuptojme pointer-in e listes
};

void printListToTheEnd(Node*firstElement)
{
    while(firstElement != NULL)
    {
        cout<<firstElement -> Value << endl;
        firstElement = firstElement ->  Next;
    }
}

void printReverse(Node* firstElement) {
    if (firstElement == NULL) {
        return;
    }

    cout << firstElement->Value << endl;
    printReverse(firstElement->Next);

}

int main()
{

    Node* head = new Node();
    Node* second = new Node();
    Node* third = new Node();// I have created the pointer for the first Node


    head->Value = 1;
    head -> Next = second;

    second->Value = 2;
    second -> Next = third;

    third->Value = 3;
    third -> Next = NULL;

    printListToTheEnd(head);
    printReverse(head);

    return 0;
}

