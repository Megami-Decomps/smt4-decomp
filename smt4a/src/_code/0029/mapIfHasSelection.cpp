#include "map/mapIf.h"

extern "C" {

extern MapIfGlobalsA g_mapIf;

bool mapIfHasSelection(void)
{
    return g_mapIf.state->unk40 != 0xFF;
}

} /* extern "C" */
