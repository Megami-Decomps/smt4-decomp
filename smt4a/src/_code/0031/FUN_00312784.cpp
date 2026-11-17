#include "map/MapGimicGlobal.h"

extern "C" {


/* Script command: raises the map gimic script flag 4. */
u32 FUN_00312784(void)
{
    g_mapGimic->scriptFlags[4] = 1;
    return 1;
}

} /* extern "C" */
