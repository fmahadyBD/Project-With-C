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
    int size;
    prinf("ENter the number of student ");
    scanf("%d", &size);
    int a[5];
    int i, j, tem;
         int  value, hole;

    for (int i = 0; i < size; i++)
    {
        printf("The marks of student %d: \n", i);
        scanf("%d", &a[i]);
    }
    int choice;
    while (1)
    {

        printf("\n          Student marking management system                        \n");
        printf("\n 1.Bubble Sort  for sortd the result   \n");
        printf("\n 2.Insertion Sort for sortd the result   \n");
        printf("\n 3.Selection Sort for sortd the result  \n");
        printf("Enter your choice:\t");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            for (i = 1; i < 5; i++)
            {
                for (j = 0; j < 5 - i; j++)
                {

                    if (a[j] > a[j + 1])
                    {
                        tem = a[j];
                        a[j] = a[j + 1];
                        a[j + 1] = tem;
                    }
                }
            }
            printf("The reslt of lowest to highest:");
            for (i = 0; i < 5; i++)
            {
                printf("%d ", a[i]);
            }
            break;
        case 2:


for (int i = 1; i < size; i++)
    {
        value = a[i];
        hole = i;
        while (hole > 0 && a[hole - 1] > value)
        {
            a[hole] = a[hole - 1];
            hole--;
        }
        a[hole] = value;
    }

       printf("The reslt of lowest to highest:");
    for (i = 0; i < size; i++)
    {
        printf("%d ", a[i]);
    }


            break;
        case 3:


    selectionSort(a, size);
       printf("The reslt of lowest to highest:");
    printArray(a, size);
    return 0;

            break;

        default:
            printf("\n Wrong Choice:\n");

            break;
        }
    }
    return 0;
}
//--------------------------
struct node
{
        int info;
        struct node *next;
};
struct node *start=NULL;
int Linkedlist()     
{
        int choice;
        while(1){
               

                printf("\n Book self management system\n\n  \n");
                printf("\n 1.Create a self  \n");
                printf("\n 2.Display Th book  \n");
                printf("\n 3.Push at the beginning    \n");
                printf("\n 4.Push at the end  \n");
                printf("\n 5.Push at specified position       \n");
                printf("\n 6.remove from beginning      \n");
                printf("\n 7.remove  from the end        \n");
                printf("\n 8.remove  from specified position     \n");
                printf("\n 9.Exit       \n");
                printf("Enter your choice:\t");
                scanf("%d",&choice);
                switch(choice)
                {
                        case 1:
                                        create();
                                        break;
                        case 2:
                                        display();
                                        break;
                        case 3: 
                                        insert_begin();
                                        break;
                        case 4:
                                        insert_end();
                                        break;
                        case 5:
                                        insert_pos();
                                        break;
                        case 6:
                                        delete_begin();
                                        break;
                        case 7:
                                        delete_end();
                                        break;
                        case 8:
                                        delete_pos();
                                        break;
                        
                        case 9:
                                        exit(0);
                                        break;
                             
                        default:
                                        printf("\n Wrong Choice:\n");
                                            main();
                                        break;
                }
        }
        return 0;
}
void create()
{
        struct node *temp,*ptr;
        temp=(struct node *)malloc(sizeof(struct node));
        if(temp==NULL)
        {
                printf("\nOut of shelf Space:\n");
                exit(0);
        }
        printf("\nEnter the page of book for the Cell:\t");
        scanf("%d",&temp->info);
        temp->next=NULL;
        if(start==NULL)
        {
                start=temp;
        }
        else
        {
                ptr=start;
                while(ptr->next!=NULL)
                {
                        ptr=ptr->next;
                }
                ptr->next=temp;
        }
}

void display()
{
        struct node *ptr;
        if(start==NULL)
        {
                printf("\nBook self is empty:\n");
                return;
        }
        else
        {
                ptr=start;
                printf("\nThe book List  are:\n");
                while(ptr!=NULL)
                {
                        printf("%d\t",ptr->info );
                        ptr=ptr->next ;
                }
        }
}
void insert_begin()
{
        struct node *temp;
        temp=(struct node *)malloc(sizeof(struct node));
        if(temp==NULL)
        {
                printf("\nOut of Memory Space:\n");
                return;
        }
        printf("\nEnter the page of book for the Cell\t" );
        scanf("%d",&temp->info);
        temp->next =NULL;
        if(start==NULL)
        {
                start=temp;
        }
        else
        {
                temp->next=start;
                start=temp;
        }
}
void insert_end()
{
        struct node *temp,*ptr;
        temp=(struct node *)malloc(sizeof(struct node));
        if(temp==NULL)
        {
                printf("\nOut of Memory Space:\n");
                return;
        }
        printf("\nEnter the page of book for the Cell:\t" );
        scanf("%d",&temp->info );
        temp->next =NULL;
        if(start==NULL)
        {
                start=temp;
        }
        else
        {
                ptr=start;
                while(ptr->next !=NULL)
                {
                        ptr=ptr->next ;
                }
                ptr->next =temp;
        }
}
void insert_pos()
{
        struct node *ptr,*temp;
        int i,pos;
        temp=(struct node *)malloc(sizeof(struct node));
        if(temp==NULL)
        {
                printf("\nOut of Memory Space:\n");
                return;
        }
        printf("\nEnter the position for the new book to be inserted:\t");
        scanf("%d",&pos);
        printf("\nEnter the page number of the node:\t");
        scanf("%d",&temp->info) ;
  
        temp->next=NULL;
        if(pos==0)
        {
                temp->next=start;
                start=temp;
        }
        else
        {
                for(i=0,ptr=start;i<pos-1;i++) { ptr=ptr->next;
                        if(ptr==NULL)
                        {
                                printf("\nPosition not found for you\n");
                                return;
                        }
                }
                temp->next =ptr->next ;
                ptr->next=temp;
        }
}
void delete_begin()
{
        struct node *ptr;
        if(ptr==NULL)
        {
                printf("\ncell is Empty:\n");
                return;
        }
        else
        {
                ptr=start;
                start=start->next ;
                printf("\nThe remove book  is :%d\t",ptr->info);
                free(ptr);
        }
}
void delete_end()
{
        struct node *temp,*ptr;
        if(start==NULL)
        {
                printf("\ncell is Empty:");
                exit(0);
        }
        else if(start->next ==NULL)
        {
                ptr=start;
                start=NULL;
                printf("\nThe remove book  is:%d\t",ptr->info);
                free(ptr);
        }
        else
        {
                ptr=start;
                while(ptr->next!=NULL)
                {
                        temp=ptr;
                        ptr=ptr->next;
                }
                temp->next=NULL;
                printf("\nThe remove Book is:%d\t",ptr->info);
                free(ptr);
        }
}
void delete_pos()
{
        int i,pos;
        struct node *temp,*ptr;
        if(start==NULL)
        {
                printf("\nThe book cell is Empty:\n");
                exit(0);
        }
        else
        {
                printf("\nEnter the position of the book to be deleted:\t");
                scanf("%d",&pos);
                if(pos==0)
                {
                        ptr=start;
                        start=start->next ;
                        printf("\nThe remove book  is:%d\t",ptr->info  );
                        free(ptr);
                }
                else
                {
                        ptr=start;
                        for(i=0;i<pos;i++) { temp=ptr; ptr=ptr->next ;
                                if(ptr==NULL)
                                {
                                        printf("\nPosition not Found:\n");
                                        return;
                                }
                        }
                        temp->next =ptr->next ;
                        printf("\nThe remove book  is:%d\t",ptr->info );
                        free(ptr);
                }
        }
}

//---------------------


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
