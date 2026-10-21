#include "map/mapDepart.h"

extern "C" {

extern MapDepartExtra *g_deferredMapModels;

void mapDepartClearExtra(void)
{
    MapDepartExtra *extra = g_deferredMapModels;

    extra->unkE3E = 0;
    extra->unkE40 = 0;
}

} /* extern "C" */
