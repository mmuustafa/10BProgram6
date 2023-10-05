#include "IntList.h"
#include <iostream>
#include <ostream>
# include <algorithm>
using namespace std;

//Initializes an empty list.
IntList::IntList() : head(nullptr), tail(nullptr){}

/*Deallocates all remaining dynamically allocated memory (all remaining IntNodes). 
Once the clear function is working, this destructor just needs to call the clear function.*/
IntList::~IntList(){
    clear();
}

//Removes (deallocates) all IntNodes in the IntList. 
//Don't forget to set both head and tail to appropriate values for an empty list. 
//DO NOT leave them dangling!
void IntList::clear(){ //help
    while(!empty()) {
      IntNode* temp = head->next;
      delete head;
      head = temp; //why not temp->next;
      if(head == nullptr){
        tail = nullptr;
      }
    }
}


// Inserts a data value (within a new node) at the front end of the list.
void IntList::push_front(int value){ //help
    IntNode* newNode = new IntNode(value);
    if (head == nullptr){
        head = newNode;
        tail = newNode;
    }
    else {
    newNode->next = head; // why is it not just newNode? Is it because we want to acess it 
    //delete head; // If I delete head does my newNode not save it? 
    head = newNode;
    }
} 


//Removes the value (actually removes the node that contains the value) at the front end of the list. 
//Does nothing if the list is already empty.
void IntList::pop_front(){
    if (head == nullptr){
        return;
    }
    else if(head == tail){ // how to check for 1 case
        delete head;
        head = nullptr;
        tail = nullptr;
    }
    else {
      IntNode* temp = head->next;
      delete head;
      head = temp;
   }
}

//Returns true if the list does not store any data values (does not have any nodes), otherwise returns false.
bool IntList::empty() const{
    bool isEmpty = false;
    if(head == nullptr){
        isEmpty = true;
    }
    return isEmpty;
}

//Returns a reference to the first value in the list. Calling this on an empty list causes undefined behavior.
const int& IntList::front() const{
    return head->value;
}


//Returns a reference to the last value in the list. Calling this on an empty list causes undefined behavior.
const int& IntList::back() const{
    return tail->value;
}

/*Overloads the insertion operator (<<) so that it sends to the output stream (ostream) in a single line all of the int values 
stored in the list, each separated by a space. This function does NOT send a newline or space at the end of the line.*/
ostream& operator<<(ostream &out, const IntList &list){ //help
    IntNode* currNode = list.head; //Use list.head as opposed to just head because list is our explicit parameter
    while(currNode != nullptr){
        out << currNode->value;
        if (currNode->next != nullptr){
            out << ' ';
        }
        currNode = currNode->next;
    }
    return out;
}

/*Questions:
1. line 22
2. line 38
3. line 39
4. line 86 when we say currNode what does that declare? and if val is declared, what is it declared to? garbage?
4. Do i need to delete head pointers that are set to nullptr before reassigning.
*/

//The copy constructor. Make sure this performs deep copy.
IntList::IntList(const IntList& cpy) : head(nullptr), tail(nullptr){
    if (!cpy.empty()) {
        IntNode* current = cpy.head;
        while (current != nullptr) {
            push_back(current->value);
            current = current->next;
        }
    }
}

/*
The overloaded assignment operator. Make sure this performs deep copy.*/
IntList & IntList::operator=(const IntList &rhs){
    if(this == &rhs){
        return *this;
    }

    clear();

    IntNode* current = rhs.head;
        while (current != nullptr) {
            push_back(current->value); 
            current = current->next;
        }
    return *this;
    }
    
    


/*
Inserts a data value (within a new node) at the back end of the list.*/
void IntList::push_back(int value){
    if(empty()){
        IntNode* newNode = new IntNode(value);
        head = newNode;
        tail = newNode;
    }
    else{
        IntNode* newNode = new IntNode(value);
        tail->next = newNode;
        tail = newNode;
    }
}


/*Sorts the integers in the list into ascending order. Do NOT move the nodes, just the integers.*/
void IntList::selection_sort(){
    if (head == nullptr){
        return;
    }
    else if(head == tail){
        return;
    }
    else{ //review this section IMPORTANT take notes on how it iterates through the linked list.
        IntNode* currNode = head;
        while (currNode != nullptr) {
            
            IntNode* minNode = currNode;
            IntNode* temp = currNode->next;
            
            while (temp != nullptr) {
            if (temp->value < minNode->value) {
                minNode = temp;
            }
            temp = temp->next;
            }

            if (minNode->value != currNode->value) {
                int tempValue = currNode->value;
                currNode->value = minNode->value;
                minNode->value = tempValue;
            }
            currNode = currNode->next;
        }
    }
}

/*
Inserts a data value (within a new node) in an ordered list. 
Assumes the list is already sorted in ascending order 
(i.e., Do not sort the list first, assume the list is already is sorted.) 
This function loops through the list until if finds the correct position for the new data value 
and then inserts the new IntNode in that location. This function may NOT ever sort the list.*/
void IntList::insert_ordered(int value){
    IntNode* newNode = new IntNode(value);
    IntNode* currNode = head;
    if(empty()){ //empty
        push_back(value);
    }
    else if(newNode->value <= currNode->value){ //smallest
        push_front(value);
    }
    else if(newNode->value >= tail->value){
        push_back(value);
    }
    else {
        IntNode* previous = head;
        IntNode* currNode = head->next;
        while (currNode != nullptr){
        if (previous->value < newNode->value && currNode->value >= newNode->value){
            previous->next = newNode;
            newNode->next = currNode;
        }
        previous = previous->next;
        currNode = currNode->next;
        }
    }
}

/*
Removes all duplicate data values (actually removes the nodes that contain the values) within the list. 
Always remove just the later value within the list when a duplicate is found. 
This function may NOT ever sort the list.*/
void IntList::remove_duplicates(){
    
    if (head == nullptr){
        return;
    }

    IntNode* i = head;
    IntNode* previous = head;
    IntNode* current = previous->next;
    
    while(i != tail){
        while(current != nullptr){
            if (i->value == current->value){
                if(tail == current){
                    previous->next = current->next;
                    delete current;
                    current = previous->next;
                    tail = previous;
                }
                else{
                    previous->next = current->next;
                    delete current;
                    current = previous->next;
                }
            } 
            else{
                previous = previous->next;
                current = previous->next;
            }
        }
        if (head == tail){
            return;
        }
        else{
            i = i->next;
            previous = i;
            if(i == nullptr){
                return;
            }
            current = previous->next;
        }
    }
}


