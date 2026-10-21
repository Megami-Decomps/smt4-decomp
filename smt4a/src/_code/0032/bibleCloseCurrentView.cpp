#include "bible/bibleMain.h"

extern "C" {
extern BibleGlobals g_bible;
void* jyoucyuGetTableEntry(s32);

// Close the current compendium view and return to the resident table.
void bibleCloseCurrentView()
{
    BibleWork* work = g_bible.work;
    work->done = 1;
    g_bible.mode = -1;
    if (work->view != NULL) {
        work->view->vtbl->close(work->view);
        if (work->view != NULL) {
            work->view->vtbl->destroy(work->view);
        }
        work->view = NULL;
    }
    jyoucyuGetTableEntry(0);
}
}
