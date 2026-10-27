#include "gfx/StereoParallax.h"
/* NON_MATCHING: readable rewrite from retail disassembly compiles (174 vs 170 rows); retail keeps the panel's 0x400 flags base in r7 and uses a larger callee-saved set */
#include "common.h"
#include "shard/TextureDrawCall.h"
#include "gfx/StereoParallax.h"
#include "battle/BtlMainAccess.h"
#include "util/BitsAndBytes.h"

struct DrawRing {
    s32 index;              // 0x00
    s32 unk04;
    s32 slots[4];           // 0x08
    u8 dirty;               // 0x18
    u8 unk19[3];
    void (*flush)(s32 state);   // 0x1c
};

struct RenderCtx {
    u8 unk0000[0x12b8];
    DrawRing ring;          // 0x12b8
};

struct UiSprite {
    u8 unk00[0x20];
    f32 alpha;              // 0x20
};

// Battle result panel: only the sprites and flags this draw touches.
struct ResultPanel {
    u8 unk00[0x20];
    UiSprite header;        // 0x20
    u8 unk44[0x138 - 0x44];
    UiSprite body;          // 0x138
    u8 unk15c[0x2dc - 0x15c];
    u8 mask;                // 0x2dc
    u8 unk2dd[0x400 - 0x2dd];
    u8 showHeader;          // 0x400
    u8 showBody;            // 0x401
    u8 unk402;
    u8 skip;                // 0x403
};

extern "C" {

extern RenderCtx* g_renderCtx;
extern u64 DAT_0057a9b0;

void FUN_001634b4(void* sprite, f32 offset);
void efctSetSpeed(f32 speed);
void FUN_003b21a4(ResultPanel* panel);

static void setDrawState(s32 value)
{
    DrawRing* ring = &g_renderCtx->ring;
    s32 previous = ring->slots[ring->index];
    ring->slots[ring->index] = value;
    if (ring->dirty != 0 || previous != value) {
        ring->flush(value);
        ring->dirty = 0;
    }
}

// Draws the result panel: the header and body frames, shifted by the stereo parallax.
void FUN_003217d0(ResultPanel* panel)
{
    if (panel->skip != 0) {
        FUN_003b21a4(panel);
        return;
    }
    s32 shift = (s32)renderCtxCalculateStereoParallax(g_renderCtx, 0.29f);
    u64 mask = btlGetMainState()->stateFlags64.bits;
    if ((mask & DAT_0057a9b0) == 0) FUN_001634b4(&panel->mask, (f32)shift);

    s32 x = (s32)renderCtxCalculateStereoParallax(g_renderCtx, 0.29f);
    if (panel->showHeader != 0 && panel->header.alpha > 1.0f) {
        efctSetSpeed(panel->header.alpha);
        FUN_001835b4(2, 12, 1000, x, 0, 31);
        if (panel->body.alpha > 1.0f) {
            efctSetSpeed(panel->body.alpha);
            setDrawState(packNibblesAndByte(6, 1, 0));
            FUN_001835b4(2, 12, 0x3e9, x, 0, 36);
            setDrawState(packNibblesAndByte(6, 7, 0));
        }
        efctSetSpeed(1.0f);
    }
    if (panel->showBody != 0) {
        FUN_001634b4(&panel->header, (f32)x);
        FUN_001634b4(reinterpret_cast<u8*>(panel) + 452, (f32)x);
        setDrawState(packNibblesAndByte(6, 1, 0));
        FUN_001634b4(&panel->body, (f32)x);
        setDrawState(packNibblesAndByte(6, 7, 0));
        FUN_001634b4(reinterpret_cast<u8*>(panel) + 172, (f32)x);
    }
}

} /* extern "C" */
