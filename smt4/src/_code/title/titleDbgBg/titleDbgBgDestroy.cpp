#include "common.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"

extern "C" {

typedef struct DebugBg {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ u8 visible;
} DebugBg;

extern DebugBg *g_titleDbgBg; /* 0x44e2e8 */

extern int asdTMTexTableReleaseNode(int table, int node);
extern void asdMemFree(void *block);

/* Hides the debug background, releases its texture table entry and frees its block. */
void titleDbgBgDestroy(void)
{
    DebugBg *bg = g_titleDbgBg;

    bg->visible = 1;
    asdTMTexTableReleaseNode(0, 0);
    asdTMTexTableFreeEntry(0);
    if (g_titleDbgBg != NULL) {
        asdMemFree(g_titleDbgBg);
        g_titleDbgBg = NULL;
    }
}

} /* extern "C" */
