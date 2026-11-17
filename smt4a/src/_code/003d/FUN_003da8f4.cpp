#include "common.h"
#include "gamedata/CampComTable.h"

extern "C" {

/* Data table 15 entry: only the fields this unit reads are known. */
u32 FUN_002e26ac(void);
s32 gameFlagIsSet(u32 flag);
s32 gameDataFlagTestBit(u32 bit);

/* Returns the id of the `index`-th unlocked entry of `group` (0 when there are fewer). */
u8 FUN_003da8f4(u32 group, s32 index)
{
    u8 result = 0;
    s32 found = 0;
    u32 count = FUN_002e26ac();
    u32 i;

    for (i = 0; i < count; i++) {
        CampComRecord *entry = dataTable15GetEntry(i);

        if (entry != NULL && entry->group == group
            && (entry->requiredFlag == 0 || gameFlagIsSet(entry->requiredFlag))
            && (entry->requiredDataBit == 0 || gameDataFlagTestBit(entry->requiredDataBit))) {
            if (found == index) {
                result = entry->id;
                break;
            }
            found++;
        }
    }
    return result;
}

} /* extern "C" */
