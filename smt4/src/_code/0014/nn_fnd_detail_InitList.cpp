#include "common.h"

extern "C" {

/* Intrusive list: each object holds an ObjectLink at `nodeOffset`. */
typedef struct ObjectLink {
    /* 0x0 */ void *prev;
    /* 0x4 */ void *next;
} ObjectLink;

typedef struct ObjectList {
    /* 0x0 */ void *head;
    /* 0x4 */ void *tail;
    /* 0x8 */ u16 count;
    /* 0xA */ u16 nodeOffset;
} ObjectList;

void nn_fnd_detail_InitList(ObjectList *list, u16 nodeOffset)
{
    list->nodeOffset = nodeOffset;
    list->head = NULL;
    list->tail = NULL;
    list->count = 0;
}

} /* extern "C" */
