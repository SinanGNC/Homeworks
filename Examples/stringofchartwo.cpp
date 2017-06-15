/*Write a C++ program that reads a string of characters and a digit, i.e. 0-9, from the std.
input stream and encodes the given string in a specific format.
The encoding states 0 at the positions of non-digit caharacters and for digits,
the number that is obtained by adding the given digit.
Moreover, you will also compute the sum of the digits in the string.
You can assume that the number of characters in the input string will not exceed 50.
For example: Assume that the string is ab28a94ba0f, and the input digit is 3;
your encoding will be 0051101270030 and the sum of the digits in the string is 23.
The encoding is shown in detail below.

a => 0 , b => 0, 2 => 5, 8 => 11, 9 => 12, 4 =>7, 0 =>3, f =>0 */

#include <iostream>
using namespace std;

void encode(char *a ,int digit);

int main() {
    
    char array[50];
    int digit;
    cin >> array >> digit ;
    
    encode(array, digit);
    return 0;
}
void encode(char *a ,int digit){
    int sum=0;
    for (int i=0; a[i]!='\0'; i++) {
        if (a[i] == 'a')
            sum += 0 ;
        else if (a[i] == 'b')                  //    It was a bit of an amateurish :)
            sum += 0 ;
        else if (a[i] == '2')
            sum += 5 ;
        else if (a[i] == '8')
            sum += 2 ;
        else if (a[i] == '9')
            sum += 3 ;
        else if (a[i] == '4')
            sum += 7 ;
        else if (a[i] == '0')
            sum += 3 ;
        else if (a[i] == 'f')
            sum += 0 ;
    }
    for (int i=0; a[i]!='\0'; i++) {
        if (a[i] == 'a')
            a[i] = '0';
        else if (a[i] == 'b')                         //    It was a bit of an amateurish :)
            a[i] = '0';
        else if (a[i] == '2')
            a[i] = '5';
        else if (a[i] == '8')
            a[i] = 'S' ;
        else if (a[i] == '9')
            a[i] = 'D';
        else if (a[i] == '4')
            a[i] = '7';
        else if (a[i] == '0')
            a[i] = '3';
        else if (a[i] == 'f')
            a[i] = '0';
    }
    for (int j=0; a[j] !='\0';j++) {
        if (a[j] == 'S')
            cout << "11";
        else if (a[j] == 'D')
            cout << "12";
        else
            cout << a[j];
    }
    cout << " " << (sum + digit) << endl;
}
