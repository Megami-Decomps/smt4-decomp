#include "shard/Shard0031.h"
#include <stddef.h>
#include "gamedata/SaveSlotTable.h"
#include "gamedata/SaveSlotRecord.h"

extern "C" {
s32 gameFlagIsSet(u32 flag);
s32 FUN_004bd0d8(SlotRecordA *record);
s32 bitsAt60Test(SlotRecordA *record, u32 bit);
s32 slotTableEntryIsActive(SlotRecordA *record);
void __aeabi_memset4(void *destination, u32 size, s32 value);

/* Searches the occupied roster for a record allowed by the current feature and status flags. */
s32 FUN_003ff888(void)
{
    s8 occupiedSlots[24];
    s32 i;
    if (gameFlagIsSet(0x401) == 0) {
        return 0;
    }
    SaveSlotTableA *roster = gameGetSlotTable();
    u8 occupiedCount = 0;
    __aeabi_memset4(occupiedSlots, sizeof(occupiedSlots), -1);
    for (i = 0; i < roster->count; i++) {
        if (roster->party[i] >= 0) {
            occupiedSlots[occupiedCount++] = roster->party[i];
        }
    }
    for (i = 0; i < occupiedCount; i++) {
        SlotRecordA *record = gameGetSlotRecord(occupiedSlots[i]);
        if (record != NULL && slotTableEntryIsActive(record) != 0 &&
            FUN_004bd0d8(record) == 0 && bitsAt60Test(record, 1) == 0 &&
            bitsAt60Test(record, 10) == 0) {
            return 1;
        }
    }
    return 0;
}
}
