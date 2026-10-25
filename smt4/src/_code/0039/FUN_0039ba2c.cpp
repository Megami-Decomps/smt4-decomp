/* NON_MATCHING: centered-text VFP scheduling and merged unsigned animation-completion check differ. */
#include "shard/S1ListPanel.h"
#include "shard/W5_W5Match1_RecordKeys.h"
#include "ui/UiSpriteState.h"
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
extern RenderCtx *g_titleScene;
extern const u8 DAT_00404c48[];
extern TitleTextColor DAT_0044cdc8;
void pairCopy(const Point2 *source, Point2 *destination);
u32 FUN_002c5d80(u32 mode, u32 flags);
void FUN_002bee04(RenderCtx *context, s32 stack, u32 state);
void FUN_002bedb0(RenderCtx *context, s32 stack);
void efctSetSpeed(f32 speed);
void FUN_002bed3c(void);
s32 vec2GetXInt(const UiSpriteState *sprite);
void FUN_002bf380(u32 layer, u32 group, u32 index, s32 x, s32 y, u32 color);
SpriteInfo *FUN_002bf4f8(u32 group, u32 id);
void __aeabi_memcpy4(void *destination, const void *source, u32 size);
f32 FUN_0028f4b4(const u8 *text, s32 mode, f32 scale);
void FUN_002be5a4(u32 layer, u32 color, const u8 *text, f32 x, f32 y, f32 scale, f32 angle, f32 alpha);
void FUN_002bf818(UiSpriteState *sprite);

void FUN_0039ba2c(TitleBannerView *banner)
{
    Point2 origin;
    pairCopy(&banner->origin, &origin);
    FUN_002bee04(g_titleScene, 3, FUN_002c5d80(1, 0));
    efctSetSpeed(1.0f);
    FUN_002bed3c();
    FUN_002bf380(2, 28, 28, (s32)((f32)vec2GetXInt((&banner->sprite)) + origin.x), (s32)origin.y, 211);
    SpriteInfo *info = FUN_002bf4f8(28, 0x111B);
    u8 text[64];
    __aeabi_memcpy4(text, DAT_00404c48, 45);
    f32 width = FUN_0028f4b4(text, 2, 0.0f);
    f32 inset = (f32)((info->size[0] - (s32)width) / 2);
    f32 x = (f32)(vec2GetXInt((&banner->sprite)) + info->x) + inset + origin.x;
    f32 y = (f32)info->y + origin.y;
    FUN_002be5a4(2, DAT_0044cdc8.color, text, x, y, 0.0f, 0.0f, 1.0f);
    FUN_002bedb0(g_titleScene, 3);
    efctSetSpeed(1.0f);
    FUN_002bf818((&banner->sprite));
    if (banner->closing && (&banner->sprite)->animationFlags.completed)
        banner->complete = 1;
}
}
