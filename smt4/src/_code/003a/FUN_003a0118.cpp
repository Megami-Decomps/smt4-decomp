/* NON_MATCHING: register copy only: retail copies b to r6 before the first rank call */
/* Compares two ids: by FUN_0028fb3c key (descending), then by their FUN_00230f44 rank. */
#include "common.h"

extern "C" {

extern s32 FUN_0028fb3c(u16 id);
extern s32 FUN_00230f44(u16 *id);

s32 FUN_003a0118(u16 *a, u16 *b)
{
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
