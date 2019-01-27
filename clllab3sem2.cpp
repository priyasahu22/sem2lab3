/*Implement Circular Linked List using C++. Make sure the following functions are implemented: 
insert(int data) - Adds a new element to the end of the linked list. 
insertAt(int pos, int data) - It includes the position at which the insertion happens. Positioning starts with 1.  
Example: insertAt(1, 3) - inserts 3 at the first position. 
    It should print a statement “Linked List does not have that many elements” if the position does not exist in the linked list.   
delete() - Deletes the element at the end of the list. 
deleteAt(int pos) - Deletes the element(or node) at the position pos)
countItems() - Returns the number of items in the linked list. 
display() - Displays all the elements in the linked list. Format should be followed as “1 -> 2 -> 3 -> 4 ” for a linked list holding integers in the order 1,2,3,4.*/
#include <iostream>
using namespace std;
//preparing class node

class node{
    public:
    // data 
    int data;
    node * next;
    // Construct that makes the pointer to null
    node(int value){
        next = NULL;
        data = value;
    }
};

class csll{
    public:
    node * head;
    csll(){
        head = NULL;
    }
    // inserting to the end of the linked list.
    void insert(int value)
   {
        node *temp=new node();
        temp->data=value;
        // check if empty list
        if(head == NULL)
        {
            head = temp;
        }  
        

        else{ 
           // if not empty list. 
            node * current = head;
            while(current->next != head)
            {    current = current->next;
                current->next = temp;
        }   
        temp->next = head;
    }
}
    // displays the linked list.
    void display()
{
        node * current = head;
        if(current == NULL) 
    {
            cout<<"no element"<<endl;
            return;
        }
        while(current->next!=head)
     {
            cout<<current->data<<"->";
            current=current->next;
        }
        // for the last element
        cout << current -> data ;
        cout << endl;
    }
    
 }
    
};

int main(){
    csll csll1;
    for(int i= 1; i < 11; i++){
       csll1.insert(i);
    }
    
    csll1.display();
}
