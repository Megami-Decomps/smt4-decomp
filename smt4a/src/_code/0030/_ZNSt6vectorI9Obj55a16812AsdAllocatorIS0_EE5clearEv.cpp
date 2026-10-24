/* NON_MATCHING: retail keeps `last` in a stack slot (28-byte frame, iterator object); we keep it in a register */
#include "common.h"

struct Elem24 {
    u8 bytes[24];
};

struct Vector24 {
    /* 0x00 */ Elem24 *first;
    /* 0x04 */ Elem24 *last;
    /* 0x08 */ Elem24 *capacityEnd;
};

extern "C" {

s32 rangeIsEmpty5(Vector24 *vector);
void FUN_00307b78(Elem24 *dest, const Elem24 *source);
void vectorDestroyRangeStride24(Vector24 *vector, Elem24 *from, Elem24 *to);

/* Empties the vector: erases the whole range [first, last) unless it is already empty. */
void _ZNSt6vectorI9Obj55a16812AsdAllocatorIS0_EE5clearEv(Vector24 *vector)
{
    Elem24 *first = vector->first;
    Elem24 *last = vector->last;

    if (!rangeIsEmpty5(vector)) {
        Elem24 *end = vector->last;
        Elem24 *dest = first;

        for (Elem24 *source = last; source != end; ++source) {
            FUN_00307b78(dest, source);
            ++dest;
        }
        vectorDestroyRangeStride24(vector, dest, vector->last);
        vector->last -= last - first;
    }
}

} /* extern "C" */
