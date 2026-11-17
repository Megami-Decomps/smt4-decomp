#include "map/MapIfGlobals.h"

extern "C" {

void infoWinStartTimer(s32 arg);
void jobStop(u32 job, s32 arg);
s32 infoWindowIsActive(void);

void mapIfDestroy(void)
{
    MapIfState *state = g_mapIf.state;

    if (state->unk18 != 0 && infoWindowIsActive() != 0) {
        state->unk18 = 0;
        infoWinStartTimer(1);
    }
    jobStop(state->job, 0);
}

} /* extern "C" */
