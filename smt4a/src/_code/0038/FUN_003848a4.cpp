/* NON_MATCHING: destination selection is correct; global-base reuse and shared tail-call layout differ. */
#include "map/mapDepart.h"

extern "C" {
extern GameStateA g_gameState;
extern s32 g_mapSelection;
void asdSequenceRequest(s32 sequence, const void* argument, u32 size);

// Select the destination sequence, preserving map return data when needed.
void FUN_003848a4(void)
{
    s32 sequenceArgument;
    if (g_gameState.transitionActive != 0) {
        if ((s32)g_gameState.destinationMap >= 200) {
            sequenceArgument = g_gameState.destinationMap - 200;
            g_gameState.sourceArea = 0;
            asdSequenceRequest(14, &sequenceArgument, sizeof(sequenceArgument));
            return;
        }
        if ((s32)g_gameState.destinationMap < 100) {
            asdSequenceRequest(6, NULL, 0);
            return;
        }
        if ((s32)g_gameState.sourceMap < 100) {
            g_gameState.sourceMap = g_gameState.destinationMap;
            g_gameState.sourceArea = g_gameState.destinationArea;
            g_gameState.sourcePosition = g_gameState.destinationPosition;
            g_gameState.sourceHeading = g_gameState.destinationHeading;
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