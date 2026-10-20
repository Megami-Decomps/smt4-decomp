/* NON_MATCHING: the empty element-walk loop compares (end, p) instead of (p, end). */
#include "common.h"

extern "C" {

typedef struct ByteVector {
    /* 0x00 */ u8 *begin;
    /* 0x04 */ u8 *end;
} ByteVector;

int rangeIsEmpty(ByteVector *vec);
u8 *FUN_00310d38(u8 *first, u8 *last, u8 *dest);

/* Erases [first, last) from the vector: moves the tail down, walks the vacated elements, shrinks end. Returns first. */
u8 *byteVectorErase(ByteVector *vec, u8 *first, u8 *last)
{
    if (rangeIsEmpty(vec) == 0) {
        u8 *newEnd = FUN_00310d38(last, vec->end, first);

        for (u8 *p = newEnd; p != vec->end; p++) {
        }
        vec->end -= last - first;
    }
    return first;
}

} /* extern "C" */
