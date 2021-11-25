#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include"header.h"

using namespace std;

void Student::getData(void) {
	cout << "Enter Name: " << endl;
	cin >> name;
	cout << "Enter Roll No. : " << endl;
	cin >> roll_no;
}

void Student::display(void) {
	cout << "Name : " << name << endl;
	cout << "Roll No: " << roll_no << endl;
}