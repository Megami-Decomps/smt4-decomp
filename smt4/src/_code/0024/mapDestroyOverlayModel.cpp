#include "map/MapIfGlobals.h"

extern "C" {
void asdMdlManagerDestroy(AsdMdlObject *model);
/* Destroys the fourth action marker's model and clears its slot. */
void mapDestroyOverlayModel(void)
{
    MapIfModelSlot *slot = &g_mapIf.state->slots[4];
    asdMdlManagerDestroy(slot->model);
    slot->model = NULL;
    slot->active = 0;
}
}
