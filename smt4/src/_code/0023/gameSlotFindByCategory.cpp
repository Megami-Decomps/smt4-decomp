#include "gamedata/UnitStats.h"
#include "gamedata/SaveSlotTableIV.h"

// Find a saved unit by identity or by its saved slot byte.
extern "C" s32 gameSlotFindByCategory(const StatBlock *record)
{
    if (record != NULL) {
        StatBlock *slot = gameGetSlotTable()->units;
        for (s32 index = 0; index < 24; ++index, ++slot) {
            if (slot == record || slot->growth.slot == record->growth.slot)
                return index;
        }
    }
    return -1;
}
