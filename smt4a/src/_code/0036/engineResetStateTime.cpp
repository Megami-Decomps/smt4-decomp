#include "map/LmapViewGlobals.h"

extern "C" {

void engineResetStateTime(void)
{
    DAT_005806a0.view->heightBias = 0.0f;
}

} /* extern "C" */
