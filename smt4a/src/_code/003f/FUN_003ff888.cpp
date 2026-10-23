/* NON_MATCHING: The filter countdown stays in r1 rather than retail's saved r4, adding an index initialization. */
#include "shard/Shard0031.h"
#include <stddef.h>

struct SlotRecord;
extern "C" {
s32 gameFlagIsSet(u32 flag);
SlotRecord *gameGetSlotRecord(s32 slot);
SlotTable *gameGetSlotTable(void);
s32 FUN_004bd0d8(SlotRecord *record);
s32 bitsAt60Test(SlotRecord *record, u32 bit);
s32 FUN_004bd730(void);
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
    if (gameFlagIsSet(0x401) != 0) {
        RosterView *roster = (RosterView *)gameGetSlotTable();
        u8 occupiedCount = 0;
        __aeabi_memset4(occupiedSlots, sizeof(occupiedSlots), -1);
        s32 remaining = roster->count;
        if (remaining != 0) {
            const s8 *slot = roster->slots.active.slots;
            for (; remaining > 0; --remaining, ++slot) {
                if (*slot >= 0) {
                    occupiedSlots[occupiedCount++] = *slot;
                }
            }
            for (s32 index = 0; index < occupiedCount; ++index) {
                SlotRecord *record = gameGetSlotRecord(occupiedSlots[index]);
                if (record != NULL && FUN_004bd730() != 0 &&
                    FUN_004bd0d8(record) == 0 && bitsAt60Test(record, 1) == 0 &&
                    bitsAt60Test(record, 10) == 0) {
                    return 1;
                }
            }
        }
    }
    return 0;
}
}
