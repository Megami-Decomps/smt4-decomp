/* NON_MATCHING: retail hoists the NULL stored into g_campCecRecv into r6 at entry (`mov r6, #0`); otherwise identical. */
#include "camp/CampCec/CampCecRecv.h"
#include "gamedata/DataTableSections.h"

extern "C" {

void jobStop(u32 job, s32 arg);
void asdMemFree(void *block);
void scrScriptProcessDestroy(void *process);
void btlTalkBustUpDestroy(void);
void runWinDestroy(void);
void handleArray10Free(void *handles);

extern CampCecRecv *g_campCecRecv;

/* Tears down the receive screen: frees what it set up, stops its task and frees the work area. */
void FUN_0037bd00(void)
{
    CampCecRecv *recv = g_campCecRecv;

    if (recv->resources.received == 0) {
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
    } else {
        if (recv->resources.buffers[2] != NULL) {
            asdMemFree(recv->resources.buffers[2]);
        }
        if (recv->resources.buffers[3] != NULL) {
            asdMemFree(recv->resources.buffers[3]);
        }
        if (recv->resources.scripts[0] != NULL) {
            scrScriptProcessDestroy(recv->resources.scripts[0]);
        }
    }
    jobStop(recv->task, 0);
    asdMemFree(recv);
    g_campCecRecv = NULL;
}

} /* extern "C" */
