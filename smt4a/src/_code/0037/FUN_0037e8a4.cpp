/* NON_MATCHING: 8 lines, the frame only: retail reserves 36 bytes (the halo sprite address spills to [sp, #28]),
 * this build 20 ([sp, #12]). The stereo parallax is one local recomputed before each draw, as retail adds it
 * after the base position. */
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
    s32 parallax = (s32)renderCtxCalculateStereoParallax(g_renderCtx, 0.26f);
    s32 x = baseX + parallax;
    efctSetSpeed(vec2GetSpeed(&hud->titleSprite) * alpha);
    for (s32 i = 0; i < 3; i++)
        texDrawTableEntryAtStoredOrigin(2, 0x14, 0xc08 + i, x, baseY, 0xbf);
    parallax = (s32)renderCtxCalculateStereoParallax(g_renderCtx, 0.26f);
    texDrawTableEntryAtStoredOrigin(2, 0x14, 0xbe1, baseX + parallax, baseY, 0xc4);

    UiSpriteState *card = &hud->cardSprite;
    if (uiSpriteGetCompletionState(card) == 0 || saveSlotFindSelected() == NULL)
        return;

    s32 cardX = vec2GetXInt(card);
    s32 cardY = vec2GetYInt(card);
    TextureTableEntryIV *frame = asdTMTexTableEntryAt(0x14, 0xbd9);
    parallax = (s32)renderCtxCalculateStereoParallax(g_renderCtx, 0.26f);
    s32 frameX = parallax + cardX + frame->x;
    s32 frameY = frame->y + cardY;
    /* both opacities are read and not used (retail keeps the two loads) */
    vec2GetSpeed(&hud->haloSprite);
    vec2GetSpeed(card);
    renderCtxSetStackTop(g_renderCtx, RENDER_STACK_B, packNibblesAndByte(6, 1, 0));
    for (s32 i = 0; i < 3; i++)
        texDrawTableEntryAtStoredOrigin(2, 0x14, 0xbe2 + i, frameX, frameY, 0xbf);

    TextureTableEntryIV *marker = asdTMTexTableEntryAt(0x14, 0xc16);
    parallax = (s32)renderCtxCalculateStereoParallax(g_renderCtx, 0.26f);
    s32 markerX = marker->x + (parallax + cardX);
    s32 markerY = marker->y + cardY;
    efctSetSpeed(vec2GetSpeed(&hud->haloSprite) * alpha);
    for (s32 i = 0; i < 3; i++)
        texDrawTableEntryAtStoredOrigin(2, 0x14, 0xc01 + i, markerX, markerY, 0xc4);
    efctSetSpeed(alpha);
    renderCtxSetStackTop(g_renderCtx, RENDER_STACK_B, packNibblesAndByte(6, 7, 0));
}

} /* extern "C" */
