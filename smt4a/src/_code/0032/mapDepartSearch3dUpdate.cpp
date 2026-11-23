#include "map/MapDepartJobWorkA.h"

extern "C" {

extern MapDepart *g_mapDepart;
void FUN_002dd40c(void);

/* The SEARCH3D task's update (registered by mapDepartInit): in steps 5 and 6 (unless the departure is
 * MAP_DEPART_MODE_ITEM_PAIR) and in step 14 it runs FUN_002dd40c. */
s32 mapDepartSearch3dUpdate(u32 process)
{
    MapDepartJobWorkA *work = (MapDepartJobWorkA *)g_mapDepart;

    if (work->state >= 2) {
        if (work->state < 18) {
            switch (work->state) {
            case 5:
            case 6:
                if (work->mode != MAP_DEPART_MODE_ITEM_PAIR) {
                    FUN_002dd40c();
                }
                break;
            case 10:
            case 11:
                break;
            case 14:
                FUN_002dd40c();
                break;
            }
        }
    }
    return 0;
}

} /* extern "C" */
