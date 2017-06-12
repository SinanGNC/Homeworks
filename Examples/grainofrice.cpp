
/*Write a program to calculate how many squares are required to give the inventor at least X grains of rice,
 i.e. X=1000 or X=1,000,000 grains, etc. Your program will print the number of squares to the screen.*/

#include <iostream>

using namespace std;

int main() {
  
    int input,sum=0,k=0,i;
    
    cin >> input;
    
    if (input != -1) {
    for (i=1; sum<input; i*=2) {
        sum += i;
        k++;
     }
    }
    cout << k << endl;
    
    return 0;
}
