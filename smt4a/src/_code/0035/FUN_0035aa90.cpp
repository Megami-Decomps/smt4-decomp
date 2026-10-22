/* NON_MATCHING: retail keeps the earned byte address unfolded (add #748, ldrb [r0]) and swaps the
 * callee-saved registers holding index and the bit constant. */
#include "gamedata/DataTable.h"
#include "shard/Shard003D.h"

extern "C" {
GameBlock2830C *gameDataBlocksGetSaveData(void);

/* Tests entry `id`'s bit in the save's earned set. */
static inline bool unlockIsEarned(s32 id)
{
    s32 byte = id / 8;
    s32 bit = id % 8;
    return (gameDataBlocksGetSaveData()->unlocks.earned[byte] & (1 << bit)) != 0;
}

/* Returns the name of the index-th earned entry of data table 0x4a (0x2c-byte records), or "" when
 * fewer are earned. */
const char *FUN_0035aa90(s32 index)
{
    s32 count = dataTableGetCount(dataTableGet(0x4a, 0));
    s32 found = 0;
    for (s32 i = 0; i < count; i++) {
        u8 *record = (u8 *)dataTableGetEntries(dataTableGet(0x4a, 0)) + i * 0x2c;
        if (record != NULL && unlockIsEarned(i)) {
            if (found == index) {
                return (const char *)record;
            }
            found++;
        }
    }
    return "";
}
}
