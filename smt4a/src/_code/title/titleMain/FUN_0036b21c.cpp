/* NON_MATCHING: register allocation only: retail keeps one more callee-saved register live (fp, stack frame 20 vs 16) and hoists the sprite pointers and float constants differently */
#include "camp/RenderCtx.h"
#include "title/titleMain.h"
#include "shard/W6_W6Match3_ExtendedRecordCall.h"

/* A title-screen sprite: position, opacity and the texture frame it shows. */
struct TitleSprite {
    /* 0x00 */ s32 x;
    /* 0x04 */ s32 y;
    /* 0x08 */ f32 alpha;
    /* 0x0c */ u8 unk0c[0x18];
    /* 0x24 */ u32 texture;
    /* 0x28 */ u32 frame;
    /* 0x2c */ u8 unk2c[0xc];
};

/* The title block's drawn part (g_titleMain.title). */
struct TitleScreenView {
    /* 0x000 */ u8 unk000[0x9c];
    /* 0x09c */ u8 menuA[0x38];
    /* 0x0d4 */ u8 menuB[0x38];
    /* 0x10c */ TitleSprite sprites[6];
};

/* The texture-table entry for a texture: the size of its first frame. */
struct TitleTextureSize {
    /* 0x00 */ s16 width;
    /* 0x02 */ s16 height;
};

struct TitleTextureEntry {
    /* 0x00 */ u8 unk00[0xc];
    /* 0x0c */ TitleTextureSize *size;
};

typedef char TitleScreenViewLayoutCheck[sizeof(TitleSprite) == 0x38 &&
    offsetof(TitleScreenView, sprites) == 0x10c && sizeof(TitleScreenView) == 0x25c ? 1 : -1];

extern "C" {

void FUN_00157558(RenderCtxA *context);
u32 FUN_001692ac(u32 value, bool enabled);
f32 renderCtxCalculateStereoParallax(RenderCtxA *context, f32 depth);
void FUN_001835b4(s32 layer, u32 texture, u32 frame, s32 x, s32 y, u32 order);
TitleTextureEntry *FUN_001834a4(u32 texture, u32 frame);
void efctSetSpeed(f32 alpha);
void FUN_0034dc3c(void *menu);
u32 packNibblesAndByte(s32 a, s32 b, u32 byte);
void skinObjectUpdateMatrices(RenderCtxA *context);
void renderCtxResetColorScale(RenderCtxA *context);

extern RenderCtxA *g_renderCtx;
extern TitleMainGlobals g_titleMain;

/* Draws a sprite at its stereo-shifted position with its own opacity, if it is visible. */
static __inline void titleDrawSprite(TitleSprite *sprite, u32 order)
{
    s32 offset;

    if (sprite->alpha <= 0.0f) {
        return;
    }
    offset = (s32)renderCtxCalculateStereoParallax(g_renderCtx, 0.26f);
    efctSetSpeed(sprite->alpha);
    FUN_001835b4(2, sprite->texture, sprite->frame, sprite->x + offset, sprite->y, order);
    efctSetSpeed(1.0f);
}

/* Draws the title screen's sprites and menus. */
u32 FUN_0036b21c(void)
{
    TitleScreenView *title = (TitleScreenView *)g_titleMain.title;
    TitleTextureEntry *entry;
    TitleSprite *sprite;
    TitleSprite *last;
    s32 width;
    s32 height;

    FUN_00157558(g_renderCtx);
    renderCtxPushA(g_renderCtx, FUN_001692ac(1, false));
    FUN_001835b4(2, 0x2a, 5000, (s32)renderCtxCalculateStereoParallax(g_renderCtx, 0.27f), 0, 0xb);
    titleDrawSprite(&title->sprites[3], 6);
    titleDrawSprite(&title->sprites[4], 6);
    FUN_0034dc3c(title->menuA);
    FUN_0034dc3c(title->menuB);
    titleDrawSprite(&title->sprites[1], 0xb);
    titleDrawSprite(&title->sprites[0], 0x10);
    titleDrawSprite(&title->sprites[2], 0x10);
    entry = FUN_001834a4(0x2a, 3);
    last = &title->sprites[5];
    width = entry->size->width;
    height = entry->size->height;
    if (!(last->alpha <= 0.0f)) {
        s32 offset = (s32)renderCtxCalculateStereoParallax(g_renderCtx, 0.26f);

        efctSetSpeed(last->alpha);
        renderCtxSetB(g_renderCtx, packNibblesAndByte(6, 1, 0));
        texTableRecordCallExtended(2, last->texture, last->frame, last->x + offset, last->y, width, height, 0x10);
        renderCtxSetB(g_renderCtx, packNibblesAndByte(6, 7, 0));
        efctSetSpeed(1.0f);
    }
    efctSetSpeed(1.0f);
    renderStackPop(&g_renderCtx->stackA);
    skinObjectUpdateMatrices(g_renderCtx);
    renderCtxResetColorScale(g_renderCtx);
    return 0;
}

} /* extern "C" */
