#include "common.h"

extern "C" {

s32 dataSelectPrioritizedCandidate(s32 index);

extern u8 DAT_005806e0[];

/* Looks a byte up in the table at DAT_005806e0 by the index dataSelectPrioritizedCandidate returns. */
u8 mapEnemyLookupByte(s32 index)
{
    return DAT_005806e0[dataSelectPrioritizedCandidate(index)];
}

} /* extern "C" */
