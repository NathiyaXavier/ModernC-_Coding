// LinearSearch.cpp : Defines the entry point for the application.
//

#include <iostream>

#define MAX_VALUE 10


void getInput(int *arrayPtr, int no_of_item)
{
    int input;

    std::cout << "Enter 10 input values" << std::endl;

    for (int i = 0; i < no_of_item; i++)
    {
        std::cin >> input;
        *arrayPtr++ = input;
    }
}

void displayOutput(int* arrayPtr, int no_of_item)
{
    int output;

    std::cout << "Display 10 vlaue" << std::endl;

    for (int i = 0; i < no_of_item; i++)
    {
        output = *arrayPtr++;
        std::cout << output << '\t';
    }
}

bool linearSearch(int* arrayPtr, int no_of_item, int value2Find)
{
    int value;
    for (int i = 0; i < no_of_item; i++)
    {
        value = *arrayPtr++;
        if (value == value2Find)
            return true;
    }

    return false;
}

int main() {

    int inputArray[MAX_VALUE];
    int value2Find;

    getInput(inputArray, MAX_VALUE);
    displayOutput(inputArray, MAX_VALUE);

    std::cout << "Enter value to find" << '\n';
    std::cin >> value2Find;
    if(linearSearch(inputArray, MAX_VALUE, value2Find)==true)
        std::cout << "key value exit in the array" << '\n';
    else
        std::cout << "key value  not exit in the array" << '\n';

    return 0;
}