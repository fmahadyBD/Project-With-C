
#include<stdio.h>
#include <math.h>
#include <string.h>


int total=0;
int totalOrder[100];
int sum=0;
int k=0;



void j();
void s();
void hf();
void of();
void train();
void Tmyemn();
void Tcu();
void Tsy();
void Agnibina();
void  BrahmaputraExpress();
void Tron();
void Traj();
void Tkus();
void Tdina();
void Tcha();
void Tpab();
void RupshaExpress();
void SimantaExpress();
void  KarnafuliExpress();
void ComillaCommuter ();
void  ParbaExpress ();
void UpabanExpress ();
void  ManagementSyestem();
void   ParbatExpress ();
void  Rangpurexpress ();
void KurigramExpress();
void  BanolataExpress();
void PadmaExpress();
void SundarbanExpress();
void ChitraExpress();
void PanchagarhExpress();
void DrutojanExpress();
void TurnaExpress ();
void  MahanagarProvati();
void TurnaExpress ();
void logff();




int m1=100,m2=100,cu1=100,cu2=100,c1=100,c2=100;
int d1=100,d2=100,k1=100,k2=100;
int s1=100,s2=100;
int rn1=100,rn2=100,ra1=100,ra2=100;

struct Person {
  char name[50];
  int id;
  float salary;
} person1,person2,person3,person4,person5,person6,person7,person8,person9,person10;



int main(){
     printf("\n\n\n\n\n\n.......... Welcome to Bangladesh RaillWay Website ..........\n\n\n\n ");
int a;
    printf("\n\n\n...............         Please Selected your options            ....................\n\n");
    printf("Press 1 for Login section:\n\n\n");
    printf("Press 2 for Tictek :\n\n\n");
    printf("Press 3 for food order:\n\n\n");
    scanf("%d",&a);
    switch (a)
    {
    case 1:
            logff();
        break;
    case 2:
           ManagementSyestem();
           
        break;
     case 3:
            of();
        break;
        
    
    default:
        break;




        
    }
  }




void logff(){
    int t,dt;
int k;
int a[10]={111,222,333,444,555,666,777,888,999,1010};
int b[10]={11,22,33,44,55,66,77,88,99,12};
int c,d,x;
printf("\n Enter your Username:\n");
scanf("%d ",&c);
printf("\n Enter your password:\n");
scanf("%d ",&d);
for(t=0;t<=10;t++){
    if (a[t]==c)
    {
        for(k=0;k<=10;k++){
            if( b[k] ==d){



                printf("Successfully login");
printf("To see employees ditails press 1:\n");
scanf("%d",&dt);
if(dt==1){



                 person1.id = 111;
  person1. salary = 25000;
  strcpy(person1.name, "Hafiz");

  person2.id = 222;
  person2. salary = 25000;
  strcpy(person2.name, "Nayim");

  person3.id = 333;
  person3. salary = 25000;
  strcpy(person3.name, "Ashiq");

  person4.id = 444;
  person4. salary = 25000;
  strcpy(person4.name, "Robin");

  person5.id = 555;
  person5. salary = 25000;
  strcpy(person5.name, "Turjo");

  person6.id = 666;
  person6. salary = 25000;
  strcpy(person6.name, "auosh");

  person7.id = 777;
  person7. salary = 25000;
  strcpy(person7.name, "Kanchan");

  person8.id = 888;
  person8. salary = 25000;
  strcpy(person8.name, "Babar");

  person9.id = 999;
  person9. salary = 25000;
 strcpy(person9.name, "asif ali");

  person10.id = 1010;
  person10. salary = 25000;
  strcpy(person10.name, "Azizul");


  printf("Name: %s\n", person1.name);
  printf("Citizenship No.: %d\n", person1.id);
  printf("Salary: %.2f taka \n", person1.salary);

   printf("Name: %s\n", person2.name);
  printf("Citizenship No.: %d\n", person2.id);
  printf("Salary: %.2f taka \n", person2.salary);

   printf("Name: %s\n", person3.name);
  printf("Citizenship No.: %d\n", person3.id);
  printf("Salary: %.2f taka \n", person3.salary);

   printf("Name: %s\n", person4.name);
  printf("Citizenship No.: %d\n", person4.id);
  printf("Salary: %.2f taka \n", person4.salary);

   printf("Name: %s\n", person5.name);
  printf("Citizenship No.: %d\n", person5.id);
  printf("Salary: %.2f taka \n", person5.salary);

   printf("Name: %s\n", person6.name);
  printf("Citizenship No.: %d\n", person6.id);
  printf("Salary: %.2f taka \n", person6.salary);

   printf("Name: %s\n", person7.name);
  printf("Citizenship No.: %d\n", person7.id);
  printf("Salary: %.2f taka \n", person7.salary);

  printf("Name: %s\n", person8.name);
  printf("Citizenship No.: %d\n", person8.id);
  printf("Salary: %.2f taka \n", person8.salary);

  printf("Name: %s\n", person9.name);
  printf("Citizenship No.: %d\n", person9.id);
  printf("Salary: %.2f taka \n", person9.salary);

  printf("Name: %s\n", person10.name);
  printf("Citizenship No.: %d\n", person10.id);
  printf("Salary: %.2f taka \n", person10.salary);

}else{

main();

}


            }
        }
    }
    
}
printf("\n \n Enter 0 for going Main:\n");
scanf("%d",&x);
if(x==0){
    main();
}

    
    
}
void of(){

 int i,x;
    int a;
    printf("\n\n\n...............         Welcome to the Train's  cafe            ....................\n\n");
    printf("Press 1 for Juice:\n\n");
    printf("Press 2 for Snacks:\n\n");
    printf("Press 3 for Heavy Food:\n\n");
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
        total=total+totalOrder[i];
    }
    

