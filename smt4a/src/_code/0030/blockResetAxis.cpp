/* NON_MATCHING: literal pool order only: retail places the global address word before the 0.0f and 1.0f words; built places it last. */
#include "map/LmapViewGlobals.h"

extern "C" {

/* Sets the view's context override to `value`, resets its axis timer and points its axis along +Z. */
void blockResetAxis(s32 value)
{
    LmapViewA *view = g_lmapViewHolder.view;

    view->contextOverride = value;
    view->flagB4 = 0;
    view->flagB5 = 0;
    view->timer = 10;
    view->step = 0;
    view->axis.x = 0.0f;
    view->axis.y = 0.0f;
    view->axis.z = 1.0f;
}

} /* extern "C" */
