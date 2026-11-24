#include "saveLoadUI/SaveSlotRow.h"
#include "shard/W9_W9Match8_WorkRecords.h"
#include "camp/RenderCtxA.h"
#include "shard/S1ListPanel.h"
#include "util/BitsAndBytes.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"

extern "C" {
void efctSetSpeed(f32 speed);
void gxResetColorQuadToWhite();
void texDrawCompositeSprite(s32 layer, u32 group, u32 sprite, s32 x, s32 y, s32 priority);

/* Draws the marker at its position with its own speed, then restores the renderer's blend state and the speed. */
void saveSlotDrawSelectionMarker(const SaveLoadTransitionValues *marker, const TextureTableEntryIV *sprite)
{
    SaveLoadTransitionValues draw;
    draw.values = marker->values;
    draw.progress = marker->progress;
    draw.offset.x += sprite->x;
    draw.offset.y += sprite->y;
    RenderCtxA *context = g_renderCtx;
    renderCtxPushB(context, packNibblesAndByte(6, 1, 0));
    efctSetSpeed(draw.progress);
    gxResetColorQuadToWhite();
    texDrawCompositeSprite(2, 0x2b, 6, draw.offset.x, draw.offset.y, 2);
    renderStackPop(g_renderCtx->stacks + RENDER_STACK_B);
    efctSetSpeed(1.0f);
}
} /* extern "C" */
