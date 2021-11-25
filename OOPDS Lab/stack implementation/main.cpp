// driver function

#include<iostream>
#include<stdio.h>
#include"implementation.cpp"

int main()
{

    int user_choice, value, delete_value;
    Stack st;  // create an object

    printf("Menu:\n 1. Insert a value: (press 1)\n 2. Delete a value: (Press 2)\n 3. Display the stack: (press 3)\n 4. Terminate the program: (press 4)");

    do
    {
        printf("\nEnter your choice: ");
        scanf("%d", &user_choice);

        switch (user_choice)
        {
        case 1:
            std::cout << "Enter value to insert: ";
            std::cin >> value;
            st.push(value);
            break;

        case 2:
            delete_value = st.pop();
            if (delete_value == 0)
                continue;
            std::cout << "You have deleted " << delete_value << std::endl;
            break;

        case 3:
            st.display();
            break;

        case 4:
            std::cout << "exit" << std::endl;
            break;

        default:
            std::cout << "Invalid input" << std::endl;
        }
    }
    while(user_choice != 4);


    return 0;
}
