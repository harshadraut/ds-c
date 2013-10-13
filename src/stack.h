#ifndef STACK_H
#define	STACK_H

typedef struct{
        int top;
        int *data;
        int capacity;
}stack_t;

void stack_init(stack_t *s, int capacity);

int stack_push(stack_t *s, int x);
int stack_pop(stack_t *s);

int stack_len(const stack_t *s);
#endif	/* STACK_H */

