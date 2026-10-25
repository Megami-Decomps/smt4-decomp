/* A doubly linked list whose nodes carry their index, a payload and a destroy callback. */
#ifndef SHARD_W4_W4MATCH2_INDEXEDLIST_H
#define SHARD_W4_W4MATCH2_INDEXEDLIST_H

#include "common.h"
#include <stddef.h>

typedef void (*IndexedNodeDestroy)(void *payload);

typedef struct IndexedNode {
    /* 0x00 */ s32 index;                 /* position in the list */
    /* 0x04 */ u8 unk04[4];
    /* 0x08 */ void *payload;
    /* 0x0C */ u8 unk0C[4];
    /* 0x10 */ IndexedNodeDestroy destroy; /* called with the payload before the node is freed */
    /* 0x14 */ struct IndexedNode *prev;
    /* 0x18 */ struct IndexedNode *next;
} IndexedNode;

typedef struct IndexedList {
    /* 0x00 */ IndexedNode *head;
    /* 0x04 */ IndexedNode *tail;
    /* 0x08 */ s32 count;
} IndexedList;

typedef char IndexedNodeLayoutCheck[
    offsetof(IndexedNode, payload) == 8 && offsetof(IndexedNode, destroy) == 0x10 &&
    offsetof(IndexedNode, prev) == 0x14 && offsetof(IndexedNode, next) == 0x18 &&
    sizeof(IndexedNode) == 0x1c && sizeof(IndexedList) == 0xc ? 1 : -1];


/* Detach a node and restore the contiguous list indices. */
static inline void indexedListUnlink(IndexedList *list, IndexedNode *node)
{
    if (list != NULL && node != NULL) {
        IndexedNode *next = node->next;
        IndexedNode *prev = node->prev;
        IndexedNode *walk;
        s32 index;

        if (prev == NULL && next == NULL) {
            list->head = NULL;
            list->tail = NULL;
        } else {
            if (prev != NULL) {
                prev->next = next;
            } else {
                next->prev = NULL;
                list->head = next;
            }
            if (next != NULL) {
                next->prev = prev;
            } else {
                prev->next = NULL;
                list->tail = prev;
            }
        }
        index = 0;
        for (walk = list->head; walk != NULL; walk = walk->next) {
            walk->index = index;
            index++;
        }
        list->count = index;
    }
}
#endif
