#include "shard/Shard004B.h"
#include "shard/W5_W5Match2_UniteWork.h"

extern "C" {

extern s32 gameDataFlagTestBit(u32 id);

/* Number of unlocked slots: 4 base, +1 for each of four flags 0x7B..0x7E (the first counts 5), capped at 8. */
s32 getUnlockedSlotCount(void *arg0)
{
    s32 count = 4;

    if (gameDataFlagTestBit(0x7B) != 0) {
        count = 5;
    }
    if (gameDataFlagTestBit(0x7C) != 0) {
        count = count + 1;
    }
    if (gameDataFlagTestBit(0x7D) != 0) {
        count = count + 1;
    }
    if (gameDataFlagTestBit(0x7E) != 0) {
        count = count + 1;
    }
    if (count > 8) {
        count = 8;
    }
    return count;
}

} /* extern "C" */
