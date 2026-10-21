/* NON_MATCHING: final comparison operands are reversed, emitting GT/LE instead of retail LT/GE. */
#include "common.h"

struct DemonStockState {
    u8 unk0000[0x90f0];
    s8 slots[0x18]; // 0x90f0: negative marks the end of the occupied prefix
    u8 unk9108[3];
    u8 capacity; // 0x910b
};

extern "C" {
DemonStockState *gameGetSlotTable(void);

bool FUN_003c2f8c(void)
{
    DemonStockState *capacityState = gameGetSlotTable();
    DemonStockState *stock = gameGetSlotTable();
    s32 count = 0;
    for (s32 index = 0; index < 0x18; ++index) {
        if (stock->slots[index] < 0)
            break;
        ++count;
    }
    return count < capacityState->capacity;
}
}
