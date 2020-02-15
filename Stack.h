//
//  Stack.h
//

#ifndef Stack_h
#define Stack_h

#include "Userdata.h"

#define StackSize 12
#define Garbage 0xFFFF

typedef struct stack{
  int top;
  UserData data[StackSize];
}Stack,*StackPtr;


//  ----------------------------- //
//        Function prototypes     //
//  ----------------------------- //

// Dynamically allocate memory for stack 
StackPtr InitStack(void);
// Add an item onto the stack
void Push(StackPtr S,UserData input);
// Remove an item from the stack
void Pop(StackPtr S);
// Look at the top item in the stack
UserData Peak(StackPtr S);

#endif /* Stack_h */