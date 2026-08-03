#include <stdio.h>

int main()

{

// Variable declaration

char first_name[50], last_name[50], gender[10];
int age;

printf("Enter your details\n");

printf(" first name:");
scanf("%s", &first_name);

printf(" last name:");
scanf("%s", &last_name);

printf(" age:");
scanf("%d", &age);

printf(" gender:");
scanf(" %s \n", &gender);



printf("Name: %s %s \n", first_name , last_name);

printf("Age: %d\n", age);
printf("Gender: %s\n", gender);

  return 0;
}