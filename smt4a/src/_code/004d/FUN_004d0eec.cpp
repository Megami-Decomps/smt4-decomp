#include "gamedata/SaveSlotTable.h"

extern "C" {

u8 FUN_004d0eec(void)
{
    const SaveSlotTableA* party = gameGetSlotTable();
    const SaveSlotTableA* slots = gameGetSlotTable();
    s32 occupied = 0;
    for (s32 index = 0; index < 24; ++index) {
        if (slots->party[index] < 0) {
            break;
        }
        ++occupied;
    }
    s32 capacity = party->count;
    return occupied < capacity;
}
}
