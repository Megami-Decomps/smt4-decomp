#include "shard/GameOptions.h"
#include "gamedata/SupportUnitRecord.h"

extern "C" {
GameOptions* gameGetSupportUnitData(void);
const SupportUnitRecord* supportUnitGetEntry(s32 kind, u32 index);
u32 mapCategoryToTableId(u32 category);
}

// Resolve the selected support unit's category to its data-table identifier.
extern "C" u32 gameGetSelectedSupportUnitTableId(void)
{
    u16 index = gameGetSupportUnitData()->supportIndex;
    const SupportUnitRecord* record =
        supportUnitGetEntry(static_cast<s16>(gameGetSupportUnitData()->unk604), index);
    return mapCategoryToTableId((record->flags << 10) >> 27);
}
