#ifndef STACK_H
#define	STACK_H

typedef struct {
        int top;
        void *data;
        int capacity;
        size_t ele_size;
} stack_t;

int stack_init(stack_t *s, int capacity, size_t ele_size);

int stack_push(stack_t *s, void *x);
int stack_pop(stack_t *s, void *value);

int stack_len(const stack_t *s);
int stack_top(stack_t *s, void *value);

int stack_destroy(stack_t *s);
int stack_clear(stack_t *s);

int stack_resize(stack_t *s, int capacity);
#endif	/* STACK_H */
