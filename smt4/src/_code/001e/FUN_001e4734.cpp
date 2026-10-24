/* NON_MATCHING: state machine, per-mode views (Obj4223c4(mode), Obj4223f8, Obj422448) and virtual calls match; armcc loads the size constants into different registers and emits the five-way `new` blocks in a different order from retail's switch table, so the jump-table offsets differ. */
#include "bible/bibleMain.h"
#include "classes/Obj4223c4.h"
#include "classes/Obj4223f8.h"
#include "classes/Obj422448.h"

extern "C" {
extern BibleGlobals g_bible;

/* The bible screen's state machine: builds the view for the requested mode (0), runs it (1), then
 * closes and destroys it (2); returns -1 once finished (3). */
u32 FUN_001e4734(void)
{
    BibleWork *work = g_bible.work;

    switch (work->unk0d) {
    case 0: {
        BibleView *view;
        switch (g_bible.mode) {
        case 0:
            view = new Obj4223c4(0);
            work->view = view;
            break;
        case 1:
            view = new Obj4223c4(1);
            work->view = view;
            break;
        case 2:
            view = new Obj4223f8;
            work->view = view;
            break;
        case 3:
            view = new Obj422448;
            work->view = view;
            break;
        case 4:
            view = new Obj4223f8(work->unk10);
            work->view = view;
            break;
        default:
            view = work->view;
            break;
        }
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
