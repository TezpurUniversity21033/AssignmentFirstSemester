// header file
#include<iostream>
#include<stdio.h>
#include<stdlib.h>

// create a structure
struct Node
{
    int info;
    struct Node *next;
};

// create a class
class Stack
{
    struct Node *tos;
public:
    Stack(); // default constructor
    ~Stack(); // destructor

    // member functions
    void push(int data);
    int pop();
    void display();
};
