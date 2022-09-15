#include <stdio.h>
#include <string.h>


struct Person {
  char name[50];
  int id;
  float salary;
} person1,person2,person3,person4,person5,person6,person7,person8,person9,person10;

int main() {

  
  
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

  return 0;
}