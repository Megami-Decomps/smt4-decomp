#include "test/BustupViewerState.h"

extern "C" {
extern BustupViewerState *g_bustupViewer;

/* Initializes the viewer controls and the four portrait channels. */
void bustupViewerResetState(void)
{
    BustupViewerState *viewer = g_bustupViewer;
    viewer->backgroundId = 0;
    viewer->characterId = 0;
    viewer->characterVariant = 1;
    viewer->subWindowId = 0;
    viewer->characterParamA = 0;
    viewer->characterParamB = 0;
    viewer->partnerId = 0;
    viewer->partnerVariant = 1;
    viewer->partnerParamA = 0;
    viewer->partnerParamB = 0;
    viewer->positionIndex = 0;
    viewer->selection = 0;
    for (s32 i = 0; i < 4; ++i) {
        viewer->portraitIds[i] = 0;
        viewer->isNpc[i] = 1;
        viewer->paramA[i] = 0;
        viewer->paramB[i] = 0;
        viewer->scale[i] = 1.0f;
    }
}
}
