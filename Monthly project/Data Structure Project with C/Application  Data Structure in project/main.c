#include <stdlib.h>
#include <stdio.h>

int pas[10];
int usr[10];
int dd = 1;
// Log in with lear search
int login()
{

    usr[0] = 1;
    pas[0] = 1;
    int kk = 0;
    int lg;
    prinf("Enter username and Password:");
    scanf("%d", &lg);
    for (int i = 0; i < 10; i++)
    {
        if (pas[i] == 1 && usr[i] == 1)
        {
            kk++;
        }
    }
    if (kk >= 10)
    {
        printf(" Wrong\n");
        exit(0);
    }
}

int Sorting()     

{
        int choice;
        while(1){
               
                printf("\n                MENU                             \n");
                printf("\n 1.Bubble Sort     \n");

                printf("\n 2.Insertion Sort   \n");
                printf("\n 3.Selection Sort  \n");
                printf("Enter your choice:\t");
                scanf("%d",&choice);
                switch(choice)
                {
                        case 1:
                                       
                                        break;

                                        break;
                        case 2: 
                                       
                                        break;
                        case 3:
                                       
                                        break;
                    
                             
                        default:
                                        printf("\n Wrong Choice:\n");
                                          
                                        break;
                }
        }
        return 0;
}

int main()
{

    int choice;
    int in;
    prinf("\n\n\nThis is seachhing Data Structure applications\n\n\n");
    prinf("Enter username and Password:");
    scanf("%d", &in);

    printf("\n                MENU                             \n");
    printf("\n 1.Login    \n");

    printf("\n 2.Registration   \n");

    printf("Enter your choice:\t");
    scanf("%d", &in);
    switch (in)
    {
    case 1:
        login();
        break;

        break;
    case 2:
        printf("enter user name:\n");
        scanf("%d", &usr[dd]);
        printf("enter user pass:\n");
        scanf("%d", &pas[dd]);
        dd++;
        prinf("Enter for login:\n");
        login();
        break;

    default:
        printf("\n Wrong Choice:\n");

        break;
    }

    while (1)
    {

        printf("\n\t\t                MENU                             \n\n");
        printf("\n 1.Sorting  application:  \n");
        printf("\n 2.Linkedlist application:      \n");
        printf("\n 3.Stack application:      \n");
        printf("\n 4.Queue  application:    \n");
        printf("\n 5.Exit       \n\n\n");
        printf("Enter your choice:\t");
        scanf("%d", &choice);
        switch (choice)
        {

        case 1:
            Sorting();
            break;
        case 2:
            Linkedlist();
            break;
        case 3:

            Stack();
            break;
        case 4:
            Qeue();

            break;
        case 5:

            exit(0);
            break;

        default:
            printf("\n Wrong Choice:\n");

            break;
        }
    }

    return 0;
}


