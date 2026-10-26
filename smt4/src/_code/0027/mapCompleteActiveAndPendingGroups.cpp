#include "common.h"
#include "map/mapDepart.h"

struct MapBlock {
    u8 unk000[0x7D4];
    u32 clearedGroups[1]; // 0x7D4: one bit per group
};

extern "C" {
extern GameState g_gameState;
s32 dataTable23Type0FindIndexById(s32 groupId);
MapBlock *gameGetMapBlock(void);
s32 mapIfClearGroupState(s32 groupId);

/* Marks a group's bit in the map block's cleared-group mask. */
static __inline void mapMarkGroupCleared(s32 index)
{
    MapBlock *map = gameGetMapBlock();
    if (index >= 0) {
        s32 word = index / 32;
        s32 bit = index % 32;
        map->clearedGroups[word] |= 1u << bit;
    }
}

void mapCompleteActiveAndPendingGroups(void)
{
    if (g_gameState.groupClear.activeGroupId != 0) {
        const s32 index = dataTable23Type0FindIndexById(
            g_gameState.groupClear.activeGroupId);
        if (index != -1) {
            mapMarkGroupCleared(index);
            mapIfClearGroupState(g_gameState.groupClear.activeGroupId);
        }
    }

    if (g_gameState.groupClear.pendingGroupId != 0) {
        const s32 index = dataTable23Type0FindIndexById(
            g_gameState.groupClear.pendingGroupId);
        if (index != -1) {
            mapMarkGroupCleared(index);
            mapIfClearGroupState(g_gameState.groupClear.pendingGroupId);
        }
        g_gameState.groupClear.pendingGroupId = 0;
    }
    g_gameState.groupClearFlags.updateFlag = 0;
}
}
