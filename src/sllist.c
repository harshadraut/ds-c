#include<stdlib.h>
#include"sllist.h"

void sllist_init(sllist *list)
{
        list->len = 0;
        list->next = NULL;
}

int sllist_insbegin(sllist *list, int value)
{
        return sllist_ins(list, value, 0);
}

int sllist_insend(sllist *list, int value)
{
        return sllist_ins(list, value, list->len);
}

int sllist_ins(sllist *list, int value, int index)
{
        if( list == NULL ){
                return -1;
        }
        sllnode *node, *ptr;
        node = malloc(sizeof (sllnode));
        if (node == NULL) {
                return -1;
        }
        node->data = value;
        int i = 0;
        ptr = list;
        while (i < index && ptr->next != NULL) {
                i++;
                ptr = ptr->next;
        }
        if (ptr->next != NULL) {
                node->next = ptr->next;
        } else {
                node->next = NULL;
        }
        ptr->next = node;
        list->len++;
        return 0;
}

int sllist_at(sllist *list, int index, int *value)
{
        int i;
        sllnode *ptr;
        for (i = 0, ptr = list->next; i < list->len && ptr != NULL;
                i++, ptr = ptr->next) {
                if (i == index) {
                        *value = ptr->data;
                        return 0;
                }
        }
        return -1;
}
