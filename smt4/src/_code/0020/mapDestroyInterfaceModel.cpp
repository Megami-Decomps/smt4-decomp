#include "map/MapIfGlobals.h"

extern "C" {
void asdMdlManagerDestroy(AsdMdlObject *model);
/* Destroys the second action marker's model and clears its slot. */
void mapDestroyInterfaceModel(void)
{
    MapIfModelSlot *slot = &g_mapIf.state->slots[2];
    asdMdlManagerDestroy(slot->model);
    slot->model = NULL;
    slot->active = 0;
}
}
