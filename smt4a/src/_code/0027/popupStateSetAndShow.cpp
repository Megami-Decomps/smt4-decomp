#include "map/lmapMain.h"
#include "map/mapDepart.h"

extern "C" {

void FUN_00152f44(void);
void FUN_00353b00(s32 arg);
s32 gameFlagIsSet(u32 id);

extern LmapEventA *g_popupState;
extern GameStateA g_gameState;

void popupStateSetAndShow(s32 a, s32 b)
{
    LmapEventA *event;

    FUN_00152f44();
    event = g_popupState;
    g_popupState->unk08 = a;
    event->unk0C = b;
    if (g_gameState.unk18 == 0 && gameFlagIsSet(0x49A) != 0 &&
        (gameFlagIsSet(0xC) == 0 || gameFlagIsSet(0x10) != 0) && g_popupState->state == 0) {
        FUN_00353b00(0);
        return;
    }
}

} /* extern "C" */
