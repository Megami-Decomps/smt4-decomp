#include "map/LmapViewGlobals.h"

extern "C" {


void lmapClearExtraFlag(void)
{
    g_lmapViewHolder.view->requestActive = 0;
}

} /* extern "C" */
