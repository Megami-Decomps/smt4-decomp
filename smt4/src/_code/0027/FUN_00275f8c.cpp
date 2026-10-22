/* NON_MATCHING: Map-flag indexed addressing and update-store scheduling differ. */
#include "common.h"
#include "map/mapDepart.h"

struct MapBlock;

extern "C" {
extern GameState g_gameState;
s32 dataTable23Type0FindIndexById(s32 groupId);
MapBlock *gameGetMapBlock(void);
s32 mapIfClearGroupState(s32 groupId);

void FUN_00275f8c(void)
{
    if (g_gameState.groupClear.activeGroupId != 0) {
        const s32 index = dataTable23Type0FindIndexById(
            g_gameState.groupClear.activeGroupId);
        if (index != -1) {
            MapBlock *map = gameGetMapBlock();
            if (index >= 0) {
                // Local storage view: the map block's type and capacity are unknown.
                u32 *flags = reinterpret_cast<u32 *>(
                    reinterpret_cast<u8 *>(map) + 0x7D4);
                flags[index / 32] |= 1u << (index % 32);
            }
            mapIfClearGroupState(g_gameState.groupClear.activeGroupId);
        }
    }

    if (g_gameState.groupClear.pendingGroupId != 0) {
        const s32 index = dataTable23Type0FindIndexById(
            g_gameState.groupClear.pendingGroupId);
        if (index != -1) {
            MapBlock *map = gameGetMapBlock();
            if (index >= 0) {
                u32 *flags = reinterpret_cast<u32 *>(
                    reinterpret_cast<u8 *>(map) + 0x7D4);
                flags[index / 32] |= 1u << (index % 32);
            }
            mapIfClearGroupState(g_gameState.groupClear.pendingGroupId);
        }
        g_gameState.groupClear.pendingGroupId = 0;
    }
    g_gameState.groupClearFlags.updateFlag = 0;
}
}
