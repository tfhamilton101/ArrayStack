
#include <stdlib.h>
#include "Userdata.h"
#include "Stack.h"

StackPtr InitStack(void)
{
  StackPtr ptr = (StackPtr)malloc(sizeof(Stack));
  ptr->top=-1;
  return ptr;
}

void Push(StackPtr S,UserData input)
{
  if( S->top < StackSize ){
    ++S->top;
    S->data[S->top]=input;
  }

}

void Pop(StackPtr S)
{
   if(S->top >= 0){
     --S->top;
   }
}

UserData Peak(StackPtr S) 
{
   UserData garbage={Garbage};
   if(S->top >= 0)
     return S->data[S->top];
   return  garbage; 
}