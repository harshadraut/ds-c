/*
 * File:   dedemo.c
 * Author: saimanoj
 *
 * Created on 12 August, 2013, 7:04 PM
 */

#include <stdio.h>
#include <stdlib.h>
#include"ds.h"
#include"stack.h"


int main(int argc, char** argv) {

        printf("DS Demo\n");
        printf("Stack Demo\n");
        stack_t *s;
        s = malloc(sizeof(stack_t));
        if( stack_init(s, 10) == 0 ){
                printf("Stack Initialized\n");
        }else{
                printf("Stack Initialization Failed\n");
        }

        int i;

        for(i = 1; i <= 10; i++){
                if( 0 == stack_push(s, i) ){
                        printf("Pushed %d onto stack\n", i);
                        printf("Length of stack: %d\n", stack_len(s));
                }else{
                        printf("Unable to push %d\n", i);
                }
        }

        for(i = 1; i <= 10; i++){
                int value;
                if ( stack_pop(s, &value) == 0 ){
                        printf("Popped %d from stack\n", value);
                        printf("Length of stack: %d\n", stack_len(s));
                }else{
                        printf("Unable to pop\n");
                }

        }
        free(s);
        return (EXIT_SUCCESS);
}

