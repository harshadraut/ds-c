#include"../src/stack.h"


int main()
{
        stack_t s;
        stack_init(&s, 10);
        int i;

        for(i = 1; i <= 10; i++){
                if( 0 == stack_push(&s, i) ){
                        printf("Pushed %d onto stack\n", i);
                        printf("Length of stack: %d\n", stack_len(&s));
                        printf("%d is on the stack\n", s.data[s.top]);
                }else{
                        printf("Unable to push %d\n", i);
                }

        }

        for(i = 1; i <= 10; i++){
                printf("Popped %d from stack\n", stack_pop(&s));
                printf("Length of stack: %d\n", stack_len(&s));
        }

        return 0;
}

