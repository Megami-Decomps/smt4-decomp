/* NON_MATCHING: view allocation/constructor contracts agree; initial global registers and allocation-case common-tail placement differ. */
#include "bible/bibleMain.h"
#include "classes/Obj55c89c.h"
#include "classes/Obj55c8d0.h"

extern "C" BibleGlobals g_bible;

/* Creates the selected page, waits for completion, then closes and destroys its view. */
extern "C" u32 biblePollViewLifecycle()
{
    BibleWork *work = g_bible.work;
    switch (work->unk0d) {
    case 0:
        switch (g_bible.mode) {
        case 0: work->view = new Obj55c89c(0); break;
        case 1: work->view = new Obj55c89c(1); break;
        case 2: work->view = new Obj55c8d0; break;
        case 3: work->view = new Obj55c8d0(work->unk10); break;
        }
        work->view->start();
        work->unk0d = 1;
        break;
    case 1:
        if (work->view != NULL && work->view->isReady() != 0) {
            work->unk0d = 2;
        }
        break;
    case 2:
        if (work->view != NULL) {
            work->unk0d = 3;
            work->done = 1;
            g_bible.mode = -1;
            work->view->stop();
            delete work->view;
            work->view = NULL;
        }
        break;
    case 3:
        return static_cast<u32>(-1);
    }
    return 0;
}
