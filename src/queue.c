#include<stdlib.h>
#include"queue.h"

int queue_init(queue_t *q, int capacity)
{
        q->front = 0;
        q->rear = 0;
        q->capacity = capacity;
        q->data = calloc(q->capacity+1, sizeof(int));
        if( q->data != NULL || 0 == capacity ){
                return 0;
        }else{
                return -1;
        }
}

int queue_enqueue(queue_t *q, int v)
{
        if( queue_len(q) < q->capacity ){
                q->data[q->rear] = v;
                q->rear = ( q->rear + 1 ) % ( q->capacity + 1 );
                return 0;
        }
        return -1;
}

int queue_dequeue(queue_t *q, int *v)
{
        if( queue_len(q) > 0 ){
                *v = q->data[q->front];
                q->front = ( q->front + 1) % ( q->capacity + 1 );
                return 0;
        }
        return -1;
}

int queue_len(const queue_t *q)
{
        int len = q->rear - q->front;
        if( len >= 0 )
                return len;
        else
                return len + q->capacity + 1;
}

int queue_destroy(queue_t *q)
{
        free(q->data);
        q->data = NULL;
        return 0;
}

int queue_reinit(queue_t *q)
{
        q->front = 0;
        q->rear = 0;
        return 0;
}

int queue_resize(queue_t *q, int new_capacity)
{
/* For resizing queue, elements should be moved if they are wrapping around the end
 */
        int old_capacity = q->capacity;
        if( new_capacity < old_capacity ){
                return -1;
                /* Not Implemented Yet */
        }else if(new_capacity == old_capacity){
                return 0;
        }
        q->capacity = new_capacity;
        q->data = realloc(q->data, ( q->capacity + 1 ) * sizeof(int));
        if( q->front <= q->rear ){
                if( q->data != NULL || q->capacity == 0 ){
                        return 0;
                }else{
                        return -1;
                }
        }
        int i;
        for(i = 0; i < q->rear; i++){
                q->data[(old_capacity+i+1) % new_capacity] = q->data[i];
        }
        q->rear = (old_capacity + i + 1) % new_capacity;
}

