#include "gamedata/MapSaveBlock.h"
#include "map/mapDepart.h"
#include "game/GameState.h"

extern "C" {
s32 dataTable23Type0FindIndexById(s32 groupId);
s32 mapIfClearGroupState(s32 groupId);

/* Marks a group's bit in the map block's cleared-group mask. */
static __inline void mapMarkGroupCleared(s32 index)
{
    MapSaveBlock *map = gameGetMapBlock();
    if (index >= 0) {
        s32 word = index / 32;
        s32 bit = index % 32;
        map->clearedGroups[word] |= 1u << bit;
    }
}

void mapCompleteActiveAndPendingGroups(void)
{
    if (g_gameState.activeGroupId != 0) {
        const s32 index = dataTable23Type0FindIndexById(
            g_gameState.activeGroupId);
        if (index != -1) {
            mapMarkGroupCleared(index);
            mapIfClearGroupState(g_gameState.activeGroupId);
        }
    }

    if (g_gameState.pendingGroupId != 0) {
        const s32 index = dataTable23Type0FindIndexById(
            g_gameState.pendingGroupId);
        if (index != -1) {
            mapMarkGroupCleared(index);
            mapIfClearGroupState(g_gameState.pendingGroupId);
        }
        g_gameState.pendingGroupId = 0;
    }
    g_gameState.map.destinationSet = 0;
}
}
