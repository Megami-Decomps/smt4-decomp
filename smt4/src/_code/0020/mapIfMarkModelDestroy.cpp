#include "map/MapIfGlobals.h"

extern "C" {

s32 asdMdlManagerMarkDestroy(AsdMdlObject *model);

/* Mark the map interface's fast-travel marker model for destruction. */
void mapIfMarkModelDestroy(void)
{
    MapIfModelSlot *slot = &g_mapIf.state->slots[0];
    asdMdlManagerMarkDestroy(slot->model);
}

}
