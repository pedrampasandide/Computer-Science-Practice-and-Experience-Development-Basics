#include <stdio.h>
#include <termios.h>
#include <unistd.h>

char getch_unix()
{
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

int main(){
    char input;

    while (1){

        input = getch_unix();

        if (input == 'a')
        {
            printf("%c\n", input);
        }
        else if (input == 'd')
        {
            printf("%c\n", input);
        }
        else if (input == 'w')
        {
            printf("%c\n", input);
        }
        else if (input == 's')
        {
            printf("%c\n", input);
        }
        else if (input == 'q')
        {
            printf("Game Over!\n");
            break;
        }
    }
    return 0;
}
