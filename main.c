#include <stdio.h>
#include "Stack.h"
#include "Userdata.h"
#include "menu.h"

int main(void)
{
 StackPtr S = InitStack();

 int input = menu(S);

  while(input){
     input =menu(S);
  }

   printf("Goodbye!\n");

   return 0;
}