printf("Total bill: %d",total);
printf("\n \n Enter 0 for going Main:\n");
scanf("%d",&x);
if(x==0){
    main();
}


}


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

    totalOrder[k]=ar[b]*sa*n;


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

    totalOrder[k]=ar[b]*sa*n;


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

    totalOrder[k]=ar[b]*sa*n;


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




void ManagementSyestem(){

int a,x;
   
    printf("  Train Dhaka to Mymensingh press 1 \n");
    printf("  Train Dhaka to Cumillah press 2 \n");
    printf("  Train Dhaka to Shylet press 3 \n");
    printf("  Train Dhaka to Rangpur press 4 \n");
    printf("  Train Dhaka to Rajshahi press 5 \n");
    
    printf("  Train Dhaka to kustia press 6 \n");
    printf("  Train Dhaka to Dinajpur press 7 \n");
    printf("  Train Dhaka to Pabna press 8 \n");
    printf("  Train Dhaka to Chitagong press 9 \n");


scanf("%d",&a);
switch (a)
{
case 1:
    Tmyemn();
        break;
case 2:
    Tcu();
        break;
case 3:
    Tsy();
        break;
case 4:
    Tron(); 
        break;
case 5:
    Traj(); 
        break;
case 6:
       Tkus(); 
    break;
case 7:
       Tdina(); 
       break;
case 8:
       Tpab(); 
        break;
case 9:
       Tcha(); 
        
    break;

        default:
    break;




    
}

    printf("\n\nTotal %d \n",sum);
    printf("\n Thanks \n");
    printf("public-privet project\n");
    printf("\nPower by Fahim's Software company\n\n\n\n");
    printf("\n \n Enter 0 for going Main:\n");
scanf("%d",&x);
if(x==0){
    main();
}

}
void Tmyemn(){




int a;
printf("\n                                Select the train you want to journy\n\n");

    printf(" Agnibina Train Dhaka to Mymensingh press 1 \n");
    printf(" Brahmaputra Express Train Dhaka to Mymensingh press 2 \n");


    scanf("%d",&a);

switch (a)
{
case 1:
        Agnibina();
        break;
case 2:
    BrahmaputraExpress();
        break;


default:
    break;
}


    


}

