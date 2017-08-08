#include <iostream>
#include <cstdlib>
#include <ctime>
int main()
{
   
    srand(static_cast<unsigned int>(time(0)));
    
    int i = 1;
    int guess;
    int computer = rand() % 100 + 1;
    
    std::cout << "Let's play a game.  I'm thinking of a number.  You have 7 tries to guess what it is." << std::endl;
    
    while (i <= 7) {
        
        std::cin >> guess;
        
        if (guess == computer ) {
            std::cout << "Correct! You win!" << std::endl;
            std::cout << "Would you like to play again (y/n)? ";
            char again;
            std::cin >> again;
            if (again == 'y'){
                i = 1;
                computer = rand() % 100 + 1;
                std::cout << "Let's play a game.  I'm thinking of a number.  You have 7 tries to guess what it is." << std::endl;
                continue;
            }
            else
                break;
        }
        if ( guess < computer ){
            std::cout << "Your guess is too low." << std::endl;
            i++;
            continue;
         }
        if ( guess > computer ){
            std::cout << "Your guess is too high." << std::endl;
            i++;
            continue;
          }
    }
    
    std::cout <<"Thank you for playing."<< std::endl;
    
    return 0;
}
