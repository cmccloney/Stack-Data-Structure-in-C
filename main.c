#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100

typedef struct Stacks{
    int array[MAX_SIZE];
    int isEmpty;
    int i;
}Stack;

int main()
{
    Stack stack;
    int val = 1;
    stack.i = 0;
    stack.isEmpty = 0;
    printf("Stack Data Structure\n");
    printf("--------------------\n");
    while(val == 1){
        int answer = -1;
        int num = -1;
        printf("0: Push number onto stack\n");
        printf("1: Pop number off of stack\n");
        printf("2: Peek at top of stack\n");
        printf("3: Size of stack\n");
        printf("4: Checks if stack is empty\n");
        printf("5: Quit\n");
        while(answer == -1){
            printf("Enter a number:");
            scanf("%d",&answer);
        }
        switch( answer ){
        case 0:
            while(num == -1){
                printf("Enter number to be pushed:");
                scanf("%d",&num);
            }
            stack.array[stack.i] = num;
            stack.i = (stack.i) + 1;
            if(stack.isEmpty != 1){
                stack.isEmpty = 1;
            }
            printf("\n");
            break;
        case 1:
            stack.i = (stack.i) - 1;
            if(stack.i == 0){
                stack.isEmpty = 0;
            }
            printf("\n");
            break;
        case 2:
            num = (stack.i-1);
            if(num != 0){
                printf("%d\n\n",stack.array[num]);
            }else{
                printf("Stack is empty\n\n");
            }
            break;
        case 3:
            printf("Size of array is %d\n",stack.i);
            printf("\n");
            break;
        case 4:
            if(stack.isEmpty == 0){
                printf("The stack is empty.\n");
            }else if(stack.isEmpty == 1){
                printf("The stack is not empty.\n");
            }
            printf("\n");
            break;
        case 5:
            printf("\n");
            val = 0;
        default:
            printf("\n");
            break;
        }
    }
    return 0;
}
