#include "classes/AocMenu.h"
#include "shard/W4_Match3_AocMainA.h"
#include "addon/AocRequestTransition.h"

extern "C" void _ZN7AocMain12queueRequestE17RequestParametersji(AocMainA *, const RequestParameters *, s32, s32);

/* Submit an AOC request, then release its completion callback when it finishes. */
void AocMenu::updateRequestTransition()
{
    AocRequestTransition * work = reinterpret_cast<AocRequestTransition *>(this);
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
    _ZN7AocMain12queueRequestE17RequestParametersji(g_aocMain, &parameters, 50, 0);
    work->transition.phase = 1;
}
