#include "common.h"

extern "C" {

typedef struct Elem {
    u32 w0;
    u32 w1;
    u32 w2;
    u32 w3;
    u32 w4;
    u32 w5;
} Elem;                         /* 24 bytes */

typedef struct Vector {
    /* 0x00 */ Elem *begin;
    /* 0x04 */ Elem *end;
} Vector;

/* Element divide through the runtime helper (quotient in r0). */
int __aeabi_idivmod(int numerator, int denominator);

/* Returns the number of elements: the byte distance from begin to end divided by sizeof(Elem) = 24. */
int FUN_0030c8c0(Vector *vec)
{
    return __aeabi_idivmod((u8 *)vec->end - (u8 *)vec->begin, sizeof(Elem));
}

} /* extern "C" */
