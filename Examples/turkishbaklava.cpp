// TURKISH baklava my friend.

#include<iostream>

int main(){
    
    
    int gab = 4;
    int number = 1;
    
    for (int i=0; i<5; i++) {
        
        for (int k=0;k<gab; k++)
            std::cout << " ";

        for (int j=0;j<number;j++)
            std::cout << "*";

        number+=2;
        gab--;
        std::cout << std::endl;
    }
    gab = 1;
    number = 7;
    
    for (int i=0; i<5; i++) {
        
        for (int k=0;k<gab; k++)
            std::cout << " ";
        
        for (int j=0;j<number;j++)
            std::cout << "*";
        
        number-=2;
        gab++;
        std::cout << std::endl;
    }
    
    return 0;
}
