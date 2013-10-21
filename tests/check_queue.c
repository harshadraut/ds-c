#include"../src/queue.h"


int main()
{
        queue_t q;
        if( queue_init(&q, 10) == 0 ){
//                printf("Queue Initialized\n");
        }else{
                printf("Queue Initialization Failed\n");
                return -1;
        }

        int i;

        for(i = 1; i <= 10; i++){
                if( 0 == queue_enqueue(&q, i) ){
//                        printf("Enqueued %d onto queue\n", i);
//                        printf("Length of Queue: %d\n", queue_len(&q));
//                        printf("%d is rear of the queue\n", q.data[q.rear - 1 >=0? q.rear-1 : q.rear + q.capacity]);
                }else{
                        printf("Unable to enqueue %d\n", i);
                }

        }

        for(i = 1; i <= 10; i++){
                int value;
                if ( queue_dequeue(&q, &value) == 0 ){
//                        printf("Dequeued %d from queue\n", value);
//                        printf("Length of Queue: %d\n", queue_len(&q));
                }else{
                        printf("Unable to dequeue\n");
                }
        }
/*
        queue_destroy(&q);
        queue_reinit(&q, 20);
        queue_destroy(&q);
*/
        return 0;
}

