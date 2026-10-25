#include "common.h"

extern "C" {

struct BustupViewer {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ u8 state;
};
extern BustupViewer *g_bustupViewer;

static __inline void bustupViewerSetState(BustupViewer *viewer, u8 state)
{
    viewer->state = state;
}

void bustupViewerActivate(void)
{
    bustupViewerSetState(g_bustupViewer, 1);
}

} /* extern "C" */