void Agnibina(){
    int i,nb;
    
   
    int a[7]={0,50,70,120,140,150,200};

    
    printf("\t............Welcome to Agnibina Express Train Ticket counter.............\n");
    printf("Select 1 for buy ticket 2 for cancel:\n");


    int z,ct,bm;
    scanf("%d",&z);
    if(z==2){
       printf("how ticket you want to cancel:\n");
       scanf("%d",ct);
        m1=m1+ct;
        
        printf("\n Avalabel Ticket:%d\n ",m1);

  
          
        
        
        
         }else{
        printf("\n Avalabel Ticket:%d\n ",m1);
    

    printf("Press 1 for Ticket Dhaka to Biman Bandar Railway Price %d Taka\n",a[1]);
    printf("Press 2 for Ticket Dhaka to Gajipur Railway Station  Price %d Taka\n",a[2]);
     printf("Press 3 for Ticket Dhaka to Moshakhali Railway Station Price %d Taka\n",a[3]);
    printf("Press 4 for Ticket Dhaka to Sriipur Railway Station Price %d Taka\n",a[4]);
     printf("Press 5 for Ticket Dhaka to Fatema Nagar Railway Station Price %d Taka\n",a[5]);
    printf("Press 6 for Ticket Dhaka to Mymensing Price %d Taka\n",a[6]);

    scanf("%d",&i);

    printf("Number of ticket you want to Buy:\n");
    
    scanf("%d",&nb);

    sum=a[i]*nb;
    m1=m1-nb;
    
    
}}

void BrahmaputraExpress(){
    
    int i,nb;
   
    int a[7]={0,50,75,125,130,160,200};
    
    int z,ct,bm;
    scanf("%d",&z);
    if(z==2){
       printf("how ticket you want to cancel:\n");
       scanf("%d",ct);
        m2=m2+ct;
        
        printf("\n Avalabel Ticket:%d\n ",m1);

  
          
        
        
        
         }else{
        printf("\n Avalabel Ticket:%d\n ",m1);
    
    
    printf("\t............Welcome to Brahmaputra Express Train Ticket counter.............\n");

    printf("Press 1 for Ticket Dhaka to Biman Bandar Railway Price %d Taka\n",a[1]);
    printf("Press 2 for Ticket Dhaka to Gajipur Railway Station  Price %d Taka\n",a[2]);
     printf("Press 3 for Ticket Dhaka to Moshakhali Railway Station Price %d Taka\n",a[3]);
    printf("Press 4 for Ticket Dhaka to Sriipur Railway Station Price %d Taka\n",a[4]);
     printf("Press 5 for Ticket Dhaka to Fatema Nagar Railway Station Price %d Taka\n",a[5]);
    printf("Press 6 for Ticket Dhaka to Mymensing Price %d Taka\n",a[6]);

    scanf("%d",&i);

    printf("Number of ticket you want to Buy:\n");
    
    scanf("%d",&nb);

    sum=a[i]*nb;
    m1=m1-nb;
}}




//------------>
void Tpab(){
    int a;
    printf("\n                                Select the train you want to journy\n\n");
    printf(" Rupsha Express Train Dhaka to Pabna press 1 \n");
    printf(" Simanta Express Train Dhaka to Pabna press 2 \n");


    scanf("%d",&a);

switch (a)
{
case 1:
        RupshaExpress();
        break;
case 2:
    SimantaExpress();
        break;


default:
    break;
}


}
void RupshaExpress(){
    
    
}
void SimantaExpress(){
    
}


//----------->


void Tcu(){
     int a;
    printf("\n                                Select the train you want to journy\n\n");
    printf(" Karnafuli ExpressTrain Dhaka to Cumilla press 1 \n");
    printf(" Comilla Commuter Train Dhaka to Cumilla press 2 \n");


    scanf("%d",&a);

switch (a)
{
case 1:
        KarnafuliExpress();
        break;
case 2:
    ComillaCommuter ();
        break;


default:
    break;
}

}
void KarnafuliExpress(){
    
    int i,nb;
   
    int a[7]={0,50,75,125,130,160};
     int z,ct,bm;
    scanf("%d",&z);
    if(z==2){
       printf("how ticket you want to cancel:\n");
       scanf("%d",ct);
        cu1=cu1+ct;
        
        printf("\n Avalabel Ticket:%d\n ",m1);

  
          
        
        
        
         }else{
        printf("\n Avalabel Ticket:%d\n ",m1);
    
    printf("\t............Welcome to Karnafuli Express Train Ticket counter.............\n");

    printf("Press 1 for Ticket Dhaka to Biman Bandar Railway Price %d Taka\n",a[1]);
    printf("Press 2 for Ticket Dhaka to Amirgonj Railway Station Price %d Taka\n",a[2]);
     printf("Press 3 for Ticket Dhaka to Jinarodi Railway Station Price %d Taka\n",a[3]);
    printf("Press 4 for Ticket Dhaka to Methikanda Railway Station Price %d Taka\n",a[4]);
     printf("Press 5 for Ticket Dhaka to Mondobag Railway Station Price %d Taka\n",a[5]);
    printf("Press 6 for Ticket Dhaka to cumilla Railway station Price %d Taka\n",a[6]);

    scanf("%d",&i);

    printf("Number of ticket you want to Buy:\n");
    
    scanf("%d",&nb);

    sum=a[i]*nb;
    cu1=cu1-nb;
    }}




