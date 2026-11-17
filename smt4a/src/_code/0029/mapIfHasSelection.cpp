#include "map/MapIfGlobals.h"

extern "C" {

bool mapIfHasSelection(void)
{
    return g_mapIf.state->unk40 != 0xFF;
}

} /* extern "C" */
