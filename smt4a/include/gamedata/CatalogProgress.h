#ifndef GAMEDATA_CATALOGPROGRESS_H
#define GAMEDATA_CATALOGPROGRESS_H

#include "addon/PackageSelection.h"
#include "gamedata/GameDataAccess_VariantE.h"

extern "C" {
u8 tableByteGet1(s32 index);
void gameDataSetModeAndFlag(u32 index, u8 mode);
}

/* Count active option flags unless the stored progress already covers the whole list. */
static u8 countCompletedOptions(const PackageSelectableRecord *record, u8 previous)
{
    const u8 optionCount = sizeof(record->options) / sizeof(record->options[0]);
    if (previous >= optionCount)
        return previous;
    u8 progress = 0;
    for (u8 i = 0; i < optionCount; ++i) {
        if (gameFlagIsSet(record->options[i]))
            ++progress;
    }
    return progress;
}

#endif
