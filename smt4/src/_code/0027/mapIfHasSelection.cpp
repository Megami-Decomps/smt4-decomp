#include "map/mapIf.h"

extern "C" {

extern MapIfGlobals g_mapIf;

bool mapIfHasSelection(void)
{
    return g_mapIf.state->unk34 != 0xFF;
}

} /* extern "C" */
