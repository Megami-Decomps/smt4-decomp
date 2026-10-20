/* NON_MATCHING: the flag byte is copied through r1 instead of r3. */
#include "common.h"

extern "C" {

typedef struct Pair {
    u32 value;
    u8 flag;
} Pair;

/* Copy-assigns a Pair. */
void FUN_002a7c80(Pair *dst, const Pair *src)
{
    dst->value = src->value;
    dst->flag = src->flag;
}

} /* extern "C" */
