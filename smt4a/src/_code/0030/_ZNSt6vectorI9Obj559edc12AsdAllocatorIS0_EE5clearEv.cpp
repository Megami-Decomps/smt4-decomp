/* NON_MATCHING: register allocation of the tail-copy loop (armcc keeps `last` in its own register and copies it for the loop) */
#include "common.h"

struct Elem184 {
    u8 bytes[184];
};

struct Vector184 {
    /* 0x00 */ Elem184 *first;
    /* 0x04 */ Elem184 *last;
    /* 0x08 */ Elem184 *capacityEnd;
};

extern "C" {

void FUN_00307c4a(Elem184 *dest, const Elem184 *source);
void vectorDestroyRangeStride184(Vector184 *vector, Elem184 *from, Elem184 *to);

/* Empties the vector: erases the whole range [first, last). */
void _ZNSt6vectorI9Obj559edc12AsdAllocatorIS0_EE5clearEv(Vector184 *vector)
{
    Elem184 *first = vector->first;
    Elem184 *last = vector->last;

    if (first != last) {
        Elem184 *dest = first;

        Elem184 *end = vector->last;
        Elem184 *source = last;
        while (source != end) {
            FUN_00307c4a(dest, source);
            ++source;
            ++dest;
        }
        vectorDestroyRangeStride184(vector, dest, vector->last);
        vector->last -= last - first;
    }
}

} /* extern "C" */
