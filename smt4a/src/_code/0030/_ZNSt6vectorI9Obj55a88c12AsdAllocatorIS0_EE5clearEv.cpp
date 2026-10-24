/* NON_MATCHING: register allocation of the tail-copy loop (armcc keeps `last` in its own register and copies it for the loop) */
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

void FUN_0030c884(Elem24 *dest, const Elem24 *source);
void destroyRangeElem24(Vector24 *vector, Elem24 *from, Elem24 *to);

/* Empties the vector: erases the whole range [first, last). */
void _ZNSt6vectorI9Obj55a88c12AsdAllocatorIS0_EE5clearEv(Vector24 *vector)
{
    Elem24 *first = vector->first;
    Elem24 *last = vector->last;

    if (first != last) {
        Elem24 *dest = first;

        Elem24 *end = vector->last;
        Elem24 *source = last;
        while (source != end) {
            FUN_0030c884(dest, source);
            ++source;
            ++dest;
        }
        destroyRangeElem24(vector, dest, vector->last);
        vector->last -= last - first;
    }
}

} /* extern "C" */
