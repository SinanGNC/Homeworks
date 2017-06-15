/*Write a C++ program that reads a string of characters and a character from the std.
input stream and encodes the given string in binary format.
The encoding states 1 at the positions of occurrance of the caharacter and 0, otherwise.
Moreover, you will also count the number of occurrances of the given character.
You can assume that the number of characters in the input string will not exceed 50.
For example: Assume that the string is ababab, and the input character is a;
your encoding will be 101010 and the number of occurences of a will be 3. */


//Note that, if the given character is a letter, then the encoding will be made case insensively.
//Restrictions: Do not use string library. 


#include <iostream>
using namespace std;

void encode(char *a ,char key);

int main() {
    
    char array[50];
    char key;
    cin >> array >> key ;
    
    encode(array, key);

    
    return 0;
}
void encode(char *a ,char key){
    
    key = tolower(key);
    int count=0;
    
    for (int i=0; a[i]!='\0'; i++) {
        a[i] = tolower(a[i]);
        if (a[i] == key) {
            ++count;
            a[i] = '1';
        }
        else{
            a[i] = '0';
        }
    }
    cout << a << " " << count << endl ;
}
