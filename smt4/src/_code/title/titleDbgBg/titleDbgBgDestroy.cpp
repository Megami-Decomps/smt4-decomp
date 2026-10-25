#include "common.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"

extern "C" {

typedef struct DebugBg {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ u8 visible;
} DebugBg;

extern DebugBg *DAT_0044e2e8; /* 0x44e2e8 */

extern int asdTMTexTableReleaseNode(int table, int node);
extern void asdMemFree(void *block);

/* Hides the debug background, releases its texture table entry and frees its block. */
void titleDbgBgDestroy(void)
{
    DebugBg *bg = DAT_0044e2e8;

    bg->visible = 1;
    asdTMTexTableReleaseNode(0, 0);
    asdTMTexTableFreeEntry(0);
    if (DAT_0044e2e8 != NULL) {
        asdMemFree(DAT_0044e2e8);
        DAT_0044e2e8 = NULL;
    }
}

} /* extern "C" */
