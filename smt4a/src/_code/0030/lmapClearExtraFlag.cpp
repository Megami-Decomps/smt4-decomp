#include "map/LmapViewGlobals.h"

extern "C" {


void lmapClearExtraFlag(void)
{
    DAT_005806a0.view->requestActive = 0;
}

} /* extern "C" */
