/* NON_MATCHING: register copy only: retail copies b to r6 before the first rank call */
/* Compares two ids: by FUN_001ba3d0 key (descending), then by their FUN_0049c9a0 rank. */
#include "common.h"

extern "C" {

extern s32 FUN_001ba3d0(u16 id);
extern u16 FUN_0049c9a0(const u16 *id);

s32 FUN_00493e94(const void *first, const void *second)
{
    const u16 *a = static_cast<const u16 *>(first);
    const u16 *b = static_cast<const u16 *>(second);
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
