#include "common.h"
#include "util/Random.h"
#include "shard/Shard0034.h"
#include "shard/W6_W6Match8_DevilRecordA.h"
#include "gamedata/GamePlayerData.h"
#include "gamedata/GameSaveDataA.h"

extern "C" {


/* Rolls whether two demons trigger an event: the chance grows with the player flag, each demon's
 * flags, and doubles when either demon belongs to race 35. */
bool FUN_004da520(u32 unused, SlotRecordA *first, SlotRecordA *second)
{
    NkmBaseRecordA *firstRecord = nkmBaseGetRecord(first->id);
    NkmBaseRecordA *secondRecord = nkmBaseGetRecord(second->id);
    u16 chance = 1;

    if (gameGetPlayerData()->ailments & 0x200) {
        chance = 7;
    }
    if (first->ailments & 2) {
        chance++;
    }
    if (second->ailments & 2) {
        chance++;
    }
    if (first->ailments & 0x200) {
        chance += 3;
    }
    if (second->ailments & 0x200) {
        chance += 3;
    }
    if (firstRecord->race == 35 || secondRecord->race == 35) {
        chance *= 2;
    }
    return randRange(63) < chance;
}

} /* extern "C" */
