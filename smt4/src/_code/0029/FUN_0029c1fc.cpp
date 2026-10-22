/* NON_MATCHING: the occupied-stock count shares its loop index instead of retail's separate counters. */
#include "gamedata/UnitStats.h"

struct UnitStockTable {
    /* 0x0000 */ u8 unk0000[0x90];
    /* 0x0090 */ StatBlock units[24];
    /* 0x90f0 */ s8 stock[24];
    /* 0x9108 */ s8 active[3];
    /* 0x910b */ u8 capacity;
};

extern "C" {
UnitStockTable *gameGetSlotTable();
bool FUN_003bc9b8(const StatBlock *unit);

s32 FUN_0029c1fc()
{
    UnitStockTable *first = gameGetSlotTable();
    UnitStockTable *table = gameGetSlotTable();
    s32 occupied = 0;
    while (occupied < 24 && table->stock[occupied] >= 0) {
        ++occupied;
    }
    if (occupied < first->capacity) {
        table = gameGetSlotTable();
        for (s32 index = 0; index < 24; ++index) {
            if (!FUN_003bc9b8(&table->units[index])) {
                return index;
            }
        }
    }
    return -1;
}
}
