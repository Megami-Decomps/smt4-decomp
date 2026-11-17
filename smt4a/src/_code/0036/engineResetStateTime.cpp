#include "map/LmapViewGlobals.h"

extern "C" {

void engineResetStateTime(void)
{
    g_lmapViewHolder.view->heightBias = 0.0f;
}

} /* extern "C" */
