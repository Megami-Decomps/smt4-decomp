#include "common.h"

struct DemonStockRecord {
    u8 unk000[0x130];
    u32 flags; // 0x130, bit 0 = registered
};

struct DemonStockTable {
    u8 unk0000[0x1ddc];
    DemonStockRecord records[12]; // 0x1ddc
};

extern "C" {

s32 gameFlagIsSet(u32 flag);
DemonStockTable *gameGetSlotTable(void);

static __inline DemonStockRecord *demonStockRecord(u32 index)
{
    if (index < 12) {
        return &gameGetSlotTable()->records[index];
    }
    return NULL;
}

// True when the story flag is set and at least two of the twelve stock records are registered.
u32 FUN_003e4978(void)
{
    if (!gameFlagIsSet(0x533)) {
        return 0;
    }
    s32 count = 0;
    for (s32 i = 0; i < 12; i++) {
        DemonStockRecord *record = demonStockRecord((u16)i);
        if (record != NULL && (record->flags & 1) != 0) {
            count++;
        }
    }
    return count > 1;
}

} /* extern "C" */
