/* NON_MATCHING: default flags unroll the byte-pair scan by two. O2 restores a simple loop but key-load predication/registers differ; Ospace also differs. */
#include "gamedata/DataTable.h"
#include "shard/W6_W6Match2_GameDataEntryKeys.h"

// Map the group/item byte pair to its table index, with zero as the default.
extern "C" s32 gameDataFindEntryIndex(u32 groupId, u32 itemId)
{
    void* section = dataTableGet(2, 3);
    GameDataEntryKey* entries = (GameDataEntryKey*)dataTableGetEntries(section);
    s32 count = (s32)dataTableGetCount(section);
    for (s32 i = 0; i < count; ++i) {
        if (entries[i].groupId == groupId && entries[i].itemId == itemId) {
            return i;
        }
    }
    return 0;
}
