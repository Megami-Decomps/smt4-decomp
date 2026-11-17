#include "map/MapIfGlobals.h"

extern "C" {
void asdMdlManagerDestroy(AsdMdlObject *model);
void asdTMTexTableReleaseNode(u32 table, u32 index);
/* Destroys the fast-travel marker's model and releases its texture node. */
void FUN_002dfea4(void)
{
    MapIfModelSlot *slot = &g_mapIf.state->slots[0];
    asdMdlManagerDestroy(slot->model);
    slot->model = NULL;
    slot->active = 0;
    asdTMTexTableReleaseNode(10, 37);
}
}
