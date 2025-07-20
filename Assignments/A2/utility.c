// CODE: Inlcude necessary librar(y/ies)
#include <termios.h> // used in getch_unix()
#include <unistd.h>  // used in getch_unix()


// CODE: the implementation of functions and related variables 


/*Receiving an input from keyboard
IMPORTANT: DO NOT CHANGE ANYTHING IN getch_unix() FUNCTION.
To test this function and see if it works on your OS you can use testMyInput.c. 
It should work on any UNIX based OS.
This function receives all possible charaters from a keyboard.
The returned character `ch` will be used in "your game logic" as:
if ch='w' // Move Up
if ch='s' // Move Down
if ch='a' // Move Left
if ch='d' // Move Right
if ch='q' // break the game loop and quit
otherwise  do nothing
*/
char getch_unix() {
    struct termios oldt, newt;
    char ch;
    tcgetattr(STDIN_FILENO, &oldt); // Gets the current terminal settings
    newt = oldt;
    newt.c_lflag &= ~(ICANON | ECHO);
    tcsetattr(STDIN_FILENO, TCSANOW, &newt);
    ch = getchar();
    tcsetattr(STDIN_FILENO, TCSANOW, &oldt);
    return ch;
}
