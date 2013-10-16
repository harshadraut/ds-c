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

