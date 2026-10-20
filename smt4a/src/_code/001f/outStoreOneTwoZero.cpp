#include "common.h"

extern "C" {

/* Stores 1, 2 and 0 through the three pointers and returns 0. */
u32 outStoreOneTwoZero(u32 *a, u32 *b, u32 *c)
{
    *a = 1;
    *b = 2;
    *c = 0;
    return 0;
}

} /* extern "C" */
