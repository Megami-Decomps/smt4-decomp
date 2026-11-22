/* The earned titles (gamedata/CampCecTable.h): one earned bit each in the save's unlock bitsets. */
#ifndef SHARD_PROGRESSUNLOCK_H
#define SHARD_PROGRESSUNLOCK_H

#include "common.h"
#include "shard/Shard003D.h"
#include "gamedata/GameDataAccess.h"

/* Read one earned-bit storage byte through the save-data byte accessor. */
extern "C" u32 progressUnlockByteGet(const u8 *byte);

/* Tests title `index`'s bit in the save's earned set. */
static __inline bool unlockBitIsEarned(s32 index)
{
    s32 byteIndex = index / 8;
    s32 bitIndex = index % 8;
    const u8 *byte = &((GameBlock2830C *)gameDataBlocksGetSaveData())->unlocks.earned[byteIndex];
    return (*byte & (1u << bitIndex)) != 0;
}

/* Sets title `index`'s bit in the save's earned set. The two setters are inline helpers like the test above:
 * progressConditionsUpdateUnlocks, which sets both, computes the byte index again for the second set
 * (`asr r4, r7, #3` after the first call), which armcc does only across an inline boundary; written in place the
 * two stores share one index (13 lines off). */
static __inline void unlockBitSetEarned(s32 index)
{
    s32 byteIndex = index / 8;
    s32 bitIndex = index % 8;
    u8 *byte = &((GameBlock2830C *)gameDataBlocksGetSaveData())->unlocks.earned[byteIndex];
    *byte |= 1u << bitIndex;
}

/* Sets title `index`'s bit in the save's pending set. */
static __inline void unlockBitSetPending(s32 index)
{
    s32 byteIndex = index / 8;
    s32 bitIndex = index % 8;
    u8 *byte = &((GameBlock2830C *)gameDataBlocksGetSaveData())->unlocks.pending[byteIndex];
    *byte |= 1u << bitIndex;
}

#endif
