/* NON_MATCHING: register copy only: retail copies b to r6 before the first rank call */
/* Compares two ids: by FUN_0028fb3c key (descending), then by their FUN_00230f44 rank. */
#include "common.h"
#include "shard/FUN_0028fb3c.h"

extern "C" {

extern u16 FUN_00230f44(const u16 *id);

s32 FUN_003a0118(const void *first, const void *second)
{
    const u16 *a = static_cast<const u16 *>(first);
    const u16 *b = static_cast<const u16 *>(second);
    u16 idA = *a;
    u16 idB = *b;
    s32 keyA = FUN_0028fb3c(idA);
    s32 keyB = FUN_0028fb3c(idB);
    s32 diff = keyB - keyA;

    if (diff == 0) {
        diff = FUN_00230f44(a) - FUN_00230f44(b);
    }
    return diff;
}

}
