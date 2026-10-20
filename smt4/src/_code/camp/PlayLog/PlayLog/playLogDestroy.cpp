/* Closes the play log screen: releases what it acquired and frees the work area. */
#include "common.h"
#include "camp/PlayLog/PlayLog.h"

extern "C" {

int fileSlotFree(int id);
int asdTMTexTableReleaseNode(int type, int index);
int ifTouchRegionRemove(void);
int asdMemFree(void *ptr);               /* heap free */

extern PlayLogWork *g_playLog;

void playLogDestroy(void)
{
    PlayLogWork *log = g_playLog;
    int i;

    asdTMTexTableReleaseNode(0x30, 0);
    fileSlotFree(0x37);
    for (i = 0; i < log->count; i++) {
        ifTouchRegionRemove();
    }
    if (log != NULL) {
        asdMemFree(log);
        g_playLog = NULL;
    }
}

} /* extern "C" */
