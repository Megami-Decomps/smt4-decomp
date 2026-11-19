/* NON_MATCHING: the request word now comes through its own literal (g_mapSelection) as in retail; the blocks after the first test (the group-range copies and the jump-group tests) are laid out in another order, which also moves the pool by 8 bytes (38 lines). */
#include "map/mapDepart.h"
#include "shard/W6_W6Match2_EntrySequence.h"
#include "game/GameState.h"

extern "C" {

// Select the destination sequence, preserving map return data when needed.
void FUN_002faf88(void)
{
    s32 sequenceArgument;
    if (g_gameState.map.savedLocationSet != 0) {
        if ((s32)g_gameState.targetMapId >= 200) {
            sequenceArgument = g_gameState.targetMapId - 200;
            g_gameState.savedAreaId = 0;
            asdSequenceRequest(14, &sequenceArgument, sizeof(sequenceArgument));
            return;
        }
        if ((s32)g_gameState.targetMapId < 100) {
            asdSequenceRequest(6, NULL, 0);
            return;
        }
        if (g_gameState.savedMapId < 100) {
            g_gameState.savedMapId = g_gameState.targetMapId;
            g_gameState.savedAreaId = g_gameState.targetAreaId;
            g_gameState.savedPosition = g_gameState.targetPosition;
            g_gameState.savedHeading = g_gameState.targetHeading;
        }
    } else {
        s32 requestedMap = (s32)g_mapSelection.selection.group;
        if (requestedMap == -1) {
            sequenceArgument = 3;
            asdSequenceRequest(14, &sequenceArgument, sizeof(sequenceArgument));
            return;
        }
        if (requestedMap >= 200) {
            sequenceArgument = requestedMap - 200;
            asdSequenceRequest(14, &sequenceArgument, sizeof(sequenceArgument));
            return;
        }
        if (requestedMap < 100) {
            asdSequenceRequest(6, NULL, 0);
            return;
        }
    }
    asdSequenceRequest(8, NULL, 0);
}
}
