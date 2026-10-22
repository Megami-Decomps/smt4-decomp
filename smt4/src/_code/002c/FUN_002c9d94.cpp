#include "bible/bibleMain.h"

extern "C" {
extern BibleGlobals g_bible;
void* jyoucyuGetTableEntry(s32);

// Close the current compendium view and return to the resident table.
void FUN_002c9d94()
{
    BibleWork* work = g_bible.work;
    work->done = 1;
    g_bible.mode = -1;
    if (work->view != NULL) {
        work->view->stop();
        if (work->view != NULL) {
            delete work->view;
        }
        work->view = NULL;
    }
    jyoucyuGetTableEntry(0);
}
}
