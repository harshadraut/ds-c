#include<stdlib.h>
#include<string.h>  /* For memcpy */
#include"stack.h"

int stack_init(stack_t *s, int capacity, size_t ele_size)
{
        /*  Initializes the stack with the given capacity
         *  @param s: Pointer to stack_t type variable
         *  @param capacity: capacity of the stack to be created
         *  Returns : Zero if succesful in allocating memory to the stack,
         *              -1 Otherwise
         */
        s->top = -1;
        s->capacity = capacity;
        s->ele_size = ele_size;
        s->data = calloc(s->capacity, s->ele_size);
        if (s-> data != NULL || s->capacity == 0) {
                return 0;
        } else {
                return -1;
        }
}

int stack_push(stack_t *s, void *x)
{
        /*  Pushes an element on to the stack
         *  @param s: Pointer to stack_t type variable
         *  @param x: Value to Push on to the stack
         *  Returns : Zero if stack is not full when stack_push() is called,
         *              -1 Otherwise
         */
        if (stack_len(s) < s->capacity) {
                s->top++;
                memcpy(s->data + s->ele_size * s->top, x, s->ele_size);
                return 0;
        } else {
                return -1;
        }
}

int stack_pop(stack_t *s, void *value)
{
        /*  Value that is popped from the stack is placed in value parameter,
         *  @param s: Pointer to stack_t type variable
         *  @param x: Pointer to a variable to store the value popped from the stack
         *  Returns:  Zero if stack is not empty when stack_pop() is called,
         *              -1 Otherwise
         */
        if (stack_len(s) > 0) {
                memcpy(value, s->data + s->ele_size * s->top, s->ele_size);
                s->top--;
                return 0;
        } else {
                return -1;
        }
}

int stack_len(const stack_t *s)
{
        /*  Stack length is the number of elements currently in the stack
         *  @param s: Pointer to stack_t type variable
         *  Returns : Length of the stack
         */
        return s->top + 1;
}

int stack_destroy(stack_t *s)
{
        free(s->data);
        s->data = NULL;
        return 0;
}

int stack_clear(stack_t *s)
{
        s->top = -1;
        return 0;
}

int stack_resize(stack_t *s, int capacity)
{
        if (capacity < s->capacity) {
                s->top = capacity - 1;
        }
        s->capacity = capacity;
        s->data = realloc(s->data, s->capacity * s->ele_size);
        if (s-> data != NULL || s->capacity == 0) {
                return 0;
        } else {
                return -1;
        }
}

void stack_top(stack_t *s, void *value)
{
        memcpy(value, s->data + s->ele_size * s->top, s->ele_size);
}
