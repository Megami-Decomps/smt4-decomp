#include "map/lmapMain.h"
#include "map/mapDepart.h"

extern "C" {

void dialogClose(s32 arg);

extern LmapEventA *g_popupState;

void FUN_00246688(void)
{
    LmapEventA *event = g_popupState;

    event->state = 0;
    event->unk04 = 0;
    dialogClose(1);
}

} /* extern "C" */
