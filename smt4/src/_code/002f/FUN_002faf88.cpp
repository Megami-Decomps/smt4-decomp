/* NON_MATCHING: now through g_gameState.jump.request.first; retail keeps the first-branch test in r0 (reloading the game-state literal afterwards) and reaches the request word through a second literal, the build keeps one base. */
#include "map/mapDepart.h"
#include "shard/W6_W6Match2_EntrySequence.h"

extern "C" {
extern GameState g_gameState;

// Select the destination sequence, preserving map return data when needed.
void FUN_002faf88(void)
{
    s32 sequenceArgument;
    if (g_gameState.unk2F8Byte != 0) {
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
            g_gameState.unk314 = g_gameState.unk330Scalar;
        }
    } else {
        s32 requestedMap = (s32)g_gameState.jump.request.first;
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
