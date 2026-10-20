/* Closes the play log screen: releases what it acquired and frees the work area. */
#include "common.h"
#include "camp/PlayLog/PlayLog.h"

extern "C" {

int FUN_001641c4(void);
int asdMemFree(void *ptr);               /* heap free */
int FUN_0019a7f4(int type, int index);
int FUN_001add24(int id);
int asdTMTexTableFreeEntry(int type);

extern PlayLogWorkA *g_playLog;

void playLogDestroy(void)
{
    PlayLogWorkA *log = g_playLog;
    int i;

    FUN_0019a7f4(0x25, 0);
    asdTMTexTableFreeEntry(0x25);
    FUN_001add24(0x37);
    for (i = 0; i < log->count; i++) {
        FUN_001641c4();
    }
    if (log != NULL) {
        asdMemFree(log);
        g_playLog = NULL;
    }
}

} /* extern "C" */
