/* 
 * File:   slist.h
 * Author: saimanoj
 *
 * Created on 12 August, 2013, 7:02 PM
 */

#ifndef SLIST_H
#define	SLIST_H

typedef struct sllnode {
        int data;
        struct sllnode *next;
} sllnode;

typedef struct {
        unsigned len;
        sllnode *next;
} sllist;

void sllist_init(sllist *list);
int sllist_insbegin(sllist *list, int value);
int sllist_ins(sllist *list, int value, int index);
int sllist_insend(sllist *list, int value);
int sllist_at(sllist *list, int index, int *value);

#endif	/* SLIST_H */
