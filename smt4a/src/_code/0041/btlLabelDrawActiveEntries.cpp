/* NON_MATCHING: retail reloads g_renderCtx from the pool at each use (the build keeps its address in fp), loads alphaDone before the scale getter and keeps the text arguments in other registers. */
#include "camp/RenderCtx.h"
#include "camp/RenderCtxA.h"
#include "shard/W6_W6Match8_AnimatedSprite.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"

struct BattleLabelEntryViewA {
    u8 unk00[0x14];
    UiSpriteState sprite;
    u8 active;
    u8 unkA1[3];
    s32 kind;
    u32 message;
    s32 textWidth;
};
struct BattleLabelDimensionsA { s16 width; };
typedef char BattleLabelEntryLayoutA[
    sizeof(BattleLabelEntryViewA) == 0xB0 && offsetof(BattleLabelEntryViewA, active) == 0xA0 &&
    offsetof(BattleLabelEntryViewA, sprite.centerX) == 0x2C ? 1 : -1];

extern "C" {
void efctSetSpeed(f32 speed);
void gxResetColorQuadToWhite(void);
f32 renderCtxCalculateStereoParallax(RenderCtxA *context, f32 depth);
void effectRenderTransformedInstance(UiSpriteState *sprite, f32 offset);
void textDrawRangeFaded(u32 message, s32 x, s32 y, u32 color, s32 mode, s32 flags, f32 scale);

void btlLabelDrawActiveEntries(BattleLabelEntryViewA *entries)
{
    RenderCtxA *context = g_renderCtx;
    renderCtxPushA(context, renderCtxPackPassFlags(1, 0));
    efctSetSpeed(1.0f);
    gxResetColorQuadToWhite();
    for (s32 index = 0; index < 12; ++index) {
        BattleLabelEntryViewA *entry = &entries[index];
        if (entry->active) {
            f32 offset = (f32)(s32)renderCtxCalculateStereoParallax(g_renderCtx, 0.27f);
            effectRenderTransformedInstance(&entry->sprite, offset);
        }
        if (entry->active) {
            UiSpriteState *sprite = &entry->sprite;
            s32 offset = (s32)renderCtxCalculateStereoParallax(g_renderCtx, 0.27f);
            const TextureTableEntryIV *anchor = asdTMTexTableEntryAt(8, 142);
            s32 centerX = anchor->x + anchor->placement->width / 2;
            s32 y = anchor->y;
            if (entry->kind == 2 && (uiSpriteGetScaleDone(sprite) & (s8)sprite->alphaDone)) {
                textDrawRangeFaded(entry->message, sprite->centerX + centerX - entry->textWidth / 2 + offset,
                             sprite->centerY + y, 61, 6, 0, 1.0f);
            }
        }
    }
    renderCtxPopCounted(g_renderCtx, RENDER_STACK_A);
}
}
