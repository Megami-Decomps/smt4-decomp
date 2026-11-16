#include "shard/Shard0031.h"
#include <stddef.h>
#include "gamedata/SaveSlotTable.h"

struct SlotRecord;
extern "C" {
s32 gameFlagIsSet(u32 flag);
SlotRecord *gameGetSlotRecord(s32 slot);
s32 FUN_004bd0d8(SlotRecord *record);
s32 bitsAt60Test(SlotRecord *record, u32 bit);
s32 FUN_004bd730(SlotRecord *record);
void __aeabi_memset4(void *destination, u32 size, s32 value);

/* Searches the occupied roster for a record allowed by the current feature and status flags. */
s32 FUN_003ff888(void)
{
    /* The roster count lies beyond the shared SlotTable prefix; do not grow that shared type. */
    struct RosterView {
        /* 0x0000 */ PartyStatusSlots slots;
        /* 0x1CA3 */ u8 count;
    };
    typedef char RosterCountOffsetCheck[offsetof(RosterView, count) == 0x1CA3 ? 1 : -1];
    s8 occupiedSlots[24];
    s32 i;
    if (gameFlagIsSet(0x401) == 0) {
        return 0;
    }
    RosterView *roster = (RosterView *)gameGetSlotTable();
    u8 occupiedCount = 0;
    __aeabi_memset4(occupiedSlots, sizeof(occupiedSlots), -1);
    for (i = 0; i < roster->count; i++) {
        if (roster->slots.active.slots[i] >= 0) {
            occupiedSlots[occupiedCount++] = roster->slots.active.slots[i];
        }
    }
    for (i = 0; i < occupiedCount; i++) {
        SlotRecord *record = gameGetSlotRecord(occupiedSlots[i]);
        if (record != NULL && FUN_004bd730(record) != 0 &&
            FUN_004bd0d8(record) == 0 && bitsAt60Test(record, 1) == 0 &&
            bitsAt60Test(record, 10) == 0) {
            return 1;
        }
    }
    return 0;
}
}
