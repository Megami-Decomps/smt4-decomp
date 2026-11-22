/* NON_MATCHING: 32 lines; retail has a 36-byte frame (the halo sprite address spills to [sp, #28]; 20 bytes and [sp, #12] here) and adds the title x before the parallax (add r9, r8, r0) where the build swaps the operands */
#include "ui/UiSpriteApi.h"
#include "common.h"
#include "camp/RenderCtxA.h"
#include "gfx/StereoParallax.h"
#include "shard/TextureDrawCall.h"
#include "util/BitsAndBytes.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"
#include "gamedata/SaveSlotTable.h"

/* unit-local: the save list work's sprites, as saveListDraw reads them (title, the selected row, the halo) */
struct SaveSlotHud {
    /* 0x0000 */ u8 unk0000[0xe8c];
    /* 0x0E8C */ UiSpriteState titleSprite;
    /* 0x0F18 */ UiSpriteState cardSprite;  /* the selected slot's row */
    /* 0x0FA4 */ u8 unk0fa4[0x197c - 0xfa4];
    /* 0x197C */ UiSpriteState haloSprite;
};

extern "C" {

void efctSetSpeed(f32 speed);

/* Draws the save slot panel (three-part frames at the title sprite) and, when a
 * card is shown for the selected slot, the card's frame and highlight. */
void FUN_0037e8a4(SaveSlotHud *hud, f32 alpha)
{
    s32 baseX = vec2GetXInt(&hud->titleSprite);
    s32 baseY = vec2GetYInt(&hud->titleSprite);
    s32 x = baseX + (s32)renderCtxCalculateStereoParallax(g_renderCtx, 0.26f);
    efctSetSpeed(vec2GetSpeed(&hud->titleSprite) * alpha);
    for (s32 i = 0; i < 3; i++)
        texDrawTableEntryAtStoredOrigin(2, 0x14, 0xc08 + i, x, baseY, 0xbf);
    texDrawTableEntryAtStoredOrigin(2, 0x14, 0xbe1, baseX + (s32)renderCtxCalculateStereoParallax(g_renderCtx, 0.26f),
                                    baseY, 0xc4);

    UiSpriteState *card = &hud->cardSprite;
    if (uiSpriteGetCompletionState(card) == 0 || saveSlotFindSelected() == NULL)
        return;

    s32 cardX = vec2GetXInt(card);
    s32 cardY = vec2GetYInt(card);
    TextureTableEntryIV *frame = asdTMTexTableEntryAt(0x14, 0xbd9);
    s32 frameX = (s32)renderCtxCalculateStereoParallax(g_renderCtx, 0.26f) + cardX + frame->x;
    s32 frameY = frame->y + cardY;
    /* both opacities are read and not used (retail keeps the two loads) */
    vec2GetSpeed(&hud->haloSprite);
    vec2GetSpeed(card);
    renderCtxSetStackTop(g_renderCtx, RENDER_STACK_B, packNibblesAndByte(6, 1, 0));
    for (s32 i = 0; i < 3; i++)
        texDrawTableEntryAtStoredOrigin(2, 0x14, 0xbe2 + i, frameX, frameY, 0xbf);

    TextureTableEntryIV *marker = asdTMTexTableEntryAt(0x14, 0xc16);
    s32 markerX = marker->x + ((s32)renderCtxCalculateStereoParallax(g_renderCtx, 0.26f) + cardX);
    s32 markerY = marker->y + cardY;
    efctSetSpeed(vec2GetSpeed(&hud->haloSprite) * alpha);
    for (s32 i = 0; i < 3; i++)
        texDrawTableEntryAtStoredOrigin(2, 0x14, 0xc01 + i, markerX, markerY, 0xc4);
    efctSetSpeed(alpha);
    renderCtxSetStackTop(g_renderCtx, RENDER_STACK_B, packNibblesAndByte(6, 7, 0));
}

} /* extern "C" */
