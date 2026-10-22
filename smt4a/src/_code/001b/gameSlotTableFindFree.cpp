#include "common.h"

struct SlotTable {
    u8 unk00[0x1C88];       // 0x0000
    s8 slotStatus[24];     // 0x1C88
};

extern "C" SlotTable* gameGetSlotTable(void);

extern "C" s32 gameSlotTableFindFree(void)
{
    SlotTable* table = gameGetSlotTable();
    s32 result = 0;
    s32 slotIndex = 0;

    while (slotIndex < 24) {
        if (table->slotStatus[slotIndex] < 0) {
            break;
        }
        ++slotIndex;
        ++result;
    }

    return result;
}
