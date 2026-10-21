#include "common.h"

extern "C" {

/* Packs `a` with `b` shifted into bits 4+ and `c` into bits 8+. */
u32 packThreeNibbles(u32 a, int b, int c)
{
    return a | (b << 4) | (c << 8);
}

} /* extern "C" */
