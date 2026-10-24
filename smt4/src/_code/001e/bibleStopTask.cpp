#include "bible/bibleMain.h"

extern "C" {

s32 jyoucyuGetTableEntry(s32 index);
void jobStop(u32 job, s32 arg);

extern BibleGlobals g_bible;

/* Stops the bible screen's task. */
void bibleStopTask(void)
{
    jyoucyuGetTableEntry(0);
    jobStop(g_bible.work->task, 0);
}

} /* extern "C" */
