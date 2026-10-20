#include "map/lmapMain.h"
#include "map/mapDepart.h"

extern "C" {

void FUN_00203d04(s32 arg);

extern LmapEventA *g_popupState;

void FUN_00246688(void)
{
    LmapEventA *event = g_popupState;

    event->state = 0;
    event->unk04 = 0;
    FUN_00203d04(1);
}

} /* extern "C" */
