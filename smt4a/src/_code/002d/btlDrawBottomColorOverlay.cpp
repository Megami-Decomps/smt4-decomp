#include "battle/BattleColorOverlay.h"
#include "battle/BtlGlobals.h"
#include "battle/BtlMainAccess.h"

/* Draws the battle's full-screen color overlay on the bottom screen. */
extern "C" s32 btlDrawBottomColorOverlay(u32 job)
{
    const BtlMainStateExtA *state = (const BtlMainStateExtA *)g_btlMain.state;
    u32 color = state->slotColorFade.baseColor[1];
    btlDrawColorOverlay<false>(color);
    return 0;
}
