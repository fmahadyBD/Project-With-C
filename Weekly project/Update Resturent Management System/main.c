#include<stdio.h>

int total=0;
int gf[100];
int k=0;
void ju();
void sf();
void hf();
void recl();

int main(){
    int i;
    int sc;
    printf("\n~~~~~~~~~~~~~~~~         WELCOME TO MIM's cafe           ~~~~~~~~~~~~~~~\n\n");
    printf("INPUT 1 for Juice:\n");
    printf("INPUT 2 for Snacks:\n");
    printf("INPUT 3 for Heavy Food:\n");
    scanf("%d",&sc);
    switch (sc)
    {
    case 1:
            ju();
        break;
    case 2:
            sf();
        break;
     case 3:
            hf();
        break;
        
    
    default:
        break;


    }
    for ( i = 0; i <=k; i++)
    {
        total=total+gf[i];
    }
    

printf("YOUR Total bill: %d",total);


}

 void recl(){
    int r;

    printf("INPUT 1 for order another juice\n");
    printf("INPUTs 2 for order another Snacks\n");
    printf("INPUTs 3 for order another Heavy Food\n");
    printf("INPUT any number without 1,2,3 for bill\n");
    scanf("%d",&r);
        if(r==1){
            k++;
            ju();
        }else if(r==2){
            k++;
            sf();
    }else if(r==3)
    {
        k++;
        hf();
    }
    
    

 }

    void ju(){
       
        int b;
        int ar[]={0,80,90,80,90,80,90,70,90};

        int sa;
        int n;
        int r;
        
      printf("\n............ Juice .............:\n"); 
    printf("INPUT 1 for Mango juice:\n");
    printf("INPUT  2 for Apple juice:\n");
    printf("INPUT  3 for Strawberry juice:\n");
    printf("INPUT 4 for Blue berry juice:\n");
    printf("INPUT 5 for Pineapple juice:\n");
    printf("INPUT 6 for Kiwi juice:\n");
    printf("INPUT 7 for Watermelon juice:\n");
    printf("INPUT 8 for Orange juice:\n");

    scanf("%d",&b);

    printf("INPUT 1 for Small. It's price %d \n",ar[b]);
    printf("INPUT 2 for large. It's price %d\n",ar[b]*2);
    scanf("%d",&sa);

    printf("order:\n");
    scanf("%d",&n);

    gf[k]=ar[b]*sa*n;

        recl();
    
    }


    
    void sf(){
    int b;
        int ar[]={0,80,50,80,40,80,90,70,90};

        int sa;
        int n;
        int r;
        
      printf("\n............ Snacks .............:\n"); 
    printf("Press 1 for Mini Mughlai:\n");
    printf("Press 2 for Special Mughlai:\n");
    printf("Press 3 for Puran Dhakaiya Fuchka:\n");
    printf("Press 4 for Belpuri Fuchka:\n");
    printf("Press 5 for Special Alu Paratha:\n");
    printf("Press 6 for Doi Fuchka:\n");
    printf("Press 7 for Chowmein with White Sauce:\n");
    printf("Press 8 for Tea with biscuts:\n");

    scanf("%d",&b);

    printf("Press 1 for Small. It's price %d \n",ar[b]);
    printf("Press 2 for large. It's price %d\n",ar[b]*2);
    scanf("%d",&sa);

    printf("number of order:\n");
    scanf("%d",&n);

    gf[k]=ar[b]*sa*n;


  recl();
    
    }

    

    void hf(){
        int b;
        int ar[]={0,120,105,130,140,110,120,170,190,220,120,200,220,160};//small

        int sa;
        int n;
        int r;
        
      printf("\n............ Heavy Food .............:\n"); 
    printf("Press 1 for Chicken Chowmein:\n");
    printf("Press 2 for Chicken Chaap:\n");
    printf("Press 3 for Jali Kebab:\n");
    printf("Press 4 for Basmati Mutton Kacchi Biryani:\n");
    printf("Press 5 for Rui Fish Bhuna:\n");
    printf("Press 6 for Mutton Bhuna:\n");
    printf("Press 7 for Chicken Polao:\n");
    printf("Press 8 for Plain Polao with Egg:\n");
    printf("Press 9 for Chicken Roast:\n");
    printf("Press 10 for Mutton Bhuna:\n");
    printf("Press 11 for Rui Fish Bhuna:\n");
    printf("Press 12 for  Fried Chicken\n");
    printf("Press 13 for  Fried Rice:\n");

    scanf("%d",&b);

    printf("Press 1 for Small. It's price %d \n",ar[b]);
    printf("Press 2 for large. It's price %d\n",ar[b]*2);
    scanf("%d",&sa);

    printf("number of order:\n");
    scanf("%d",&n);

    gf[k]=ar[b]*sa*n;


   recl();
    


    }