#include "map/MapIfGlobals.h"

extern "C" {

void infoWinStartTimer(s32 enabled);

/* Clear the active map interface and notify its controller. */
void mapIfClearActivity(void)
{
    if (g_mapIf.state->unk18 != 0) {
        g_mapIf.state->unk18 = 0;
        g_mapIf.state->unk1C = 0;
        infoWinStartTimer(1);
    }
}

}
