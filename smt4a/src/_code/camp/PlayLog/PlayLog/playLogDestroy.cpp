/* Closes the play log screen: releases what it acquired and frees the work area. */
#include "common.h"
#include "camp/PlayLog/PlayLog.h"

extern "C" {

int ifTouchRegionRemove(void);
int asdMemFree(void *ptr);               /* heap free */
int asdTMTexTableReleaseNode(int type, int index);
int dataTableFree(int id);
int asdTMTexTableFreeEntry(int type);

extern PlayLogWorkA *g_playLog;

void playLogDestroy(void)
{
    PlayLogWorkA *log = g_playLog;
    int i;

    asdTMTexTableReleaseNode(0x25, 0);
    asdTMTexTableFreeEntry(0x25);
    dataTableFree(0x37);
    for (i = 0; i < log->count; i++) {
        ifTouchRegionRemove();
    }
    if (log != NULL) {
        asdMemFree(log);
        g_playLog = NULL;
    }
}

} /* extern "C" */
