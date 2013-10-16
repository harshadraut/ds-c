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

int queue_destroy(queue_t *q);
int queue_reinit(queue_t *q);
int queue_resize(queue_t *q, int new_capacity);

#endif /* QUEUE_H */

