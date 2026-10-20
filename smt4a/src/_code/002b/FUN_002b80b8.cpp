#include "map/lmapMain.h"
#include "map/mapDepart.h"

extern "C" {

void FUN_002d8c90(s32 state);
s32 FUN_0014bef4(s32 arg);

extern LmapEventA *g_popupState;

void FUN_002b80b8(void)
{
    if (g_popupState->state == 0 || g_popupState->state == 0x12) {
        return;
    }
    if (FUN_0014bef4(99) + 1 <= 10) {
        FUN_002d8c90(0x12);
        return;
    }
}

} /* extern "C" */
