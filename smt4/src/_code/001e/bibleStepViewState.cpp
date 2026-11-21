/* NON_MATCHING: the per-mode views (Obj4223c4(mode), Obj4223f8, Obj422448) and the shared store-and-start tail after case 4 match; retail loads work->view only on the default path (the build loads it before the jump table), loads the mode before the size constant, and shares one `return 0` block where the build returns from case 0 directly. */
#include "bible/bibleMain.h"
#include "classes/Obj4223c4.h"
#include "classes/Obj4223f8.h"
#include "classes/Obj422448.h"

extern "C" {
extern BibleGlobals g_bible;

/* The bible screen's state machine: builds the view for the requested mode (0), runs it (1), then
 * closes and destroys it (2); returns -1 once finished (3). */
u32 bibleStepViewState(void)
{
    BibleWork *work = g_bible.work;

    switch (work->unk0d) {
    case 0: {
        BibleView *view = work->view;
        switch (g_bible.mode) {
        case 0:
            view = new Obj4223c4(0);
            break;
        case 1:
            view = new Obj4223c4(1);
            break;
        case 2:
            view = new Obj4223f8;
            break;
        case 3:
            view = new Obj422448;
            break;
        case 4:
            view = new Obj4223f8(work->unk10);
            break;
        }
        work->view = view;
        view->start();
        work->unk0d = 1;
        return 0;
    }
    case 1:
        if (work->view != NULL) {
            if (work->view->isReady() != 0) {
                work->unk0d = 2;
            }
        }
        return 0;
    case 2:
        if (work->view != NULL) {
            work->unk0d = 3;
            work->done = 1;
            g_bible.mode = -1;
            work->view->stop();
            delete work->view;
            work->view = NULL;
        }
        return 0;
    case 3:
        return 0xFFFFFFFF;
    }
    return 0;
}

} /* extern "C" */
