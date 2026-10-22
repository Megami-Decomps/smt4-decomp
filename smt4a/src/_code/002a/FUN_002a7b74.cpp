#include "shard/W5_W5Match2_UniteWork.h"

extern "C" {


extern UniteWork *g_unite;

s32 messageMainIsIdle(void);
int obj04Finish(void);

/* Finishes the unite screen's object if it is active and messageMainIsIdle reports 0, then clears the selection. */
void FUN_002a7b74(void)
{
    UniteWork *unite = g_unite;

    if (unite != NULL) {
        if (unite->menu.active != 0 && messageMainIsIdle() == 0) {
            obj04Finish();
        }
        unite = g_unite;
        if (unite != NULL) {
            unite->scriptA.pendingRequest = -1;
        }
    }
}

} /* extern "C" */
