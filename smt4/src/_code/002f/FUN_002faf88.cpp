/* NON_MATCHING: destination selection is correct; global-base reuse and shared tail-call layout differ. */
#include "map/mapDepart.h"
#include "shard/W6_W6Match2_EntrySequence.h"

extern "C" {
extern GameState g_gameState;
extern s32 DAT_0049fd14;

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
        if (DAT_0049fd14 == -1) {
            sequenceArgument = 3;
            asdSequenceRequest(14, &sequenceArgument, sizeof(sequenceArgument));
            return;
        }
        if (DAT_0049fd14 >= 200) {
            sequenceArgument = DAT_0049fd14 - 200;
            asdSequenceRequest(14, &sequenceArgument, sizeof(sequenceArgument));
            return;
        }
        if (DAT_0049fd14 < 100) {
            asdSequenceRequest(6, NULL, 0);
            return;
        }
    }
    asdSequenceRequest(8, NULL, 0);
}
}
