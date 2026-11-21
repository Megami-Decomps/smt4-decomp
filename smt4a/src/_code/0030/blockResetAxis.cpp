#include "map/LmapViewGlobals.h"

extern "C" {

/* Sets the view's context override to `value`, resets its axis timer and points its axis along +Z. */
void blockResetAxis(s32 value)
{
    g_lmapViewHolder.view->contextOverride = value;
    g_lmapViewHolder.view->flagB4 = 0;
    g_lmapViewHolder.view->flagB5 = 0;
    g_lmapViewHolder.view->timer = 10;
    g_lmapViewHolder.view->step = 0;
    g_lmapViewHolder.view->axis.x = 0.0f;
    g_lmapViewHolder.view->axis.y = 0.0f;
    g_lmapViewHolder.view->axis.z = 1.0f;
}

} /* extern "C" */
