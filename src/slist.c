#include<stdlib.h>
#include"slist.h"

void sl_list_init(sl_list *list)
{
        list->len = 0;
        list->next = NULL;
}

int sl_list_ins_begin(sl_list *list, int value)
{
        return sl_list_ins(list, value, 0);
}

int sl_list_ins_end(sl_list *list, int value)
{
        return sl_list_ins(list, value, list->len);
}

int sl_list_ins(sl_list *list, int value, int index)
{
        sl_node *node, *ptr;
        node = malloc(sizeof (sl_node));
        if (node == NULL || list == NULL) {
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

int sl_list_at(sl_list *list, int index, int *value)
{
        int i;
        sl_node *ptr;
        for (i = 0, ptr = list->next; i < list->len && ptr != NULL;
                i++, ptr = ptr->next) {
                if (i == index) {
                        *value = ptr->data;
                        return 0;
                }
        }
        return -1;
}
