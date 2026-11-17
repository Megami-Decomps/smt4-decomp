/* NON_MATCHING: destination selection is correct; global-base reuse and shared tail-call layout differ. */
#include "map/mapDepart.h"
#include "game/GameStateA.h"

extern "C" {
extern s32 g_mapSelection;
void asdSequenceRequest(s32 sequence, const void* argument, u32 size);

// Select the destination sequence, preserving map return data when needed.
void FUN_003848a4(void)
{
    s32 sequenceArgument;
    if (g_gameState.savedLocationSet != 0) {
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
        if ((s32)g_gameState.savedMapId < 100) {
            g_gameState.savedMapId = g_gameState.targetMapId;
            g_gameState.savedAreaId = g_gameState.targetAreaId;
            g_gameState.savedPosition = g_gameState.targetPosition;
            g_gameState.savedHeading = g_gameState.targetHeading;
        }
    } else {
        if (g_mapSelection == -1) {
            sequenceArgument = 3;
            asdSequenceRequest(14, &sequenceArgument, sizeof(sequenceArgument));
            return;
        }
        if (g_mapSelection >= 200) {
            sequenceArgument = g_mapSelection - 200;
            asdSequenceRequest(14, &sequenceArgument, sizeof(sequenceArgument));
            return;
        }
        if (g_mapSelection < 100) {
            asdSequenceRequest(6, NULL, 0);
            return;
        }
    }
    asdSequenceRequest(8, NULL, 0);
}
}