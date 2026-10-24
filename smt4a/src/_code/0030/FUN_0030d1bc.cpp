/* NON_MATCHING: register allocation of the tail-copy loop (armcc keeps `last` in its own register and copies it for the loop) */
#include "common.h"

struct Elem32 {
    u8 bytes[32];
};

struct Vector32 {
    /* 0x00 */ Elem32 *first;
    /* 0x04 */ Elem32 *last;
    /* 0x08 */ Elem32 *capacityEnd;
};

extern "C" {

void FUN_0030c6e4(Elem32 *dest, const Elem32 *source);
void vectorDestroyRangeStride32(Vector32 *vector, Elem32 *from, Elem32 *to);

/* Empties the vector: erases the whole range [first, last). */
void FUN_0030d1bc(Vector32 *vector)
{
    Elem32 *first = vector->first;
    Elem32 *last = vector->last;

    if (first != last) {
        Elem32 *dest = first;

        Elem32 *end = vector->last;
        Elem32 *source = last;
        while (source != end) {
            FUN_0030c6e4(dest, source);
            ++source;
            ++dest;
        }
        vectorDestroyRangeStride32(vector, dest, vector->last);
        vector->last -= last - first;
    }
}

} /* extern "C" */
