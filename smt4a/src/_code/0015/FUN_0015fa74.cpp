/* NON_MATCHING: retail 61 vs built 58 rows; conditional table scanning and candidate-pointer register allocation differ. */
#include "gamedata/DataTable.h"
#include "gamedata/PlayerDataBlock.h"

struct ConditionalMapRecordA {
    u8 map;
    u8 area;
    u8 unk02[8];
    u16 minimumLevel;
    u16 unk0c;
    s16 requiredFlag;
    s16 blockedFlag;
    u8 unk12[0x92];
};
struct PlayerLevelView {
    u8 unk00[0x62];
    u16 level;
};

extern "C" {
extern void *g_aocSystem;
ConditionalMapRecordA *FUN_00176124(void *, u32, u32);
s32 gameFlagIsSet(u32);

// Prefer an add-on map record, otherwise search the base table's eligible records.
ConditionalMapRecordA *FUN_0015fa74(u32 map, u32 area)
{
    ConditionalMapRecordA *addon = FUN_00176124(g_aocSystem, map, area);
    if (addon != NULL)
        return addon;
    void *table = dataTableGet(2, 0);
    ConditionalMapRecordA *records = static_cast<ConditionalMapRecordA *>(dataTableGetEntries(table));
    s32 count = dataTableGetCount(table);
    for (s32 index = 0; index < count; ++index) {
        ConditionalMapRecordA *record = &records[index];
        if (record->map == map && record->area == area &&
            (record->requiredFlag == 0 || gameFlagIsSet(record->requiredFlag)) &&
            (record->blockedFlag == 0 || !gameFlagIsSet(record->blockedFlag))) {
            PlayerLevelView *player = reinterpret_cast<PlayerLevelView *>(gameGetPlayerData());
            if (record->minimumLevel == 0 || record->minimumLevel <= player->level)
                return record;
        }
    }
    return NULL;
}
}
