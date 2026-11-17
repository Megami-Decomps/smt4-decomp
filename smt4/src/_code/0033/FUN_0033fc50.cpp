#include "gamedata/UnitRecordAccess.h"
#include "gamedata/SaveSlotTableIV.h"

extern "C" {
s32 FUN_003bc9b8(const StatBlock *unit);
bool slotUnitIsInActiveParty(StatBlock *unit);
u8 flagWordTestBit(StatBlock *unit, u32 bit);
void __aeabi_memset4(void *destination, u32 size, s32 value);

// Find an available reserve unit which is not active or excluded by its status flags.
u32 FUN_0033fc50(void)
{
    SaveSlotTableIV *stock = gameGetSlotTable();
    u8 count = 0;
    s8 slots[24];
    s32 i;
    /* The run-time's word-aligned fill, as retail calls it for the stack list. */
    __aeabi_memset4(slots, sizeof(slots), -1);
    for (i = 0; i < stock->stockCount; i++) {
        if (stock->stock[i] >= 0) {
            slots[count++] = stock->stock[i];
        }
    }
    for (i = 0; i < count; i++) {
        StatBlock *unit = gameGetUnitRecord(slots[i]);
        if (unit != NULL && FUN_003bc9b8(unit) != 0 && !slotUnitIsInActiveParty(unit) &&
            flagWordTestBit(unit, 1) == 0 && flagWordTestBit(unit, 10) == 0 &&
            flagWordTestBit(unit, 2) == 0) {
            return 1;
        }
    }
    return 0;
}
}
