/* Closes the play log screen: releases what it acquired and frees the work area. */
#include "common.h"
#include "camp/PlayLog/PlayLog.h"

extern "C" {

int FUN_002a46d8(int id);
int FUN_002ae898(int type, int index);
int FUN_002b8cc8(void);
int asdMemFree(void *ptr);               /* heap free */

extern PlayLogWork *g_playLog;

void playLogDestroy(void)
{
    PlayLogWork *log = g_playLog;
    int i;

    FUN_002ae898(0x30, 0);
    FUN_002a46d8(0x37);
    for (i = 0; i < log->count; i++) {
        FUN_002b8cc8();
    }
    if (log != NULL) {
        asdMemFree(log);
        g_playLog = NULL;
    }
}

} /* extern "C" */
