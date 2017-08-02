/*  Write a short program to simulate a ball being dropped off of a tower.
To start, the user should be asked for the initial height of the tower in meters.
Assume normal gravity (9.8 m/s2), and that the ball has no initial velocity (the ball is not moving to start).
Have the program output the height of the ball above until on the ground.
The ball should not go underneath the ground (height 0).
Your program should include a header file named constants.h that includes a namespace called myConstants.
In the myConstants namespace, define a symbolic constant to hold the value of gravity (9.8). */

//constant.h

#include <iostream>
#include "constant.h"

double HeightBall(double height , int second){
    return height - (myConstant::gravity * (second * second) / 2);
}
void print(double height){
    double result;
    int i = 0;
    result = HeightBall(height,i);
    while (result >= 0) {
        result = HeightBall(height,i);
        if (result > 0)
            std::cout << "At " << i << " seconds,  " << "the ball is at height: " << result << std::endl;
        else
            std::cout << "At " << i << " seconds, " << "the ball is on the ground." << std::endl;
        i++;
    }
}
int main()
{
    double initialheight;
    
    std::cout << "Enter the initial height of the tower in meters: ";
    std::cin >> initialheight;
    
    print(initialheight);
    
    return 0;
}
