#include "addon/aocMain.h"
#include "addon/AocRequestTransition.h"
extern "C" AocMain *g_aocMain;
extern "C" void FUN_002ba968(AocMain *, const RequestParameters *, s32, s32);

/* Submit an AOC request, then release its completion callback when it finishes. */
extern "C" void aocUpdateRequestTransition(AocRequestTransition *work)
{
    switch (work->transition.phase) {
    case 1:
        if ((g_aocMain->flags & 4) != 0) {
            return;
        }
        if ((g_aocMain->flags & 8) != 0) {
            return;
        }
        work->transition.flags = 3;
        work->transition.phase = 0;
        if (work->transition.callback != NULL) {
            work->transition.callback->vtable->destroy(work->transition.callback);
            work->transition.callback = NULL;
        }
        return;
    default:
        return;
    case 0:
        break;
    }
    RequestParameters parameters = work->parameters;
    FUN_002ba968(g_aocMain, &parameters, 50, 0);
    work->transition.phase = 1;
}
