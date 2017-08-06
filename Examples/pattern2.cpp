#include<iostream>

int main(){
    
    
    int gab = 4;
    int number = 1;
    int n=1;
    for (int i=0; i<5; i++) {
        
        for (int k=0;k<gab; k++)
            std::cout << " ";
        
        for (int j=1;j<=number;j++){
            std::cout << n;
            n--;
            if (j == number) {
                n = number +1 ;
            }
        }
        number++;
        gab--;
        std::cout << std::endl;
    }
    
    return 0;
}
