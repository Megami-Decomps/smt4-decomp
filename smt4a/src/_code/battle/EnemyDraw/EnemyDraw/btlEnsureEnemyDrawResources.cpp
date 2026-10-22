#include "common.h"
#include "shard/W9_W9Match8_WorkRecords.h"
#include "AsdSDK/AsdDebug.h"

extern "C" {
void *asdMemoryAllocTracked(u32 memoryDomain, u32 alignment,
                           u32 flags, u32 size, u32 trackingEnabled);
void FUN_004194c8(EnemyDrawResourcesA *resources,
                  EnemyDrawResourceOwnerPrefixA *owner, s32 mode);

void btlEnsureEnemyDrawResources(EnemyDrawResourceOwnerPrefixA *owner, s32 mode)
{
    if (owner->resources != 0)
        return;

    if (mode != 0) {
        asdDebugTrace("c:\\SMT4F\\SMT4F\\sdds4\\program\\battle\\EnemyDraw\\EnemyDraw.cpp", 1770);
        owner->resources = static_cast<EnemyDrawResourcesA *>(
            asdMemoryAllocTracked(0x100, 0x100, 0, 0x14, 1));
    } else {
        asdDebugTrace("c:\\SMT4F\\SMT4F\\sdds4\\program\\battle\\EnemyDraw\\EnemyDraw.cpp", 1774);
        owner->resources = static_cast<EnemyDrawResourcesA *>(
            asdMemoryAllocTracked(0x10000, 0x100, 0, 0x14, 1));
    }

    FUN_004194c8(owner->resources, owner, mode);
}
}
