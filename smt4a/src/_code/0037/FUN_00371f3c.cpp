/* NON_MATCHING: retail 54 vs built 54 rows; eligibility comparisons and row-pointer register allocation differ. */
#include "shard/GameGlobals.h"
#include "gamedata/DataTable.h"

struct MapConditionRecord {
    u8 unk00[0x10];
    s16 requiredFlag;
    s16 blockedFlag;
    u16 minimum;
    u16 maximum;
};
struct SaveProgressView {
    u8 unk00[0x66];
    u16 progress;
};

extern "C" {
void *dataTableFileGetTable(void *, u32);
SaveProgressView *gameDataBlocksGetTable(void);
s32 gameFlagIsSet(u32);

// Select the first map condition whose flags and progress range are satisfied.
s32 FUN_00371f3c(void)
{
    // The file field lies past the end of the shared game-global data prefix.
    struct MapConditionOwnerView {
        u8 unk0000[0x20cc];
        void *file;
    };
    if (g_gameGlobals.data == NULL)
        return -1;
    MapConditionOwnerView *owner = reinterpret_cast<MapConditionOwnerView *>(g_gameGlobals.data);
    void *table = dataTableFileGetTable(owner->file, 0);
    MapConditionRecord *records = static_cast<MapConditionRecord *>(dataTableGetEntries(table));
    s32 count = dataTableGetCount(table);
    u32 progress = gameDataBlocksGetTable()->progress + 1;
    for (s32 index = 0; index < count; ++index) {
        MapConditionRecord *record = &records[index];
        if ((record->requiredFlag == 0 || gameFlagIsSet(record->requiredFlag)) &&
            (record->blockedFlag == 0 || !gameFlagIsSet(record->blockedFlag)) &&
            (record->minimum == 0 ||
             (record->minimum <= progress && (record->maximum == 0 || progress <= record->maximum))))
            return index;
    }
    return -1;
}
}
