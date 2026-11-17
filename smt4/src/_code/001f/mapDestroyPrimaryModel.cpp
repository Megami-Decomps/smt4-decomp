#include "map/MapIfGlobals.h"

extern "C" {
void asdMdlManagerDestroy(AsdMdlObject *model);
/* Destroys the fast-travel marker's model and clears its slot. */
void mapDestroyPrimaryModel(void)
{
    MapIfModelSlot *slot = &g_mapIf.state->slots[0];
    asdMdlManagerDestroy(slot->model);
    slot->model = NULL;
    slot->active = 0;
}
}
