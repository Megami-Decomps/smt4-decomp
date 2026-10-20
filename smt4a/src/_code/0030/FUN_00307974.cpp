#include "common.h"

extern "C" {

typedef struct Elem {
    u32 w0;
    u32 w1;
    u32 w2;
} Elem;                         /* 12 bytes */

typedef struct Vector {
    /* 0x00 */ Elem *begin;
    /* 0x04 */ Elem *capacity;
    /* 0x08 */ Elem *end;
} Vector;

/* Element divide through the runtime helper (quotient in r0). */
int __aeabi_idivmod(int numerator, int denominator);

/* Returns the number of elements: the byte distance from begin to end divided by sizeof(Elem) = 12. */
int FUN_00307974(Vector *vec)
{
    return __aeabi_idivmod((u8 *)vec->end - (u8 *)vec->begin, sizeof(Elem));
}

} /* extern "C" */
