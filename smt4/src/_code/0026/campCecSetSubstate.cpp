#include "camp/CecMenu.h"

extern "C" {

extern CampCecMenu *g_campCec;

void campCecSetSubstate(u32 value)
{
    if (g_campCec != NULL) {
        g_campCec->substate = value;
    }
}

} /* extern "C" */
