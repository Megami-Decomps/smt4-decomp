#include "title/titleMain.h"

extern "C" {

void asdMemFree(void *block);
void asdTMTexTableReleaseNode(s32 table, s32 node);
void dataTableFree(s32 table);
void FUN_002c2160(s32 arg);
void asdTMTexTableFreeEntry(s32 table);
void campButtonHelpRelease(void);
s32 campButtonHelpIsActive(void);
void freeTexTable24(void);

extern TitleMainGlobals g_titleMain;

/* Destroy callback of the title job: lets go of its texture tables and button help, marks the
 * block to be freed and frees it. */
void titleMainRelease(void)
{
    TitleMain *title = g_titleMain.title;
    s32 i;

    title->freeOnEnd = 1;
    dataTableFree(0x3A);
    freeTexTable24();
    for (i = 0; i < 9; i++) {
        asdTMTexTableReleaseNode(0x2A, i);
    }
    asdTMTexTableFreeEntry(0x2A);
    FUN_002c2160(0);
    if (campButtonHelpIsActive() != 0) {
        campButtonHelpRelease();
    }
    if (g_titleMain.title != NULL) {
        asdMemFree(g_titleMain.title);
        g_titleMain.title = NULL;
    }
}

} /* extern "C" */
