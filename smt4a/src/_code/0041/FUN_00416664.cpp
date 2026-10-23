/* NON_MATCHING: render-stack push temporaries, cached render-context address and draw-loop register allocation differ from retail. */
#include "camp/RenderCtx.h"
#include "shard/W6_W6Match8_AnimatedSprite.h"

struct BattleLabelEntryViewA {
    u8 unk00[0x14];
    union {
        UiAnimatedSprite sprite;
        struct { u8 unk14[0x18]; s16 x; s16 y; } position;
    };
    u8 active;
    u8 unkA1[3];
    s32 kind;
    u32 message;
    s32 textWidth;
};
struct BattleLabelDimensionsA { s16 width; };
struct BattleLabelAnchorA {
    u8 unk00[8];
    s16 x;
    s16 y;
    const BattleLabelDimensionsA *dimensions;
};
typedef char BattleLabelEntryLayoutA[
    sizeof(BattleLabelEntryViewA) == 0xB0 && offsetof(BattleLabelEntryViewA, active) == 0xA0 &&
    offsetof(BattleLabelEntryViewA, position.x) == 0x2C ? 1 : -1];

extern "C" {
extern RenderCtxA *g_renderCtx;
s32 FUN_001692ac(u32 first, u32 second);
void efctSetSpeed(f32 speed);
void FUN_00183bb0(void);
f32 renderCtxCalculateStereoParallax(RenderCtxA *context, f32 depth);
void FUN_001634b4(UiAnimatedSprite *sprite, f32 offset);
const BattleLabelAnchorA *FUN_001834a4(u32 bank, u32 sprite);
void FUN_00164168(u32 message, s32 x, s32 y, u32 color, s32 mode, s32 flags, f32 scale);

void FUN_00416664(BattleLabelEntryViewA *entries)
{
    RenderCtxA *context = g_renderCtx;
    renderCtxPushA(context, FUN_001692ac(1, 0));
    efctSetSpeed(1.0f);
    FUN_00183bb0();
    for (s32 index = 0; index < 12; ++index) {
        BattleLabelEntryViewA *entry = &entries[index];
        if (entry->active) {
            f32 offset = (f32)(s32)renderCtxCalculateStereoParallax(g_renderCtx, 0.27f);
            FUN_001634b4(&entry->sprite, offset);
        }
        if (entry->active) {
            s32 offset = (s32)renderCtxCalculateStereoParallax(g_renderCtx, 0.27f);
            const BattleLabelAnchorA *anchor = FUN_001834a4(8, 142);
            s32 centerX = anchor->x + anchor->dimensions->width / 2;
            s32 y = anchor->y;
            if (entry->kind == 2 && ((s8)entry->sprite.completion.channels[2] & (s8)entry->sprite.completion.channels[1])) {
                FUN_00164168(entry->message, entry->position.x + centerX - entry->textWidth / 2 + offset,
                             entry->position.y + y, 61, 6, 0, 1.0f);
            }
        }
    }
    renderStackPop(&g_renderCtx->stackA);
}
}
