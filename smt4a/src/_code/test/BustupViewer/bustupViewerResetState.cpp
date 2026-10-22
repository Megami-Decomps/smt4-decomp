#include "test/BustupViewerState.h"

extern "C" {
extern BustupViewerState *g_bustupViewer;

/* Initializes the viewer controls and the four portrait channels. */
void bustupViewerResetState(void)
{
    BustupViewerState *viewer = g_bustupViewer;
    viewer->unk14 = 0;
    viewer->unk18 = 0;
    viewer->unk1C = 1;
    viewer->unk20 = 0;
    viewer->unk24 = 0;
    viewer->unk28 = 0;
    viewer->unk2C = 0;
    viewer->unk30 = 1;
    viewer->unk34 = 0;
    viewer->unk38 = 0;
    viewer->unk3C = 0;
    viewer->selection = 0;
    for (s32 i = 0; i < 4; ++i) {
        viewer->portraitIds[i] = 0;
        viewer->unk64[i] = 1;
        viewer->unk68[i] = 0;
        viewer->unk78[i] = 0;
        viewer->unk88[i] = 1.0f;
    }
}
}
