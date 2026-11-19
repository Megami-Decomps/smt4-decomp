#include "shard/S1ListPanel.h"
#include "shard/W5_W5Match1_RecordKeys.h"
#include "ui/UiSpriteApi.h"
#include "text/TextDraw.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"
#include "camp/RenderCtxTitle.h"
struct TitleBannerView {
    u8 prefix[0x164];
    Point2 origin;
    u8 unk16C[0xA84 - 0x16C];
    u8 complete;
    u8 unkA85;
    u8 closing;
    u8 unkA87;
    UiSpriteState sprite;
};
struct TitleTextColor { u8 prefix[0xC]; u32 color; };
typedef char TitleBannerSpriteOffset[offsetof(TitleBannerView, sprite) == 0xA88 ? 1 : -1];
extern "C" {
extern const u8 DAT_00404c48[];
extern TitleTextColor DAT_0044cdc8;
void pairCopy(const Point2 *source, Point2 *destination);
u32 renderCtxPackPassFlags(u32 mode, u32 flags);
void renderStackPushIndexed(RenderCtx *context, s32 stack, u32 state);
void renderCtxPopState(RenderCtx *context, s32 stack);
void efctSetSpeed(f32 speed);
void gxResetColorQuadToWhite(void);
void texDrawCompositeSprite(u32 layer, u32 group, u32 index, s32 x, s32 y, u32 color);
void __aeabi_memcpy4(void *destination, const void *source, u32 size);
f32 fontMeasureTextWidth(const u8 *text, s32 mode, f32 scale); // declcheck: local (including ui/AnimatedMessage.h does not compile here: its renderCtxPackPassFlags and renderStackPushIndexed prototypes differ from this unit's)

/* Draws the title banner and its centered caption; marks it complete once its closing animation ends. */
void FUN_0039ba2c(TitleBannerView *banner)
{
    Point2 origin;
    pairCopy(&banner->origin, &origin);
    renderStackPushIndexed(g_titleScene, 3, renderCtxPackPassFlags(1, 0));
    efctSetSpeed(1.0f);
    gxResetColorQuadToWhite();
    texDrawCompositeSprite(2, 28, 28, (s32)((f32)vec2GetXInt(&banner->sprite) + origin.x), (s32)origin.y, 211);
    TextureTableEntryIV *info = asdTMTexTableEntryAt(28, 0x111B);
    u8 text[64];
    __aeabi_memcpy4(text, DAT_00404c48, 45);
    s32 textWidth = (s32)fontMeasureTextWidth(text, 2, 0.0f);
    f32 center = (f32)((info->placement->width - textWidth) / 2);
    f32 x = (f32)(vec2GetXInt(&banner->sprite) + info->x) + center + origin.x;
    textDrawString(x, (f32)info->y + origin.y, 0.0f, 2, 0.0f, DAT_0044cdc8.color, 1.0f, reinterpret_cast<const char *>(text));
    renderCtxPopState(g_titleScene, 3);
    efctSetSpeed(1.0f);
    uiSpriteAdvanceAnimation(&banner->sprite);
    if (banner->closing && uiSpriteGetCompletionState(&banner->sprite))
        banner->complete = 1;
}
}