void ComillaCommuter (){
    int i,nb;
   
    int a[7]={0,50,75,125,130,160};
     int z,ct,bm;
    scanf("%d",&z);
    if(z==2){
       printf("how ticket you want to cancel:\n");
       scanf("%d",ct);
        cu2=cu2+ct;
        
        printf("\n Avalabel Ticket:%d\n ",m1);

  
          
        
        
        
         }else{
        printf("\n Avalabel Ticket:%d\n ",m1);
    
    printf("\t............Welcome to Comilla Commuter Train Ticket counter.............\n");

    printf("Press 1 for Ticket Dhaka to Biman Bandar Railway Price %d Taka\n",a[1]);
    printf("Press 2 for Ticket Dhaka to Amirgonj Railway Station Price %d Taka\n",a[2]);
     printf("Press 3 for Ticket Dhaka to Jinarodi Railway Station Price %d Taka\n",a[3]);
    printf("Press 4 for Ticket Dhaka to Methikanda Railway Station Price %d Taka\n",a[4]);
     printf("Press 5 for Ticket Dhaka to Mondobag Railway Station Price %d Taka\n",a[5]);
    printf("Press 6 for Ticket Dhaka to cumilla Railway station Price %d Taka\n",a[6]);

    scanf("%d",&i);

    printf("Number of ticket you want to Buy:\n");
    
    scanf("%d",&nb);

    sum=a[i]*nb;
    cu2=cu2-nb;
}}

//------------------->

