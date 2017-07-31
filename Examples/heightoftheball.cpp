//constant.h

#ifndef CONSTANT_H
#define CONSTANT_H

namespace myConstant {
    const double gravity = 9.8;
}

#endif 



//main cpp
#include <iostream>
#include "constant.h"


double HeightBall(double height , int second){
    return height - (myConstant::gravity * (second * second) / 2);
}

void print(double height){
    double result;
    for (int i = 0; i<6; i++) {
        result = HeightBall(height,i);
        if (result > 0)
            std::cout << "At " << i << " seconds,  " << "the ball is at height: " << result << std::endl;
        else
            std::cout << "At " << i << " seconds, " << "the ball is on the ground." << std::endl;
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
