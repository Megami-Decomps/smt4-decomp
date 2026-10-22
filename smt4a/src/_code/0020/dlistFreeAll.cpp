#include "common.h"

extern "C" {

typedef struct DListNode {
    /* 0x00 */ s32 index;
    /* 0x04 */ u8 unk04[4];
    /* 0x08 */ void *data;
    /* 0x0C */ u8 unk0C[4];
    /* 0x10 */ void (*destroy)(void *data);
    /* 0x14 */ struct DListNode *prev;
    /* 0x18 */ struct DListNode *next;
} DListNode;

typedef struct DList {
    /* 0x00 */ DListNode *head;
    /* 0x04 */ DListNode *tail;
    /* 0x08 */ s32 count;
} DList;

void asdMemFree(void *memory);

/* Unlink a node and renumber the remaining nodes. */
static void dlistUnlink(DList *list, DListNode *node)
{
    DListNode *prev;
    DListNode *next;
    DListNode *it;
    s32 count;

    if (list == NULL || node == NULL) {
        return;
    }
    prev = node->prev;
    next = node->next;
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
    count = 0;
    for (it = list->head; it != NULL; it = it->next) {
        it->index = count++;
    }
    list->count = count;
}

/* Unlink and free every node of the list, calling each node's destroy callback on its data. */
void dlistFreeAll(DList *list)
{
    DListNode *node = list->head;

    while (node != NULL) {
        DListNode *next = node->next;

        dlistUnlink(list, node);
        if (node->destroy != NULL) {
            node->destroy(node->data);
        }
        asdMemFree(node);
        node = next;
    }
}

} /* extern "C" */
