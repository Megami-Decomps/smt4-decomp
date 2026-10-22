/* NON_MATCHING: one instruction scheduled differently: retail adds the 1 of the negative-index adjustment before adding the count, ahead of the head load */
#include "common.h"

extern "C" {

typedef struct AsdListNode AsdListNode;

struct AsdListNode {
    /* 0x00 */ s32 index;
    /* 0x04 */ u8 unk04[0x10];
    /* 0x14 */ AsdListNode *prev;
    /* 0x18 */ AsdListNode *next;
};

typedef struct AsdList {
    /* 0x00 */ AsdListNode *head;
    /* 0x04 */ AsdListNode *tail;
    /* 0x08 */ s32 count;
} AsdList;

/* Returns the node at position `index`, or NULL. */
static AsdListNode *asdListFind(AsdList *list, s32 index)
{
    AsdListNode *at;

    for (at = list->head; at != NULL; at = at->next) {
        if (at->index == index) {
            return at;
        }
    }
    return NULL;
}

/* Inserts a node before position `index` (negative counts from the end, -1 or past the end appends), then renumbers the list. */
s32 asdListInsert(AsdList *list, AsdListNode *node, s32 index)
{
    AsdListNode *at;
    AsdListNode *prev;
    s32 count;

    if (list == NULL) {
        return 0;
    }
    if (node == NULL) {
        return 0;
    }
    count = list->count;
    if (count <= 0) {
        list->head = node;
        list->tail = node;
    } else if (index >= count || index == -1) {
        at = list->tail;
        at->next = node;
        node->prev = at;
        list->tail = node;
    } else if (index == 0 || index <= -count) {
        at = list->head;
        at->prev = node;
        node->next = at;
        list->head = node;
    } else {
        if (index < 0) {
            index += count + 1;
        }
        at = asdListFind(list, index);
        prev = at->prev;
        if (prev != NULL) {
            node->prev = prev;
            prev->next = node;
        } else {
            node->prev = NULL;
            list->head = node;
        }
        node->next = at;
        at->prev = node;
    }
    count = 0;
    for (at = list->head; at != NULL; at = at->next) {
        at->index = count;
        count++;
    }
    list->count = count;
    return 1;
}

} /* extern "C" */
