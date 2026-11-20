/* NON_MATCHING: only one scratch register differs on the list-index multiply (retail `add r1, r7, r7, lsl #1; add r0, r8, r1, lsl #2` vs built `r0`/`r0`). */
#include <vector>
#include "common.h"
#include "AsdSDK/AsdMemUtil.h"
#include "AsdSDK/AsdMemAlloc.h"

struct Owned406a1c {
    virtual ~Owned406a1c();
};

struct Item406a1c {};

struct Obj406a1c {
    u8 unk00[4];
    u32 flags;
    Owned406a1c *owned;
    void *buffer;
    u8 unk10[0xec];
    u8 *array;
    u8 unk100[0x14];
    std::vector<Item406a1c *> lists[8];
};

extern "C" {
void asdOperatorDeleteB(void *block);

/* Releases the object: frees the pointers held by each of its eight lists, the counted array, the owned object and the buffer. */
void FUN_00406a1c(Obj406a1c *obj)
{
    for (s32 i = 0; i < 8; i++) {
        std::vector<Item406a1c *> &list = obj->lists[i];
        std::vector<Item406a1c *>::iterator end = list.end();
        for (std::vector<Item406a1c *>::iterator it = list.begin(); it != end; ++it) {
            if (*it != NULL) {
                asdOperatorDelete(*it);
            }
        }
        list.clear();
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
} /* extern "C" */
