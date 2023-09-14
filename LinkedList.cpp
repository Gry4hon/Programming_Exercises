#include <iostream>

//a class that represents a node within a linked list

class Node{
    public:
    int nodeValue;
    Node* nextNodePointer;
};

/*
This function:
1. Takes the linked list's declared head (first item) then
2. The while loop checks if the pointer value is not equal to NULL
3. If the pointer does not equal NULL, then it will print out the value stored in that node
4. After the node's value is printed out, the nodePointer's value is changed to the next node pointer
*/
void PrintOutLinkedList(Node* nodePointer){
    std::cout<<"Contents of the linked list: "<<"\n";
    while(nodePointer != NULL){
        std::cout<< " - " << nodePointer->nodeValue << "\n";
        nodePointer = nodePointer->nextNodePointer;
    }
}

/*
This function:
1. Takes the pointer for the node in the list before the node you are trying to add, and the value you wish to add
2. Then it creates a new pointer for a new node
3. After that it sets the node value
4. Then a temp node stores the "next pointer" of the node before the one you are trying to add
5. Then it sets the new nodes next pointer to the value of the one before it
6. Finally it sets the previous nodes pointer to the pointer of the new pointer
*/

void AddNodeToList(Node* previousNode,int newNodeValue){
    Node* newNodePointer = new Node();
    newNodePointer->nodeValue = newNodeValue;

    Node* tempPreviousPointer = previousNode;

    newNodePointer->nextNodePointer = tempPreviousPointer->nextNodePointer;
    previousNode->nextNodePointer = newNodePointer;

}

void AlterNodeValue(Node* nodePointer, int newValue){
    nodePointer->nodeValue = newValue;
}

//Next we gotta make a function that moves a node value to another place in the list :D

void MoveNodeValue(Node* nodePointerOne, Node* nodePointerTwo){
    int tempNodeValue = nodePointerTwo->nodeValue;

    nodePointerTwo->nodeValue = nodePointerOne->nodeValue;
    nodePointerOne->nodeValue = tempNodeValue;
}

int GetListLength(Node* nextPointer){
    int listLength = 0;
    while(nextPointer != NULL){
        listLength++;
        nextPointer = nextPointer->nextNodePointer;
    }
    return listLength;
}


/*
This function:
1. takes the pointer of the node you wish to delete
2. then it create a temparery pointer that stores the pointer for the node you wish to delete
3. then the pointer value of the item before the one you wanted to delete is set equal to the node pointer of the value you wish to delete
4. then it deletes the pointer for the node you wished to be deleted, deleting it from the list. 
*/
void DeleteNode(Node* thePointerBefore){
    Node* tempPointer;
    tempPointer = thePointerBefore->nextNodePointer;
    std::cout<<"the temp pointers value: " << tempPointer->nodeValue<<"\n";
    thePointerBefore->nextNodePointer = tempPointer->nextNodePointer;
    std::cout<<"the pBfor pointers value: " << thePointerBefore->nodeValue<<"\n";

    delete tempPointer;
}

int main(){

    //Declaring the pointers of each item in the list.
    Node* pointerHead = new Node();
    Node* secondItem = new Node();
    Node* thirdItem = new Node();
    Node* fourthItem = new Node();
    Node* fifthItem = new Node();

    //declaring the value of the first element and setting the refrance to the second item in the list.
    pointerHead->nodeValue = 69;
    pointerHead->nextNodePointer = secondItem;

    //doing the same for the second and so on...
    secondItem->nodeValue = 420;
    secondItem->nextNodePointer = thirdItem;

    thirdItem->nodeValue = 666;
    thirdItem->nextNodePointer = fourthItem;

    fourthItem->nodeValue = 8008;
    fourthItem->nextNodePointer = fifthItem;

    fifthItem->nodeValue = 69420666;
    fifthItem->nextNodePointer = NULL;

    // std::cout<<"List Before: " << "\n";
    // PrintOutLinkedList(pointerHead);
    // std::cout<<"\n";
    //This is deleting the third item in the list because its refrancing the pointer stored in the second node
    //which is a pointer to the third node.
    //DeleteNode(pointerHead->nextNodePointer);

    //This is adding a new node after the second node by using the pointer to the second node
    //AddNodeToList(secondItem, 569);

    //This is altering the value of a node using its pointer
    //AlterNodeValue(thirdItem, 789);

    //This is switching the value from the second node with the fifth one
    //MoveNodeValue(secondItem, fifthItem);

    // std::cout<<"List After: " << "\n";
    // PrintOutLinkedList(pointerHead);

    std::cout<< "Length of list: " << GetListLength(pointerHead) << "\n";



    return 0;
}