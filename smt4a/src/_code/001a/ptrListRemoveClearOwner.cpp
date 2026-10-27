/* NON_MATCHING: loop structure and row count match retail; remaining: retail loads begin/end with ldrd straight from the list and reaches the vector through `ldr r3, [r0, #24]!` (armcc here shares one `list + 24` base), and the erase compares begin before end. */
#include "common.h"

extern "C" {

typedef struct PtrListItem {
    u8 unk0[0x268];
    void *owner; /* 0x268 */
} PtrListItem;

typedef struct {
    PtrListItem **begin; /* 0x0 */
    PtrListItem **end;   /* 0x4 */
} PtrVector;

typedef struct {
    u8 unk0[0x18];
    PtrVector items;     /* 0x18 */
} PtrList;

static void ptrCopy(PtrListItem **first, PtrListItem **last, PtrListItem **result)
{
    for (s32 i = 0; i < last - first; i++) {
        result[i] = first[i];
    }
}

/* Removes `*it` from the vector, shifting the later elements down. */
static __inline void ptrVectorErase(PtrVector *vec, PtrListItem **it)
{
    if (vec->end != vec->begin) {
        PtrListItem **next = it + 1;

        if (next != vec->end) {
            ptrCopy(next, vec->end, it);
        }
        vec->end--;
    }
}

/* Removes `item` from the list and clears its owner link. */
void ptrListRemoveClearOwner(PtrList *list, PtrListItem *item)
{
    PtrListItem **it;

    for (it = list->items.begin; it != list->items.end; it++) {
        if (*it == item) {
            item->owner = NULL;
            ptrVectorErase(&list->items, it);
            return;
        }
    }
}

} /* extern "C" */
