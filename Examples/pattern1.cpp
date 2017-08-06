
#include<iostream>

int main(){
    
    
    int gab = 4;
    int number = 1;
    
    for (int i=0; i<5; i++) {
        
        for (int k=0;k<gab; k++)
            std::cout << " ";

        for (int j=1;j<=number;j++)
            std::cout << j;

        number++;
        gab--;
        std::cout << std::endl;
    }
    
    return 0;
}
