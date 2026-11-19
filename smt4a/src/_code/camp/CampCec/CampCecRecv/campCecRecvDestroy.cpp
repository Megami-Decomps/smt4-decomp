#include "camp/CampCec/CampCecRecv.h"
#include "gamedata/DataTableSections.h"
#include "script/scrScriptProcess.h"

extern "C" {

void jobStop(u32 job, s32 arg); // declcheck: local (the shared declaration does not compile here or changes this unit)
void asdMemFree(void *block); // declcheck: local (the shared declaration does not compile here or changes this unit)
void btlTalkBustUpDestroy(void);
void runWinDestroy(void);
void handleArray10Free(void *handles); // declcheck: local (the shared declaration does not compile here or changes this unit)

extern CampCecRecv *g_campCecRecv;

/* Tears down the receive screen: frees what it set up, stops its task and frees the work area (after a
 * reception only the two message buffers and the first script are left to free). */
void campCecRecvDestroy(void)
{
    CampCecRecv *recv = g_campCecRecv;

    if (recv->resources.received != 0) {
        if (recv->resources.buffers[2] != NULL) {
            asdMemFree(recv->resources.buffers[2]);
        }
        if (recv->resources.buffers[3] != NULL) {
            asdMemFree(recv->resources.buffers[3]);
        }
        if (recv->resources.scripts[0] != NULL) {
            scrScriptProcessDestroy(recv->resources.scripts[0]);
        }
        jobStop(recv->task, 0);
        asdMemFree(recv);
        g_campCecRecv = NULL;
        return;
    }
    dataTableFree(37);
    btlTalkBustUpDestroy();
    if (recv->resources.buffers[0] != NULL) {
        asdMemFree(recv->resources.buffers[0]);
    }
    if (recv->resources.buffers[1] != NULL) {
        asdMemFree(recv->resources.buffers[1]);
    }
    if (recv->resources.buffers[2] != NULL) {
        asdMemFree(recv->resources.buffers[2]);
    }
    if (recv->resources.buffers[3] != NULL) {
        asdMemFree(recv->resources.buffers[3]);
    }
    if (recv->resources.buffers[4] != NULL) {
        asdMemFree(recv->resources.buffers[4]);
    }
    if (recv->resources.buffers[5] != NULL) {
        asdMemFree(recv->resources.buffers[5]);
    }
    if (recv->resources.scripts[0] != NULL) {
        scrScriptProcessDestroy(recv->resources.scripts[0]);
    }
    if (recv->resources.scripts[1] != NULL) {
        scrScriptProcessDestroy(recv->resources.scripts[1]);
    }
    handleArray10Free(recv->handles);
    runWinDestroy();
    jobStop(recv->task, 0);
    asdMemFree(recv);
    g_campCecRecv = NULL;
}

} /* extern "C" */
