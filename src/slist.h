/* 
 * File:   slist.h
 * Author: saimanoj
 *
 * Created on 12 August, 2013, 7:02 PM
 */

#ifndef SLIST_H
#define	SLIST_H

typedef struct sl_node {
        int data;
        struct sl_node *next;
} sl_node;

typedef struct {
        unsigned len;
        sl_node *next;
} sl_list;

void sl_list_init(sl_list *list);
int sl_list_ins_begin(sl_list *list, int value);
int sl_list_ins(sl_list *list, int value, int index);
int sl_list_ins_end(sl_list *list, int value);
int sl_list_at(sl_list *list, int index, int *value);

#endif	/* SLIST_H */
