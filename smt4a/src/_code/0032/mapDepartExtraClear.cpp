#include "map/mapDepart.h"

extern "C" {

extern MapDepartExtraA *DAT_00581280;

void mapDepartExtraClear(void)
{
    MapDepartExtraA *extra = DAT_00581280;

    extra->unkF42 = 0;
    extra->unkF44 = 0;
}

} /* extern "C" */
