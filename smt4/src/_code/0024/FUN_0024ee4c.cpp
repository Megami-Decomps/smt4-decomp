/* NON_MATCHING: the three member copies reuse r2/r1 as temporaries; retail loads through r2, r3 and ip. */
#include "common.h"

extern "C" {

typedef struct Color {
    u32 head;
    u16 mid;
    u8 tail;
} Color;

/* Copy-assigns a 7-byte record. */
void FUN_0024ee4c(Color *dst, const Color *src)
{
    dst->head = src->head;
    dst->mid = src->mid;
    dst->tail = src->tail;
}

} /* extern "C" */
