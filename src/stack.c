#include"stack.h"

void stack_init(stack_t *s)
{
        s->top = -1;
        s->capacity = 10;
        s->data = calloc(s->capacity, sizeof(int));
}

int stack_push(stack_t *s, int x)
{
        if( s->capacity - s->top > 1 ){
                s->top++;
                s->data[s->top] = x;
                return 0;
        }else{
                return -1;
        }
}

int stack_pop(stack_t *s)
{
        if( s->top >= 0 ){
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

