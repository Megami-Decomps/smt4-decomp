#include "map/mapDepart.h"

extern "C" {

extern MapDepartExtraA *g_mapNpcWork;

void mapDepartExtraClear(void)
{
    MapDepartExtraA *extra = g_mapNpcWork;

    extra->unkF42 = 0;
    extra->unkF44 = 0;
}

} /* extern "C" */
