#include "shard/W5_W5Match2_MapInterfaceWork.h"

extern "C" {

extern MapInterfaceWork *g_mapIf;
void FUN_00295ba4(s32 enabled);

/* Clear the active map interface and notify its controller. */
void mapIfClearActivity(void)
{
    if (g_mapIf->active != 0) {
        g_mapIf->active = 0;
        g_mapIf->counter = 0;
        FUN_00295ba4(1);
    }
}

}
