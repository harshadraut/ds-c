#ifndef STACK_H
#define	STACK_H

typedef struct{
        int top;
        int *data;
        int capacity;
}stack_t;

int stack_init(stack_t *s, int capacity);

int stack_push(stack_t *s, int x);
int stack_pop(stack_t *s, int *value);

int stack_len(const stack_t *s);

int stack_destroy(stack_t *s);
int stack_clear(stack_t *s);

int stack_resize(stack_t *s, int capacity);
#endif	/* STACK_H */

