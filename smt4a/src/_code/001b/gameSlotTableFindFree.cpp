#include "gamedata/SaveSlotTable.h"


extern "C" s32 gameSlotTableFindFree(void)
{
    SaveSlotTableA *table = gameGetSlotTable();
    s32 result = 0;
    s32 slotIndex = 0;

    while (slotIndex < 24) {
        if (table->party[slotIndex] < 0) {
            break;
        }
        ++slotIndex;
        ++result;
    }

    return result;
}
