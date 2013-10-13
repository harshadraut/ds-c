#include"stack.h"

void stack_init(stack_t *s, int capacity)
{
        s->top = -1;
        s->capacity = capacity;
        s->data = calloc(s->capacity, sizeof(int));
}

int stack_push(stack_t *s, int x)
{
        if( stack_len(s) < s->capacity ){
                s->top++;
                s->data[s->top] = x;
                return 0;
        }else{
                return -1;
        }
}

int stack_pop(stack_t *s)
{
        if( stack_len(s) > 0 ){
                int value = s->data[s->top];
                s->top--;
                return value;
        }
}

int stack_len(const stack_t *s)
{
/* Stack length is the number of elements currently in the stack
 */
        return s->top + 1;
}

