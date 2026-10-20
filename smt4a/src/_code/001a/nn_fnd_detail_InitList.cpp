#include "common.h"

extern "C" {

typedef struct List {
    /* 0x00 */ u32 first;
    /* 0x04 */ u32 last;
    /* 0x08 */ u16 count;
    /* 0x0A */ u16 offset;         /* offset of the link inside each object */
} List;

/* Empties the list and records the link offset. */
void nn_fnd_detail_InitList(List *list, u16 offset)
{
    list->offset = offset;
    list->first = 0;
    list->last = 0;
    list->count = 0;
}

} /* extern "C" */
