#include "common.h"

extern "C" {

/* Data table 15 sub-table 0 entry: only the fields this unit reads are known. */
typedef struct DataTable15Sub0Entry {
    u8 id;           /* 0x00 */
    u8 group;        /* 0x01 */
    u8 unk02[0x54];
    u16 gameFlag;    /* 0x56: required game flag, 0 for none */
    u16 flagBit;     /* 0x58: required flag bit, 0 for none */
} DataTable15Sub0Entry;

u32 dataTable15Sub0GetCount(void);
DataTable15Sub0Entry *dataTable15Sub0GetEntries(u32 index);
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
        DataTable15Sub0Entry *entry = dataTable15Sub0GetEntries(i);

        if (entry != NULL && entry->group == group
            && (entry->gameFlag == 0 || gameFlagIsSet(entry->gameFlag))
            && (entry->flagBit == 0 || flagBitIsSet(entry->flagBit))) {
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
