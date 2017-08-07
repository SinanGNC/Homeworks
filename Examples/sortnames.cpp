/*
1) Write a program that:
* Asks the user how many names they wish to enter.
* Asks the user to enter each name.
* Calls a function to sort the names.
* Prints the sorted list of names.
*/

#include <iostream>
#include <string>

void sort(std::string *array , int lenght ){    // Bubble sort for names

    for (int i=0; i<lenght; i++) {
        
        for (int k=0; k<lenght-i; k++) {
            if (array[k] > array[k+1] ) {
                std::string temp;
                temp = array[k];
                array[k] = array[k+1];
                array[k+1] = temp;
            }
        }
    }
}
int main(){
   
    
    std::cout << "How many names would you like to enter? ";
    int length;
    std::cin >> length;
    
    std::string *names = new std::string[length];  // a dynamic array of std::string to hold the names
    
    for (int i=0; i<length; i++) {
        std::cout << "Enter name "<< i+1 << "#: ";
        std::cin >> names[i];
    }
 
    sort(names, length);
    
    for (int i=0; i<length; i++) {
        std::cout << names[i] << std::endl;
    }
    return 0;
}
