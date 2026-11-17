#include "map/MapIfGlobals.h"

extern "C" {
void asdMdlManagerDestroy(AsdMdlObject *model);
/* Destroys the third action marker's model and clears its slot. */
void mapDestroySecondaryModel(void)
{
    MapIfModelSlot *slot = &g_mapIf.state->slots[3];
    asdMdlManagerDestroy(slot->model);
    slot->model = NULL;
    slot->active = 0;
}
}
