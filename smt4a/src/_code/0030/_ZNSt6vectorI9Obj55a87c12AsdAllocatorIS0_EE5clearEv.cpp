/* NON_MATCHING: register allocation of the tail-copy loop (armcc keeps `last` in its own register and copies it for the loop) */
#include "common.h"

struct Elem40 {
    u8 bytes[40];
};

struct Vector40 {
    /* 0x00 */ Elem40 *first;
    /* 0x04 */ Elem40 *last;
    /* 0x08 */ Elem40 *capacityEnd;
};

extern "C" {

void FUN_00307aba(Elem40 *dest, const Elem40 *source);
void destroyRangeElem40(Vector40 *vector, Elem40 *from, Elem40 *to);

/* Empties the vector: erases the whole range [first, last). */
void _ZNSt6vectorI9Obj55a87c12AsdAllocatorIS0_EE5clearEv(Vector40 *vector)
{
    Elem40 *first = vector->first;
    Elem40 *last = vector->last;

    if (first != last) {
        Elem40 *dest = first;

        Elem40 *end = vector->last;
        Elem40 *source = last;
        while (source != end) {
            FUN_00307aba(dest, source);
            ++source;
            ++dest;
        }
        destroyRangeElem40(vector, dest, vector->last);
        vector->last -= last - first;
    }
}

} /* extern "C" */
