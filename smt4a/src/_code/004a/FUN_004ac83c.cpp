/* NON_MATCHING: same calls and flow (101 vs 100 rows); registers now agree for `holder` (r4) but retail keeps the vector math in r1/r2/r3 differently (it also keeps -16 in r2 across the assignment), and keeps &holder->spare in r5 for the erase calls (the erase is written as erase(first, first + 1) with the new size taken before the shift). */
#include "classes/MarkerRef.h"

struct MarkerRefVector;

extern "C" {
void FUN_00521d90(MarkerRef *to, MarkerRef *from, s32 count);
void FUN_00521d14(MarkerRefVector *vector, s32 first, s32 last);
}

/* The vector of spare marker handles (observed prefix of the container object). */
struct MarkerRefVector {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ MarkerRef *begin;
    /* 0x08 */ u32 unk08;
    /* 0x0C */ s32 size;
};

/* An object that keeps a marker handle, with a pool of spare ones. */
struct MarkerHolder {
    /* 0x00 */ RefAllocator *allocator;
    /* 0x04 */ u8 unk04[0x18];
    /* 0x1C */ MarkerRefVector spare;
    /* 0x2C */ u8 unk2c[0x18];
    /* 0x44 */ MarkerRef marker;
};

extern "C" {

/* Makes sure the holder has a marker: takes the last spare handle (removing it from the pool) or
 * allocates a new marker, and clears it. Returns whether it has one. */
s32 FUN_004ac83c(MarkerHolder *holder)
{
    if (holder->marker.object == NULL) {
        if (holder->spare.size != 0) {
            holder->marker = holder->spare.begin[holder->spare.size - 1];
            {
                /* Erase the last spare: shift the ones after it down (none), destroy the last one. */
                MarkerRef *first = &holder->spare.begin[holder->spare.size - 1];
                MarkerRef *last = first + 1;
                s32 firstIndex = first - holder->spare.begin;
                s32 lastIndex = last - holder->spare.begin;
                s32 newSize = holder->spare.size - (last - first);
                FUN_00521d90(&holder->spare.begin[firstIndex], &holder->spare.begin[lastIndex], holder->spare.size - lastIndex);
                FUN_00521d14(&holder->spare, newSize, holder->spare.size);
                holder->spare.size = newSize;
            }
            holder->marker.object->unk08 = 0;
            holder->marker.object->unk0c = 0;
            holder->marker.object->ready = 0;
        } else {
            Marker *marker = static_cast<Marker *>(holder->allocator->allocate(0x18));
            if (marker != NULL) {
                marker->unk08 = 0;
                marker->unk0c = 0;
                marker->ready = 0;
            }
            holder->marker.reset(marker);
        }
        if (holder->marker.object == NULL) {
            return 0;
        }
    }
    return 1;
}

} /* extern "C" */
