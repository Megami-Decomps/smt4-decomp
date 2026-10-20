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

/* Returns the list head when `object` is NULL, otherwise the object after it. */
void *nn_fnd_detail_GetNextListObject(ObjectList *list, u8 *object)
{
    void *next;

    if (object == NULL) {
        next = list->head;
    } else {
        next = ((ObjectLink *)(object + list->nodeOffset))->next;
    }
    return next;
}

} /* extern "C" */
