#include"../src/stack.h"


int main()
{
        stack_t s;
        if( stack_init(&s, 10) == 0 ){
                printf("Stack Initialized\n");
        }else{
                printf("Stack Initialization Failed\n");
        }

        int i;

        for(i = 1; i <= 10; i++){
                if( 0 == stack_push(&s, i) ){
                        printf("Pushed %d onto stack\n", i);
                        printf("Length of stack: %d\n", stack_len(&s));
                        printf("%d is top of the stack\n", s.data[s.top]);
                }else{
                        printf("Unable to push %d\n", i);
                }

        }

        for(i = 1; i <= 10; i++){
                int value;
                if ( stack_pop(&s, &value) == 0 ){
                        printf("Popped %d from stack\n", value);
                        printf("Length of stack: %d\n", stack_len(&s));
                }else{
                        printf("Unable to pop\n");
                }
        }
        stack_destroy(&s);
        stack_reinit(&s, 20);
        return 0;
}

