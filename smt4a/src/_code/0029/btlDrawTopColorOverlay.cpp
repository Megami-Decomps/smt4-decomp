#include "battle/BattleColorOverlay.h"
#include "battle/BtlGlobals.h"
#include "battle/BtlMainAccess.h"

/* Draws the battle's full-screen color overlay on the top screen. */
extern "C" s32 btlDrawTopColorOverlay(u32 job)
{
    const BtlMainStateExtA *state = (const BtlMainStateExtA *)g_btlMain.state;
    u32 color = state->slotColorFade.baseColor[0];
    btlDrawColorOverlay<true>(color);
    return 0;
}
