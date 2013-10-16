#ifndef QUEUE_H
#define QUEUE_H

typedef struct{
        int front, rear;
        int *data;
        int capacity;
} queue_t;

int queue_init(queue_t *q, int capacity);

int queue_enqueue(queue_t *q, int v);
int queue_dequeue(queue_t *q, int *v);
int queue_len(const queue_t *q);

#endif /* QUEUE_H */

