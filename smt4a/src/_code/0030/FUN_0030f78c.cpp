#include "common.h"

extern "C" {

typedef struct Vec0030f78c {
    u8 unk00[0x38];
    s32 *begin;                    /* 0x38 */
    s32 *end;                      /* 0x3C */
} Vec0030f78c;

typedef struct Owner0030f78c {
    u8 unk00[0xc];
    Vec0030f78c *vec;              /* 0x0C */
} Owner0030f78c;

/* Number of elements between the vector's begin and end pointers. */
int FUN_0030f78c(Owner0030f78c *owner)
{
    Vec0030f78c *vec = owner->vec;

    return vec->end - vec->begin;
}

} /* extern "C" */
