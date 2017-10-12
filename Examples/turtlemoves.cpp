
/*
The Logo language, which is particularly popular among personal computer users, made the concept of turtle graphics famous.
Imagine a mechanical turtle that walks around the room under the control of a C++ program.
The turtle holds a pen in one of two positions, up or down. While the pen is down, the turtle traces out shapes as it moves;
while the pen is up, the turtle moves about freely without writing anything.
In this problem, you will simulate the operation of the turtle and create a computerized sketchpad as well.
Use a 20-by-20 array floor which is initialized to zeros. Read commands from an array that contains them.
Keep track of the current position of the turtle at all times and whether the pen is currently up or down.
Assume that the turtle always starts at position 0.0 of the floor with its pen up. 
The set of turtle commands your program must process are as follows:
Command       Meaning
1             Pen up
2             Pen down
3             Turn right
4             Turn left
5 10          Move forward 10 spaces (or a number other than 10) Print the 20-by-20 array
6             Print array
9             End of data

#include <stdio.h>

void moveForward(int arr[][20],int ,int ,int,int);  // movement
void turnRight(int*);
void turnLeft(int*);
void printArray(int arr[][20]);

int main() {
    
    int array[20][20] = {0};
    
    int penUp,direction=1,commands=0;
    int x = 0,y = 0; // current location at beginning.
    
    scanf("%d",&penUp);

        while (commands != 9) {
            
            scanf("%d",&commands);
            switch (commands) {
                case 1:
                    penUp = 0;
                    break;
                case 2:
                    penUp = 1;
                    break;
                case 3:
                    turnRight(&direction);                           //  DIRECTIONS
                    break;                                          //  left to right for 1 (according to 20x20 table)
                case 4:                                             //  up to down for 2 (according to 20x20 table)
                    turnLeft(&direction);                           // left to right for 3 (according to 20x20 table)
                    break;                                         //  down to up for 4 (according to 20x20 table)
                case 5:
                    if (penUp == 1) {
                        goto Go;
                    }
                    scanf("%d",&commands);
                    moveForward(array, x, y, commands, direction);
                    // first we determine the direction to go.At first direction initially set 1.
                Go:if (direction % 4 == 1) {
                        y += commands - 1;// Direction 1 means we will move on the x-axis.The number of column increases to the right
                    }
                    else if (direction % 4 == 2){
                        x += commands - 1;// Direction 2 means we will move on the y-axis.The number of row increases from top to bottom
                    }
                    else if (direction % 4 == 3){
                        y -= commands - 1;// Direction 3 means we will move on the x-axis.The number of column decreases to the left to right
                    }
                    else{
                        x -= commands - 1;// Direction 4 means we will move on the y-axis.The number of row decreases from bottom to top
                    }
                    break;
                case 6:
                    printArray(array);
                    break;
            }
        }
    return 0;
}
void moveForward(int arr[][20],int i,int j,int n,int direction){ // we will move on board n units.
    if ( direction % 4 == 1  ) {
        while (n--) {
            arr[i][j] = 1;
            j++;
        }
    }
    else if (direction % 4 == 2 ) {
        while (n--) {
            arr[i][j] = 1;
            i++;
        }
    }
    else if (direction % 4 == 3 ){
        while (n--) {
            arr[i][j] = 1;
            j--;
        }
    }
    else{
        while (n--) {
            arr[i][j] = 1;
            i--;
        }
    }
}
void turnRight(int *x){
    (*x)++;
}
void turnLeft(int *y){
    (*y)--;
}
void printArray(int arr[][20]){
    for (int a=0; a<20; a++) {
        for (int b=0; b<20; b++) {
            if (arr[a][b] == 1 ) {
                printf("*");
            }
            else
                printf(" ");
        }
        printf("\n");
    }
}
