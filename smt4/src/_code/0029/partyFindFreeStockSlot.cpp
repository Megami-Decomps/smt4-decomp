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

s32 partyFindFreeStockSlot()
{
    UnitStockTable *first = gameGetSlotTable();
    UnitStockTable *table = gameGetSlotTable();
    s32 occupied = 0;
    for (s32 index = 0; index < 24; ++index) {
        if (table->stock[index] < 0) {
            break;
        }
        ++occupied;
    }
    s32 capacity = first->capacity;
    if (occupied >= capacity) {
        return -1;
    }
    table = gameGetSlotTable();
    for (s32 index = 0; index < 24; ++index) {
        if (!FUN_003bc9b8(&table->units[index])) {
            return index;
        }
    }
    return -1;
}
}
