/* NON_MATCHING: same loops and calls; retail hoists the zero constant into r9 at entry and caches begin/end with ldrd; registers and schedule differ */
#include "common.h"

struct Owned406a1c {
    virtual ~Owned406a1c();
};

struct PointerVector406a1c {
    void **begin;
    void **end;
    void **capacityEnd;
};

struct Obj406a1c {
    u8 unk00[4];
    u32 flags;
    Owned406a1c *owned;
    void *buffer;
    u8 unk10[0xec];
    u8 *array;
    u8 unk100[0x14];
    PointerVector406a1c lists[8];
};

extern "C" {
int asdOperatorDelete(void *block);
void asdOperatorDeleteB(void *block);
int asdMemFree(void *block);

/* Releases the object: frees the pointers held by each of its eight lists, the counted array, the owned object and the buffer. */
void FUN_00406a1c(Obj406a1c *obj)
{
    for (s32 i = 0; i < 8; i++) {
        PointerVector406a1c *list = &obj->lists[i];
        void **last = list->end;
        for (void **entry = list->begin; entry != last; entry++) {
            if (*entry != NULL) {
                asdOperatorDelete(*entry);
            }
        }
        void **first = list->begin;
        void **end = list->end;
        if (first != end) {
            list->end = end - (end - first);
        }
    }
    if (obj->array != NULL) {
        asdOperatorDeleteB(obj->array - 8);
    }
    if (!(obj->flags & 1) && obj->owned != NULL) {
        delete obj->owned;
        obj->owned = NULL;
    }
    if (obj->buffer != NULL) {
        asdMemFree(obj->buffer);
        obj->buffer = NULL;
    }
}
}
