#include "map/MapIfGlobals.h"
#include "Model/MoriModelContent.h"
#include "classes/Obj557b18.h"
#include "Model/MoriModelManager.h"

extern "C" {

void mapIfReleaseSlot0AndReset(void)
{
    MapIfStateA *state = g_mapIf.state;

    ptrListRemoveClearOwner(g_handleRegistry, state->slots[0].resource->body);
    state->unkCD08 = 0;
    state->unkCD0C = 0;
}

} /* extern "C" */
