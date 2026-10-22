#include "common.h"
#include "shard/Shard0034.h"
#include "shard/Shard004B.h"
#include "shard/W6_W6Match8_DevilRecordA.h"

extern "C" {

u32 randRange(u32 range);
PlayerData *gameGetPlayerData(void);

/* Rolls whether two demons trigger an event: the chance grows with the player flag, each demon's
 * flags, and doubles when either demon belongs to race 35. */
bool FUN_004da520(u32 unused, ScaledRecordValues *first, ScaledRecordValues *second)
{
    DevilRecordA *firstRecord = FUN_00184310(first->id);
    DevilRecordA *secondRecord = FUN_00184310(second->id);
    u16 chance = 1;

    if (gameGetPlayerData()->unk5E & 0x200) {
        chance = 7;
    }
    if (first->flags & 2) {
        chance++;
    }
    if (second->flags & 2) {
        chance++;
    }
    if (first->flags & 0x200) {
        chance += 3;
    }
    if (second->flags & 0x200) {
        chance += 3;
    }
    if (firstRecord->race == 35 || secondRecord->race == 35) {
        chance *= 2;
    }
    return randRange(63) < chance;
}

} /* extern "C" */
