#include "shard/W5_W5Match2_MapInterfaceWork.h"

extern "C" {

extern MapInterfaceWork *g_mapIf;
void infoWinStartTimer(s32 enabled);

/* Clear the active map interface and notify its controller. */
void mapIfClearActivity(void)
{
    if (g_mapIf->active != 0) {
        g_mapIf->active = 0;
        g_mapIf->counter = 0;
        infoWinStartTimer(1);
    }
}

}
