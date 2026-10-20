#include "map/mapGimic.h"

extern "C" {

extern MapGimic *DAT_00580ca0;

bool FUN_00377fe0(void)
{
    if (DAT_00580ca0->unk04 != 0) {
        return false;
    }
    return true;
}

} /* extern "C" */
