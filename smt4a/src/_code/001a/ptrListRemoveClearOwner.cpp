/* NON_MATCHING: retail loads begin/end with ldrd and its unrolled shift loop also guards on next < end; built uses ldm and a plain count loop */
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

/* Removes `*it` from the vector, shifting the later elements down. */
static void ptrVectorErase(PtrVector *vec, PtrListItem **it)
{
    if (vec->begin != vec->end) {
        PtrListItem **next = it + 1;

        if (next != vec->end) {
            s32 count = vec->end - next;

            for (s32 i = 0; i < count; i++) {
                it[i] = next[i];
            }
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
