/* NON_MATCHING: 10 lines, all in the last sprite: retail keeps its draw order in r9 (as for the other
 * sprites) and the frame's width in sl; this build swaps the two registers. */
#include "gfx/StereoParallax.h"
#include "camp/RenderCtx.h"
#include "shard/TextureDrawCall.h"
#include "title/titleMain.h"
#include "shard/W6_W6Match3_ExtendedRecordCall.h"
#include "Model/MoriModelShadowMap.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"
#include "AsdSDK/Source/Sys/Mem/AsdMemory.h"
#include "util/BitsAndBytes.h"

extern "C" {

void FUN_0034dc3c(ClippedSprite *sprite);
void skinObjectUpdateMatrices(RenderCtxA *context);
void renderCtxResetColorScale(RenderCtxA *context);

extern TitleMainGlobals g_titleMain;

} /* extern "C" */

enum {
    TITLE_TEXTURE_TABLE = 0x2A,
    TITLE_BACKGROUND_IMAGE = 5000,
    TITLE_FRAME_IMAGE = 3          /* its placement gives the size the last sprite is stretched to */
};

/* Draws a sprite at its stereo-shifted position with its own opacity, if it is visible. */
static __inline void titleDrawSprite(TitleSpriteA *sprite, u32 order)
{
    s32 offset;

    if (sprite->alpha <= 0.0f) {
        return;
    }
    offset = (s32)renderCtxCalculateStereoParallax(g_renderCtx, 0.26f);
    efctSetSpeed(sprite->alpha);
    texDrawTableEntryAtStoredOrigin(2, sprite->table, sprite->image, sprite->x + offset, sprite->y, order);
    efctSetSpeed(1.0f);
}

/* The same, stretched to `width` by `height` and drawn with blend mode 1 instead of 7. */
static __inline void titleDrawSpriteSized(TitleSpriteA *sprite, u32 order, s32 width, s32 height)
{
    s32 offset;

    if (sprite->alpha <= 0.0f) {
        return;
    }
    offset = (s32)renderCtxCalculateStereoParallax(g_renderCtx, 0.26f);
    efctSetSpeed(sprite->alpha);
    renderCtxSetB(g_renderCtx, packNibblesAndByte(6, 1, 0));
    texTableRecordCallExtended(2, sprite->table, sprite->image, sprite->x + offset, sprite->y, width, height, order);
    renderCtxSetB(g_renderCtx, packNibblesAndByte(6, 7, 0));
    efctSetSpeed(1.0f);
}

/* Draws the title screen: the background, then the sprites and the two menu sprites back to front,
 * each shifted by the stereo parallax of its depth. The sprite being drawn is a local pointer: retail
 * keeps each sprite's address in a register of its own, and takes the last one's before it looks the
 * frame image up. */
extern "C" u32 titleMainDraw(void)
{
    TitleMainA *title = g_titleMain.title;
    TextureTableEntryIV *frame;
    TitleSpriteA *sprite;

    renderCtxSelectDisplayAreaForStereoMode(g_renderCtx);
    renderCtxPushA(g_renderCtx, renderCtxPackPassFlags(1, false));
    texDrawTableEntryAtStoredOrigin(2, TITLE_TEXTURE_TABLE, TITLE_BACKGROUND_IMAGE,
                                    (s32)renderCtxCalculateStereoParallax(g_renderCtx, 0.27f), 0, 11);
    sprite = &title->sprites[3];
    titleDrawSprite(sprite, 6);
    sprite = &title->sprites[4];
    titleDrawSprite(sprite, 6);
    FUN_0034dc3c(&title->menuSprites[0]);
    FUN_0034dc3c(&title->menuSprites[1]);
    sprite = &title->sprites[1];
    titleDrawSprite(sprite, 11);
    sprite = &title->sprites[0];
    titleDrawSprite(sprite, 16);
    sprite = &title->sprites[2];
    titleDrawSprite(sprite, 16);
    sprite = &title->sprites[5];
    frame = asdTMTexTableEntryAt(TITLE_TEXTURE_TABLE, TITLE_FRAME_IMAGE);
    titleDrawSpriteSized(sprite, 16, frame->placement->width, frame->placement->height);
    efctSetSpeed(1.0f);
    renderStackPop(g_renderCtx->stacks + RENDER_STACK_A);
    skinObjectUpdateMatrices(g_renderCtx);
    renderCtxResetColorScale(g_renderCtx);
    return 0;
}
