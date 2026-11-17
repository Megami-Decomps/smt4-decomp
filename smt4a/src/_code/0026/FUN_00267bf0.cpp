#include "shard/X14_EngineUnits.h"
#include "script/scrScriptProcess.h"

extern "C" {

extern void asdMemFree(void *p);
extern void messageSetScriptDisplayMode(void);
extern void dataTableFree(s32 table);
extern void asdTMTexTableReleaseNode(s32 table, s32 node);

/* Tears down the result screen: its script process and buffers, data tables 0x14/0x25 and texture nodes 0..2, then frees it. */
void FUN_00267bf0(void)
{
    ResultWorkA *work = g_engineCleanupOwner.instance;
    s32 i;

    if (work != NULL) {
        scrScriptProcessDestroy(work->process);
        asdMemFree(work->buffer439C);
        asdMemFree(work->buffer43A4);
        messageSetScriptDisplayMode();
        asdMemFree(work->buffer43A8);
        dataTableFree(0x14);
        dataTableFree(0x25);
        for (i = 0; i < 3; i++) {
            asdTMTexTableReleaseNode(0x1D, i);
        }
        asdMemFree(g_engineCleanupOwner.instance);
        g_engineCleanupOwner.instance = NULL;
    }
}

} /* extern "C" */
