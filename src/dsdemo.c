/*
 * File:   dedemo.c
 * Author: saimanoj
 *
 * Created on 12 August, 2013, 7:04 PM
 */

#include <stdio.h>
#include <stdlib.h>
#include"ds.h"

int stack_demo()
{
        printf("Stack Demo\n");
        stack_t *s;
        s = malloc(sizeof(stack_t));
        int n = 10;
        if( stack_init(s, n, sizeof(int)) == 0 ){
                printf("Stack Initialized\n");
        }else{
                printf("Stack Initialization Failed\n");
        }

        int i;

        for(i = 1; i <= n; i++){
                if( 0 == stack_push(s, &i) ){
                        printf("Pushed %d onto stack\n", i);
                        printf("Length of stack: %d\n", stack_len(s));
                }else{
                        printf("Unable to push %d\n", i);
                }
        }

        for(i = 1; i <= n; i++){
                int value;
                if ( stack_pop(s, &value) == 0 ){
                        printf("Popped %d from stack\n", value);
                        printf("Length of stack: %d\n", stack_len(s));
                }else{
                        printf("Unable to pop\n");
                }

        }
        free(s);
        s = NULL;
        return 0;
}


int queue_demo()
{
        printf("Queue Demo\n");
        queue_t *q;
        q = malloc(sizeof(queue_t));
        if( queue_init(q, 10) == 0 ){
                printf("Queue Initialized\n");
        }else{
                printf("Queue Initialization Failed\n");
        }

        int i;

        for(i = 1; i <= 10; i++){
                if( 0 == queue_enqueue(q, i) ){
                        printf("Enqueued %d onto Queue\n", i);
                        printf("Length of Queue: %d\n", queue_len(q));
                }else{
                        printf("Unable to Enquque %d\n", i);
                }
        }

        for(i = 1; i <= 10; i++){
                int value;
                if ( queue_dequeue(q, &value) == 0 ){
                        printf("Dequeued %d from Queue\n", value);
                        printf("Length of Queue: %d\n", queue_len(q));
                }else{
                        printf("Unable to Dequeue\n");
                }

        }
        free(q);
        q = NULL;
        return 0;

}


int main(int argc, char** argv) {
        printf("DS Demo\n");
        if ( stack_demo() == 0 && queue_demo() == 0 )
                return (EXIT_SUCCESS);
}

