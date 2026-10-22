#include "common.h"

extern "C" {

/* Data table 15 entry: only the fields this unit reads are known. */
typedef struct DataTable15Entry {
    u8 id;           /* 0x00 */
    u8 group;        /* 0x01 */
    u8 unk02[0x54];
    u16 gameFlag;    /* 0x56: required game flag, 0 for none */
    u16 flagBit;     /* 0x58: required flag bit, 0 for none */
} DataTable15Entry;

u32 FUN_002e26ac(void);
DataTable15Entry *dataTable15GetEntry(u32 index);
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
        DataTable15Entry *entry = dataTable15GetEntry(i);

        if (entry != NULL && entry->group == group
            && (entry->gameFlag == 0 || gameFlagIsSet(entry->gameFlag))
            && (entry->flagBit == 0 || gameDataFlagTestBit(entry->flagBit))) {
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
