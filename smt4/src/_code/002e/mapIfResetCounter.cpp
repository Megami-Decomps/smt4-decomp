#include "map/MapIfGlobals.h"

extern "C" {

void asdMdlManagerMarkDestroy(AsdMdlObject *model);

void mapIfResetCounter(void)
{
    MapIfState *state = g_mapIf.state;

    asdMdlManagerMarkDestroy(state->slots[0].model);
    state->unkCCD8 = 0;
    state->unkCCDC = 0;
}

} /* extern "C" */
