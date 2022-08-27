#include <stdio.h>

int main (void){
  printf("Hello World!\n");
  printf("Info is the name of the things!\n");
  char name[10];
  int age;
  printf("Enter your first name and age: \n");
  scanf("%s %d", name, &age); 
  printf("You entered: %s %d",name,age);
}