void Tsy(){
     int a;
    printf("\n                                Select the train you want to journy\n\n");
    printf(" Parbat Express Dhaka to Sylhet press 1 \n");
    printf(" Upaban Express Train Dhaka to Sylhet press 2 \n");


    scanf("%d",&a);

switch (a)
{
case 1:
        ParbatExpress ();
        break;
case 2:
    UpabanExpress ();
        break;


default:
    break;}

}
void ParbatExpress (){
    int i,nb;
   
    int a[7]={0,50,75,125,130,160};
     int z,ct,bm;
    scanf("%d",&z);
    if(z==2){
       printf("how ticket you want to cancel:\n");
       scanf("%d",ct);
        s1=s1+ct;
        
        printf("\n Avalabel Ticket:%d\n ",m1);

  
          
        
        
        
         }else{
        printf("\n Avalabel Ticket:%d\n ",m1);
    
    printf("\t............Welcome to Parbat Express Train Ticket counter.............\n");

    printf("Press 1 for Ticket Dhaka to Biman Bandar Railway Price %d Taka\n",a[1]);
    printf("Press 2 for Ticket Dhaka to Ashuganj Railway Station Price %d Taka\n",a[2]);
     printf("Press 3 for Ticket Dhaka to Brahmanbaria Railway Station Price %d Taka\n",a[3]);
    printf("Press 4 for Ticket Dhaka to Azampu Railway Station Price %d Taka\n",a[4]);
     printf("Press 5 for Ticket Dhaka to Junction and Maijgao Railway Station Price %d Taka\n",a[5]);
    printf("Press 6 for Ticket Dhaka to sylhet Railway station Price %d Taka\n",a[6]);

    scanf("%d",&i);

    printf("Number of ticket you want to Buy:\n");
    
    scanf("%d",&nb);

    sum=a[i]*nb;
    s1=s1-nb;
    
};

void UpabanExpress (){
     int i,nb;
   
    int a[7]={0,50,75,125,130,160};

     int z,ct,bm;
    scanf("%d",&z);
    if(z==2){
       printf("how ticket you want to cancel:\n");
       scanf("%d",ct);
        s2=s2+ct;
        
        printf("\n Avalabel Ticket:%d\n ",s2);

  
          
        
        
        
         }else{
        printf("\n Avalabel Ticket:%d\n ",m1);
    
    printf("\t............Welcome to Upaban Express Train Ticket counter.............\n");

    printf("Press 1 for Ticket Dhaka to Biman Bandar Railway Price %d Taka\n",a[1]);
    printf("Press 2 for Ticket Dhaka to Ashuganj Railway Station Price %d Taka\n",a[2]);
     printf("Press 3 for Ticket Dhaka to Brahmanbaria Railway Station Price %d Taka\n",a[3]);
    printf("Press 4 for Ticket Dhaka to Azampu Railway Station Price %d Taka\n",a[4]);
     printf("Press 5 for Ticket Dhaka to Junction and Maijgao Railway Station Price %d Taka\n",a[5]);
    printf("Press 6 for Ticket Dhaka to sylhet Railway station Price %d Taka\n",a[6]);

    scanf("%d",&i);

    printf("Number of ticket you want to Buy:\n");
    
    scanf("%d",&nb);

    sum=a[i]*nb;

    s2=s2-nb;
         
    
    
}
}


//--------------->

void Tron(){
     int a;
    printf("\n                                Select the train you want to journy\n\n");
    printf(" Parbat Express Dhaka to Rongpur press 1 \n");
    printf(" Upaban Express Train Dhaka to Rongpur press 2 \n");


    scanf("%d",&a);

switch (a)
{
case 1:
       Rangpurexpress ();
        break;
case 2:
    KurigramExpress();
        break;


default:
    break;}

}
void Rangpurexpress (){
     int i,nb;
   
    int a[7]={0,50,75,125,130,160};
     int z,ct,bm;
    scanf("%d",&z);
    if(z==2){
       printf("how ticket you want to cancel:\n");
       scanf("%d",ct);
        rn1=rn1+ct;
        
        printf("\n Avalabel Ticket:%d\n ",m1);

  
          
        
        
        
         }else{
        printf("\n Avalabel Ticket:%d\n ",m1);

    
    printf("\t............Welcome to Rangpur express Train Ticket counter.............\n");

    printf("Press 1 for Ticket Dhaka to Biman Bandar Railway Price %d Taka\n",a[1]);
    printf("Press 2 for Ticket Dhaka to B-B East Railway Station Price %d Taka\n",a[2]);
     printf("Press 3 for Ticket Dhaka to Chatmoha Railway Station Price %d Taka\n",a[3]);
    printf("Press 4 for Ticket Dhaka to Nator Railway Station Price %d Taka\n",a[4]);
     printf("Press 5 for Ticket Dhaka to Santahar Railway Station Price %d Taka\n",a[5]);
    printf("Press 6 for Ticket Dhaka to Rongpur Railway station Price %d Taka\n",a[6]);

    scanf("%d",&i);

    printf("Number of ticket you want to Buy:\n");
    
    scanf("%d",&nb);

    sum=a[i]*nb;
    rn1=rn1-nb;
         }
    
    
}
void KurigramExpress(){
     int i,nb;
   
    int a[7]={0,50,75,125,130,160};
     int z,ct,bm;
    scanf("%d",&z);
    if(z==2){
       printf("how ticket you want to cancel:\n");
       scanf("%d",ct);
        rn2=rn2+ct;
        
        printf("\n Avalabel Ticket:%d\n ",m1);

  
          
        
        
        
         }else{
        printf("\n Avalabel Ticket:%d\n ",m1);
    
    printf("\t............Welcome to Kurigram Express Train Ticket counter.............\n");

    printf("Press 1 for Ticket Dhaka to Biman Bandar Railway Price %d Taka\n",a[1]);
    printf("Press 2 for Ticket Dhaka to B-B East Railway Station Price %d Taka\n",a[2]);
     printf("Press 3 for Ticket Dhaka to Chatmoha Railway Station Price %d Taka\n",a[3]);
    printf("Press 4 for Ticket Dhaka to Nator Railway Station Price %d Taka\n",a[4]);
     printf("Press 5 for Ticket Dhaka to Santahar Railway Station Price %d Taka\n",a[5]);
    printf("Press 6 for Ticket Dhaka to Rongpur Railway station Price %d Taka\n",a[6]);

    scanf("%d",&i);

    printf("Number of ticket you want to Buy:\n");
    
    scanf("%d",&nb);

    sum=a[i]*nb;
    rn2=rn2-nb;
    
    
}

//---------->

void Traj(){

     int a;
    printf("\n                                Select the train you want to journy\n\n");
    printf(" Banolata Express Dhaka to Rajshahi press 1 \n");
    printf(" Padma Express Train Dhaka to Rajshahi press 2 \n");


    scanf("%d",&a);

switch (a)
{
case 1:
       BanolataExpress();
        break;
case 2:
    PadmaExpress();
        break;


default:
    break;}


}
void BanolataExpress(){
    int i,nb;
   
    int a[7]={0,50,75,125,130,160};
     int z,ct,bm;
    scanf("%d",&z);
    if(z==2){
       printf("how ticket you want to cancel:\n");
       scanf("%d",ct);
        ra1=ra1+ct;
        
        printf("\n Avalabel Ticket:%d\n ",m1);

  
          
        
        
        
         }else{
        printf("\n Avalabel Ticket:%d\n ",m1);
    
    printf("\t............Welcome to Banolata Express Train Ticket counter.............\n");

    printf("Press 1 for Ticket Dhaka to Biman Bandar Railway Price %d Taka\n",a[1]);
    printf("Press 2 for Ticket Dhaka to Joydevpur Junction Price %d Taka\n",a[2]);
     printf("Press 3 for Ticket Dhaka to Tangail Railway Station Price %d Taka\n",a[3]);
    printf("Press 4 for Ticket Dhaka to Bangabandhu Bridge East Junction Price %d Taka\n",a[4]);
     printf("Press 5 for Ticket Dhaka to Baral Bridge Station Price %d Taka\n",a[5]);
    printf("Press 6 for Ticket Dhaka to Rajshahi Railway station Price %d Taka\n",a[6]);

    scanf("%d",&i);

    printf("Number of ticket you want to Buy:\n");
    
    scanf("%d",&nb);

    sum=a[i]*nb;
    ra1=ra1-nb;

}
void PadmaExpress(){
      int i,nb;
   
    int a[7]={0,50,75,125,130,160};
    
    printf("\t............Welcome to Padma Express Train Ticket counter.............\n");

    printf("Press 1 for Ticket Dhaka to Biman Bandar Railway Price %d Taka\n",a[1]);
    printf("Press 2 for Ticket Dhaka to Joydevpur Junction Price %d Taka\n",a[2]);
     printf("Press 3 for Ticket Dhaka to Tangail Railway Station Price %d Taka\n",a[3]);
    printf("Press 4 for Ticket Dhaka to Bangabandhu Bridge East Junction Price %d Taka\n",a[4]);
     printf("Press 5 for Ticket Dhaka to Baral Bridge Station Price %d Taka\n",a[5]);
    printf("Press 6 for Ticket Dhaka to Rajshahi Railway station Price %d Taka\n",a[6]);

    scanf("%d",&i);

    printf("Number of ticket you want to Buy:\n");
    
    scanf("%d",&nb);

    sum=a[i]*nb;
    

}


//-------->
void Tkus(){
     int a;
    printf("\n                                Select the train you want to journy\n\n");
    printf(" Sundarban Express Dhaka to kushtia press 1 \n");
    printf(" Chitra ExpressTrain Dhaka to kushtia press 2 \n");


    scanf("%d",&a);

switch (a)
{
case 1:
      SundarbanExpress();
        break;
case 2:
   ChitraExpress();
        break;


default:
    break;}

    
}
void ChitraExpress(){
     int i,nb;
   
    int a[7]={0,50,75,125,130,160};
     int z,ct,bm;
    scanf("%d",&z);
    if(z==2){
       printf("how ticket you want to cancel:\n");
       scanf("%d",ct);
        k1=k1+ct;
        
        printf("\n Avalabel Ticket:%d\n ",m1);

  
          
        
        
        
         }else{
        printf("\n Avalabel Ticket:%d\n ",m1);
    
    printf("\t............Welcome to Chitra Express Train Ticket counter.............\n");

    printf("Press 1 for Ticket Dhaka to Biman Bandar Railway Price %d Taka\n",a[1]);
    printf("Press 2 for Ticket Dhaka to Joydevpur Junction Price %d Taka\n",a[2]);
     printf("Press 3 for Ticket Dhaka to Tangail Railway Station Price %d Taka\n",a[3]);
    printf("Press 4 for Ticket Dhaka to Bangabandhu Bridge East Junction Price %d Taka\n",a[4]);
     printf("Press 5 for Ticket Dhaka to poradah Price %d Taka\n",a[5]);
    printf("Press 6 for Ticket Dhaka to kushtia Railway station Price %d Taka\n",a[6]);

    scanf("%d",&i);

    printf("Number of ticket you want to Buy:\n");
    
    scanf("%d",&nb);

    sum=a[i]*nb;
    k1=k1-nb;


}
void SundarbanExpress(){
    int i,nb;
   
    int a[7]={0,50,75,125,130,160};
     int z,ct,bm;
    scanf("%d",&z);
    if(z==2){
       printf("how ticket you want to cancel:\n");
       scanf("%d",ct);
        k2=k2+ct;
        
        printf("\n Avalabel Ticket:%d\n ",m1);

  
          
        
        
        
         }else{
        printf("\n Avalabel Ticket:%d\n ",m1);
    
    printf("\t............Welcome to Sundarban Express Train Ticket counter.............\n");

    printf("Press 1 for Ticket Dhaka to Biman Bandar Railway Price %d Taka\n",a[1]);
    printf("Press 2 for Ticket Dhaka to Joydevpur Junction Price %d Taka\n",a[2]);
     printf("Press 3 for Ticket Dhaka to Tangail Railway Station Price %d Taka\n",a[3]);
    printf("Press 4 for Ticket Dhaka to Bangabandhu Bridge East Junction Price %d Taka\n",a[4]);
     printf("Press 5 for Ticket Dhaka to poradah Price %d Taka\n",a[5]);
    printf("Press 6 for Ticket Dhaka to kushtia Railway station Price %d Taka\n",a[6]);

    scanf("%d",&i);

    printf("Number of ticket you want to Buy:\n");
    
    scanf("%d",&nb);

    sum=a[i]*nb;
    k2=k2-nb;

}

//--------------->
void Tdina(){
    int a;
    printf("\n                                Select the train you want to journy\n\n");
    printf(" Drutojan Express Dhaka to Dinajpurpress 1 \n");
    printf(" Panchagarh Express Dhaka to Dinajpur press 2 \n");


    scanf("%d",&a);

switch (a)
{
case 1:
      DrutojanExpress();
        break;
case 2:
   PanchagarhExpress();
        break;


default:
    break;}


    
}
void PanchagarhExpress(){
    int i,nb;
   
    int a[7]={0,50,75,125,130,160};
     int z,ct,bm;
    scanf("%d",&z);
    if(z==2){
       printf("how ticket you want to cancel:\n");
       scanf("%d",ct);
        d1=d1+ct;
        
        printf("\n Avalabel Ticket:%d\n ",m1);

  
          
        
        
        
         }else{
        printf("\n Avalabel Ticket:%d\n ",m1);
    
    printf("\t............Welcome to Panchagarh Express Train Ticket counter.............\n");

    printf("Press 1 for Ticket Dhaka to Biman Bandar Railway Price %d Taka\n",a[1]);
    printf("Press 2 for Ticket Dhaka to Natore Junction Price %d Taka\n",a[2]);
     printf("Press 3 for Ticket Dhaka to Abdulpur Railway Station Price %d Taka\n",a[3]);
    printf("Press 4 for Ticket Dhaka to Joypurhat station Price %d Taka\n",a[4]);
     printf("Press 5 for Ticket Dhaka to Hili Price %d Taka\n",a[5]);
    printf("Press 6 for Ticket Dhaka to Dinajpur Railway station Price %d Taka\n",a[6]);

    scanf("%d",&i);

    printf("Number of ticket you want to Buy:\n");
    
    scanf("%d",&nb);

    sum=a[i]*nb;
    d1=d1-nb;

}
void DrutojanExpress(){
    int i,nb;
   
    int a[7]={0,50,75,125,130,160};
     int z,ct,bm;
    scanf("%d",&z);
    if(z==2){
       printf("how ticket you want to cancel:\n");
       scanf("%d",ct);
        d2=d2+ct;
        
        printf("\n Avalabel Ticket:%d\n ",m1);

  
          
        
        
        
         }else{
        printf("\n Avalabel Ticket:%d\n ",m1);
    
    printf("\t............Welcome to Drutojan Express Train Ticket counter.............\n");

    printf("Press 1 for Ticket Dhaka to Biman Bandar Railway Price %d Taka\n",a[1]);
    printf("Press 2 for Ticket Dhaka to Natore Junction Price %d Taka\n",a[2]);
     printf("Press 3 for Ticket Dhaka to Abdulpur Railway Station Price %d Taka\n",a[3]);
    printf("Press 4 for Ticket Dhaka to Joypurhat station Price %d Taka\n",a[4]);
     printf("Press 5 for Ticket Dhaka to Hili Price %d Taka\n",a[5]);
    printf("Press 6 for Ticket Dhaka to Dinajpur Railway station Price %d Taka\n",a[6]);

    scanf("%d",&i);

    printf("Number of ticket you want to Buy:\n");
    
    scanf("%d",&nb);

    sum=a[i]*nb;
d2=d2-nb;
}

}

//---------->

void Tcha(){ 
    
     int a;
    printf("\n                                Select the train you want to journy\n\n");

    printf(" Mahanagar Provati Dhaka to Chittagong 1 \n");
    printf(" Turna Express Express Dhaka to Chittagong press 2 \n");


    scanf("%d",&a);

switch (a)
{
case 1:
      MahanagarProvati();
        break;
case 2:
   TurnaExpress ();
        break;


default:
    break;}


}
void MahanagarProvati(){

     int i,nb;
   
    int a[7]={0,50,75,125,130,160};
     int z,ct,bm;
    scanf("%d",&z);
    if(z==2){
       printf("how ticket you want to cancel:\n");
       scanf("%d",ct);
        c1=c1+ct;
        
        printf("\n Avalabel Ticket:%d\n ",m1);

  
          
        
        
        
         }else{
        printf("\n Avalabel Ticket:%d\n ",m1);
    
    printf("\t............Welcome to Mahanagar Provati Train Ticket counter.............\n");

    printf("Press 1 for Ticket Dhaka to Kumira Railway Price %d Taka\n",a[1]);
    printf("Press 2 for Ticket Dhaka to Feni Junction Price %d Taka\n",a[2]);
     printf("Press 3 for Ticket Dhaka to Laksam Junction Price %d Taka\n",a[3]);
    printf("Press 4 for Ticket Dhaka to Kasba station Price %d Taka\n",a[4]);
     printf("Press 5 for Ticket Dhaka to Akhaura Junction Price %d Taka\n",a[5]);
    printf("Press 6 for Ticket Dhaka to Chittagong Junction Price %d Taka\n",a[6]);

    scanf("%d",&i);

    printf("Number of ticket you want to Buy:\n");
    
    scanf("%d",&nb);

    sum=a[i]*nb;
    c1=c1-nb;}

}
void TurnaExpress (){

     int i,nb;
   
    int a[7]={0,50,75,125,130,160};
     int z,ct,bm;
    scanf("%d",&z);
    if(z==2){
       printf("how ticket you want to cancel:\n");
       scanf("%d",ct);
        c2=c2+ct;
        
        printf("\n Avalabel Ticket:%d\n ",m1);

  
          
        
        
        
         }else{
        printf("\n Avalabel Ticket:%d\n ",m1);
    
    printf("\t............Welcome to Turna Express Train Ticket counter.............\n");

    printf("Press 1 for Ticket Dhaka to Kumira Railway Price %d Taka\n",a[1]);
    printf("Press 2 for Ticket Dhaka to Feni Junction Price %d Taka\n",a[2]);
     printf("Press 3 for Ticket Dhaka to Laksam Junction Price %d Taka\n",a[3]);
    printf("Press 4 for Ticket Dhaka to Kasba station Price %d Taka\n",a[4]);
     printf("Press 5 for Ticket Dhaka to Akhaura Junction Price %d Taka\n",a[5]);
    printf("Press 6 for Ticket Dhaka to Chittagong Junction Price %d Taka\n",a[6]);

    scanf("%d",&i);

    printf("Number of ticket you want to Buy:\n");
    
    scanf("%d",&nb);

    sum=a[i]*nb;
    c2=c2-nb;

}


