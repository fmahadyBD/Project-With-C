#include<stdio.h>

int total=0;
int gf[100];
int k=0;
void j();
void s();
void hf();

int main(){
    int i;
    int a;
    printf("\n\n\n...............         Welcome to the Queen's  cafe            ....................\n\n");
    printf("Press 1 for Juice:\n");
    printf("Press 2 for Snacks:\n");
    printf("Press 3 for Heavy Food:\n");
    scanf("%d",&a);
    switch (a)
    {
    case 1:
            j();
        break;
    case 2:
            s();
        break;
     case 3:
            hf();
        break;
        
    
    default:
        break;




        
    }
    for ( i = 0; i < 100; i++)
    {
        total=total+gf[i];
    }
    

printf("Total bill: %d",total);


}

//-------------------------->


 // juice
    void j(){
       
        int b;
        int ar[]={0,80,90,80,90,80,90,70,90};//small

        int sa;
        int n;
        int r;
        
      printf("\n............ Juice .............:\n"); 
    printf("Press 1 for Mango juice:\n");
    printf("Press 2 for Apple juice:\n");
    printf("Press 3 for Strawberry juice:\n");
    printf("Press 4 for Blue berry juice:\n");
    printf("Press 5 for Pineapple juice:\n");
    printf("Press 6 for Kiwi juice:\n");
    printf("Press 7 for Watermelon juice:\n");
    printf("Press 8 for Orange juice:\n");

    scanf("%d",&b);

    printf("Press 1 for Small. It's price %d \n",ar[b]);
    printf("Press 2 for large. It's price %d\n",ar[b]*2);
    scanf("%d",&sa);

    printf("number of order:\n");
    scanf("%d",&n);

    gf[k]=ar[b]*sa*n;


    printf("Press 1 for order another juice\n");
    printf("Press 2 for order another Snacks\n");
    printf("Press 3 for order another Heavy Food\n");
    printf("Press any number without 1,2,3 for bill\n");
    scanf("%d",&r);
        if(r==1){
            k++;
            j();
        }else if(r==2){
            k++;
            s();
    }else if(r==3)
    {
        k++;
        hf();
    }
    
    

    }




//------------------------>
    
    void s(){
    int b;
        int ar[]={0,80,50,80,40,80,90,70,90};//small

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


    printf("Press 1 for order another juice\n");
    printf("Press 2 for order another Snacks\n");
    printf("Press 3 for order another Heavy Food\n");
    printf("Press any number without 1,2,3 for bill\n");
    scanf("%d",&r);
        if(r==1){
            k++;
            j();
        }else if(r==2){
            k++;
            s();
    }else if(r==3)
    {
        k++;
        hf();
    }
    }

//----------------------->    

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


    printf("Press 1 for order another juice\n");
    printf("Press 2 for order another Snacks\n");
    printf("Press 3 for order another Heavy Food\n");
    printf("Press any number without 1,2,3 for bill\n");
    scanf("%d",&r);
        if(r==1){
            k++;
            j();
        }else if(r==2){
            k++;
            s();
    }else if(r==3)
    {
        k++;
        hf();
    }


    }
