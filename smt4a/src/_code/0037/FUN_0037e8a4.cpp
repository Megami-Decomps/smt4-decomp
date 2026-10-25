/* NON_MATCHING: readable rewrite from retail disassembly compiles (174 vs 164 rows); register allocation and constant hoisting (0.26f parallax depth, layer ids) differ */
#include "common.h"
#include "shard/TextureDrawCall.h"
#include "util/Vec2Fixed.h"
#include "util/PackNibbles.h"

// Draw-state stack embedded in the render context.
struct DrawRing {
    s32 index;              // 0x00
    s32 unk04;
    s32 slots[4];           // 0x08
    u8 dirty;               // 0x18
    u8 unk19[3];
    void (*flush)(void);    // 0x1c
};

struct RenderCtx {
    u8 unk0000[0x12b8];
    DrawRing ring;          // 0x12b8
};

struct LayoutEntry {
    u8 unk00[8];
    s16 x;                  // 0x08
    s16 y;                  // 0x0a
};

// UI sprite header: only the animation scale read here.
struct UiSprite {
    u8 unk00[0x20];
    f32 scale;              // 0x20
};

struct SaveSlotHud {
    u8 unk0000[0xe8c];
    u8 titleSprite[0xf18 - 0xe8c];      // 0xe8c
    u8 cardSprite[0xfa2 - 0xf18];       // 0xf18
    s8 cardVisible;                     // 0xfa2
    u8 unkfa3[0x197c - 0xfa3];
    UiSprite haloSprite;                // 0x197c
};

extern "C" {

extern RenderCtx* g_renderCtx;

s32 vec2GetYInt(void* sprite);
f32 renderCtxCalculateStereoParallax(RenderCtx* ctx, f32 depth);
void efctSetSpeed(f32 speed);
LayoutEntry* asdTMTexTableEntryAt(u32 group, u32 index);
void* saveSlotFindSelected(void);

static void setDrawState(s32 value)
{
    DrawRing* ring = &g_renderCtx->ring;
    s32 previous = ring->slots[ring->index];
    ring->slots[ring->index] = value;
    if (ring->dirty != 0 || previous != value) {
        ring->flush();
        ring->dirty = 0;
    }
}

// Draws the save slot panel (three-part frames at the title sprite) and, when a
// card is shown for the selected slot, the card's frame and highlight.
void FUN_0037e8a4(SaveSlotHud* hud, f32 alpha)
{
    void* titleSprite = hud->titleSprite;
    s32 baseX = vec2GetXInt(titleSprite);
    s32 baseY = vec2GetYInt(titleSprite);
    s32 x = baseX + (s32)renderCtxCalculateStereoParallax(g_renderCtx, 0.26f);
    efctSetSpeed(reinterpret_cast<UiSprite*>(titleSprite)->scale * alpha);
    for (s32 i = 0; i < 3; i++) FUN_001835b4(2, 0x14, 0xc08 + i, x, baseY, 0xbf);
    FUN_001835b4(2, 0x14, 0xbe1, baseX + (s32)renderCtxCalculateStereoParallax(g_renderCtx, 0.26f), baseY, 0xc4);

    void* cardSprite = hud->cardSprite;
    if (hud->cardVisible == 0 || saveSlotFindSelected() == NULL) return;

    s32 cardX = vec2GetXInt(cardSprite);
    s32 cardY = vec2GetYInt(cardSprite);
    LayoutEntry* frame = asdTMTexTableEntryAt(0x14, 0xbd9);
    s32 frameX = cardX + (s32)renderCtxCalculateStereoParallax(g_renderCtx, 0.26f) + frame->x;
    s32 frameY = frame->y + cardY;
    setDrawState(packNibblesAndByte(6, 1, 0));
    for (s32 i = 0; i < 3; i++) FUN_001835b4(2, 0x14, 0xbe2 + i, frameX, frameY, 0xbf);

    LayoutEntry* marker = asdTMTexTableEntryAt(0x14, 0xc16);
    s32 markerX = marker->x + cardX + (s32)renderCtxCalculateStereoParallax(g_renderCtx, 0.26f);
    s32 markerY = marker->y + cardY;
    efctSetSpeed(hud->haloSprite.scale * alpha);
    for (s32 i = 0; i < 3; i++) FUN_001835b4(2, 0x14, 0xc01 + i, markerX, markerY, 0xc4);
    efctSetSpeed(alpha);
    setDrawState(packNibblesAndByte(6, 7, 0));
}

} /* extern "C" */
