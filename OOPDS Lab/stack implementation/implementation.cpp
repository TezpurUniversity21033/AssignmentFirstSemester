// implementation file

#include<iostream>
#include"header.h"

// dynamic constructor
Stack::Stack() {
    // initialize the object by dynamic allocation
    tos = new struct Node;
    tos = NULL;
}

// destructor
Stack::~Stack() {
    struct Node *temp;
    while(tos != NULL) {
        temp = tos;
        delete temp; // free the memory
        tos = tos->next;
        std::cout << "Destruct memory successfully" << std::endl;
    }
}

// function to insert data into the stack
void Stack::push(int data)
{
    struct Node *temp;
    temp = new struct Node;
    if (temp == NULL) // if memory allocation failed
    {
        std::cout << "Memory not allocated." << std::endl;
    }
    else
    {
        temp->info = data;
        temp->next = tos;
        tos = temp;
    }
}


// function to remove data from the stack
int Stack::pop()
{
    if(tos == NULL )
    {
        std::cout << "Stack has no item to delete." << std::endl;
        return 0;
    }
    int temp;
    struct Node *del;
    del = tos;
    tos = tos->next;
    temp = del->info;
    free(del);
    return temp;
}

// function to display the value of the stack
void Stack::display()
{
    struct Node* temp;
    if(tos==NULL)
        std::cout<<"stack is empty";
    else
    {
        temp = tos;
        std::cout<<"Stack elements are: ";
        while (temp != NULL)
        {
            std::cout<< " (" << temp->info <<") ";
            temp = temp->next;
        }
    }
}
