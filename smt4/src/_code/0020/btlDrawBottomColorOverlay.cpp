#include "battle/BattleColorOverlay.h"
#include "battle/BtlMainGlobals.h"
#include "battle/btlMain.h"

/* Draws the battle's full-screen color overlay on the bottom screen. */
extern "C" s32 btlDrawBottomColorOverlay(u32 job)
{
    u32 color = g_btlMainState.state->slotColorFade.baseColor[1];
    btlDrawColorOverlay<false>(color);
    return 0;
}
