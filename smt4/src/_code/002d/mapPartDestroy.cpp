#include "map/MapIfGlobals.h"

extern "C" {
void asdMdlManagerDestroy(AsdMdlObject *model);
/* Destroys the first action marker's model and clears its slot. */
void mapPartDestroy(void)
{
    MapIfModelSlot *part = &g_mapIf.state->slots[1];
    asdMdlManagerDestroy(part->model);
    part->model = NULL;
    part->active = 0;
}
}
