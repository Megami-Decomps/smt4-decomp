/* NON_MATCHING: register allocation of the tail-copy loop (armcc keeps `last` in its own register and copies it for the loop) */
#include "common.h"

struct Elem12 {
    u8 bytes[12];
};

struct Vector12 {
    /* 0x00 */ Elem12 *first;
    /* 0x04 */ Elem12 *last;
    /* 0x08 */ Elem12 *capacityEnd;
};

extern "C" {

void FUN_00303a3a(Elem12 *dest, const Elem12 *source);
void destroyRangeElem12(Vector12 *vector, Elem12 *from, Elem12 *to);

/* Empties the vector: erases the whole range [first, last). */
void _ZNSt6vectorIS_I9Obj55a87c12AsdAllocatorIS0_EES1_IS3_EE5clearEv(Vector12 *vector)
{
    Elem12 *first = vector->first;
    Elem12 *last = vector->last;

    if (first != last) {
        Elem12 *dest = first;

        Elem12 *end = vector->last;
        Elem12 *source = last;
        while (source != end) {
            FUN_00303a3a(dest, source);
            ++source;
            ++dest;
        }
        destroyRangeElem12(vector, dest, vector->last);
        vector->last -= last - first;
    }
}

} /* extern "C" */
