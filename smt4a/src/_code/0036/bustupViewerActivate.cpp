/* NON_MATCHING: retail uses `mov r1, #1` where armcc emits `ldr r1, [r0]`. */
#include "common.h"

extern "C" {

struct BustupViewer {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ u8 state;
};
extern BustupViewer *g_bustupViewer;

void bustupViewerActivate(void)
{
    g_bustupViewer->state = 1;
}

} /* extern "C" */
