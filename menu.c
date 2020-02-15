#include <stdio.h>
#include "Userdata.h"
#include "Stack.h"
#include "menu.h"

int menu(StackPtr S)
{
   int menu_input;
   UserData data;

   printf("\n1) Peak top Item\n");
   printf("2) Push Item\n");
   printf("3) Pop Item\n");
   printf("4) Empty List\n");
   printf("5) Quit \n");

   scanf("%d",&menu_input);

   switch(menu_input){
      case PEAK:
         data=Peak(S);
         if(data.num==0xFFFF)
            printf("stack empty\n");
         else
            printf("%d on the top of the stack\n",data.num);
         break;
      case PUSH:
         printf("Enter an value: ");
         scanf("%d",&data.num);
         Push(S,data);
         printf("%d Pushed to the stack\n",data.num);
         break;
      case POP:
         data=Peak(S);
         printf("%d removed from the stack\n",data.num);
         Pop(S);
         break;
      case EMPTY:
         while(S->top >= 0){
            data=Peak(S);
            printf("%d removed from the stack\n",data.num);
            Pop(S);
         }
         printf("Stack empty\n");
         break;
      case END:
         return 0;
         break;
      default:
         break;   
   } 

   return 1;

}