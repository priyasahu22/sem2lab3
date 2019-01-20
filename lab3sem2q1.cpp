/*Implement Doubly Linked List using C++. Make sure the following functions are implemented: 
insert(int data) - Adds a new element to the end of the linked list. 
insertAt(int pos, int data) - It includes the position at which the insertion happens. Positioning starts with 1.  
Example: insertAt(1, 3) - inserts 3 at the first position. 
    It should print a statement “Linked List does not have that many elements” if the position does not exist in the linked list.   
delete() - Deletes the element at the end of the list. 
deleteAt(int pos) - Deletes the element(or node) at the position pos)
countItems() - Returns the number of items in the linked list. 
display() - Displays all the elements in the linked list. Format should be followed as “1 -> 2 -> 3 -> 4 -> NULL” for a linked list holding integers in the order 1,2,3,4.
*/ 
#include <iostream>
using namespace std; 
//class node acting as base units
class node{
    public:
    int data;
    
    node * next;
    node * prev;
    // Constructor that makes both the pointer pointing to null
    node(int value){
        next = NULL;
        prev = NULL;
        data = value;
    }
};

class dll{
    public:
    node * head;
    dll(){
        head = NULL;
    }
    void insert(int value){
        // Create a new node
        node * temp = new node(value);
        // CHeck if empty list
        if(head == NULL){
            head = temp;
        }  
        else{ // If not empty 
            node * current = head;
            while(current->next != NULL)
                current = current->next;
            current->next = temp;
            temp->prev = current;    
        }
    }
    void display(){
        node *current = head;
        node *last;
        cout << "the values-> ";
        while(current!=NULL){
            cout <<current->data<< "->"; 
            // by this current will store in last
            last = current;
           current = current->next;
        }
        cout << endl;
        cout << "values in reverse order : ";
        while(last!=NULL){
            cout <<last->data<< "->"
            last = last->prev;
        }
        cout << endl;   
    }
    void del(){
        node *temp=new node;
        node *current=head;
         while(current->next!=tail)
{
        current=current->next;
    }

temp=tail;
current->next=NULL;
tail=current;
delete temp;


 
}
 

};

int main()
{
    dll l1;
    for(int i=1;i<5;i++){
        l1.insert(i);
    }
    l1.display();
    l1.del();
}
