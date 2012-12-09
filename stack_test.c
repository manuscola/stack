#include "stack.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int test_stack()
{
    int data_array[10] = {0};
    struct Stack stack;
    int i = 0;

    int ret = stack_init(&stack);
    if(ret  < 0)
    {
        fprintf(stderr,"stack init failed\n");
    }

    srand(time(NULL));
    for(i = 0;i<10;i++)
    {
        data_array[i] = rand()%100;
        printf("%d\t",data_array[i]);
        stack_push(&stack,&data_array[i]);
    }
    fprintf(stdout,"\n");

    while(stack_empty(&stack) == 0)
    {
        int *p = (int *)stack_pop(&stack);
        fprintf(stdout,"%d\t",*p);
    }
    fprintf(stdout,"\n");

    return 0;
}
int main()
{
    test_stack();
    return 0;
}
