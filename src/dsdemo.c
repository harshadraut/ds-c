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
        stack_init(s, 10);
        int i;

        for(i = 1; i <= 10; i++){
                if( 0 == stack_push(s, i) ){
                        printf("Pushed %d onto stack\n", i);
                        printf("Length of stack: %d\n", stack_len(s));
                }
        }

        for(i = 1; i <= 10; i++){
                printf("Popped %d from stack\n", stack_pop(s));
                printf("Length of stack: %d\n", stack_len(s));
        }
        free(s);
        return (EXIT_SUCCESS);
}

