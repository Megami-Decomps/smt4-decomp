#include "battle/btlMain.h"
#include "battle/BattleCommandController.h"

extern "C" {
extern u32 g_btlPaletteColors[]; /* the palette colours, red in the low byte */

// Start a colour fade on one draw slot, remembering its current colour.
void FUN_00244fb0(BtlMainState *state, u32 slot, u32 palette, u32 param, u32 alpha)
{
    u32 *tint = &g_btlPaletteColors[palette];

    state->slotColorFade.mode[slot] = 4;
    state->slotColorFade.timer[slot] = 0;
    state->slotColorFade.parameters[slot] = param;
    state->slotColorFade.palette[slot] = palette;
    state->slotColorFade.previousColor[slot] = state->slotColorFade.baseColor[slot];
    state->slotColorFade.color[slot] = ((*tint << 24) | (((*tint >> 8) & 0xFF) << 16) | (((*tint >> 16) & 0xFF) << 8)) | alpha;
}
}
