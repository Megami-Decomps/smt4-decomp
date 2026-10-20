/* NON_MATCHING: register copy only: retail copies b to r6 before the first rank call */
/* Compares two ids: by FUN_001ba3d0 key (descending), then by their FUN_0049c9a0 rank. */
#include "common.h"

extern "C" {

extern s32 FUN_001ba3d0(u16 id);
extern s32 FUN_0049c9a0(u16 *id);

s32 FUN_00493e94(u16 *a, u16 *b)
{
    u16 idA = *a;
    u16 idB = *b;
    s32 keyA = FUN_001ba3d0(idA);
    s32 keyB = FUN_001ba3d0(idB);
    s32 diff = keyB - keyA;

    if (diff == 0) {
        diff = FUN_0049c9a0(a) - FUN_0049c9a0(b);
    }
    return diff;
}

}
