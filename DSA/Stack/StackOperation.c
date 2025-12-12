#include <stdio.h>
#include <stdlib.h>

struct stack
{
    int size;
    int top;
    int *arr;
};

int isFull(struct stack *ptr)
{
    if (ptr->top == ptr->size - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int isEmpty(struct stack *ptr)
{
    if (ptr->top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void push(struct stack *ptr , int val){
    if (isFull(ptr)){
        printf("Stack overflow ! Cannot push %d to stack \n" , val);
    }
    else{
          ptr -> top++;
        ptr-> arr[ptr-> top] = val;
    }
}
int pop(struct stack *ptr ){
    if (isEmpty(ptr)){
        printf("Stack underflow ! Cannot pop from stack \n" );
        return -1;
    }
    else{
        int val = ptr-> arr[ptr->top];
        ptr -> top--;
        return val ;
    }
}
int main()
{
    struct stack *sp = (struct stack *)malloc(sizeof(struct stack)); // stack pointer
    sp->size = 10;
    sp->top = -1;
    sp->arr = (int *)malloc(sp->size * sizeof(int));
    // printf("The stack has been successfully created\n");
    printf("Before pushing , Empty : %d\n" , isEmpty(sp));
    printf("Before pushing , Full :%d\n" , isFull(sp));
    push (sp , 83);
    push (sp , 71);
    push (sp , 62);
    push (sp , 59);
    push (sp , 58);
    push (sp , 51);
    push (sp , 52);
    push (sp , 57);
    push (sp , 55);
    push (sp , 56);  //---Pushed 10 values 
    push (sp , 46);  // Stack overflown 
    printf("After pushing , Full : %d\n" , isFull(sp));
    printf("After pushing , Empty : %d\n" , isEmpty(sp));

    printf("Popped %d from the stack \n " , pop(sp));  //--> last in first out 
    printf("Popped %d from the stack \n " , pop(sp));  //--> last in first out 
    printf("Popped %d from the stack \n " , pop(sp));  //--> last in first out 
    return 0;
}