#include "battle/BattleColorOverlay.h"
#include "battle/BtlMainGlobals.h"
#include "battle/btlMain.h"

/* Draws the battle's full-screen color overlay on the top screen. */
extern "C" s32 btlDrawTopColorOverlay(u32 job)
{
    u32 color = g_btlMainState.state->slotColorFade.baseColor[0];
    btlDrawColorOverlay<true>(color);
    return 0;
}
