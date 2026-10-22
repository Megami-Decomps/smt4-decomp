#include "map/MapEnvironment.h"

extern "C" {


extern MapTableGlobals g_mapTable;

/* Returns the u32 at 0x28 of the global at 0x5821c4. */
u32 FUN_002ddd7c(void)
{
    return g_mapTable.unk28;
}

} /* extern "C" */
