#include "common.h"

extern "C" {

typedef struct ListLink {
    /* 0x00 */ u32 prev;
    /* 0x04 */ u32 next;
} ListLink;

typedef struct List {
    /* 0x00 */ u32 first;
    /* 0x04 */ u32 last;
    /* 0x08 */ u16 count;
    /* 0x0A */ u16 offset;         /* offset of the link inside each object */
} List;

/* Returns the object after `object` (the list's first object when `object` is 0). */
u32 nn_fnd_detail_GetNextListObject(List *list, u8 *object)
{
    u32 next;

    if (object == NULL) {
        next = list->first;
    } else {
        next = ((ListLink *)(object + list->offset))->next;
    }
    return next;
}

} /* extern "C" */
