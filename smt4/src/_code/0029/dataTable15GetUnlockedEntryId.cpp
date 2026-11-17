#include "common.h"
#include "gamedata/CampComTable.h"

extern "C" {

/* Data table 15 sub-table 0 entry: only the fields this unit reads are known. */
u32 dataTable15Sub0GetCount(void);
s32 gameFlagIsSet(u32 flag);
s32 flagBitIsSet(u32 bit);

/* Returns the id of the `index`-th unlocked entry of `group` (0 when there are fewer). */
u8 dataTable15GetUnlockedEntryId(u32 group, s32 index)
{
    u8 result = 0;
    s32 found = 0;
    u32 count = dataTable15Sub0GetCount();
    u32 i;

    for (i = 0; i < count; i++) {
        CampComRecord *entry = dataTable15Sub0GetEntries(i);

        if (entry != NULL && entry->group == group
            && (entry->requiredFlag == 0 || gameFlagIsSet(entry->requiredFlag))
            && (entry->requiredDataBit == 0 || flagBitIsSet(entry->requiredDataBit))) {
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
