/* NON_MATCHING: shared float constant hoisting and immediate versus saved loop constants change the frame and VFP schedule. */
#include "title/S4Load.h"
#include "shard/S1ListPanel.h"

extern "C" {
extern S4Load* g_s4Load;
extern RenderCtx* g_renderCtx;
void efctSetSpeed(f32 alpha);
void FUN_00183bb0(void);
void rt_aeabi_memclr(void* memory, u32 size);
void drawSetColorFromRGBA8(u32 color);
void FUN_0016c4b8(void* context, const void* selection);
void screenDrawShadedRect(s32 x, s32 y, s32 width, s32 height, s32 depth);
SpriteInfo* FUN_001834a4(u32 group, u32 id);
void FUN_00164168(const void* text, s32 x, s32 y, s32 fade, u32 start, s32 length, f32 scale);

u32 FUN_0027dbac(void)
{
    // The canonical byte padding starts at five, so expose its word state through a local view.
    struct PhaseView { u8 prefix[8]; u32 phase; };
    S4Load* work = g_s4Load;
    PhaseView* state = reinterpret_cast<PhaseView*>(work);
    u8 drawScratch[64];
    efctSetSpeed(0.5f);
    FUN_00183bb0();
    // This scratch initialization is present even though this draw path does not consume it.
    rt_aeabi_memclr(drawScratch, sizeof(drawScratch));
    switch (state->phase) {
    case 1:
    case 2:
        drawSetColorFromRGBA8(0xFF);
        efctSetSpeed(0.5f);
        FUN_0016c4b8(g_renderCtx, NULL);
        screenDrawShadedRect(0, 0, 400, 240, 101);
        FUN_00183bb0();
        efctSetSpeed(1.0f);
        break;
    case 3: case 4: case 5: case 6: case 7: case 8:
    case 9: case 10: case 11: case 12: case 13: case 14:
    case 15: case 16: case 17: case 18: case 19: case 20:
    case 21: case 22: case 23: case 24: case 25: case 26:
    case 27: case 28: case 29: case 30:
        drawSetColorFromRGBA8(0xFF);
        FUN_0016c4b8(g_renderCtx, NULL);
        screenDrawShadedRect(0, 0, 400, 240, 101);
        FUN_00183bb0();
        break;
    }
    if (state->phase == 21 || state->phase == 22 || state->phase == 23) {
        for (s32 index = 0; index < 7; ++index) {
            SpriteInfo* sprite = FUN_001834a4(8, index + 105);
            FUN_00164168(reinterpret_cast<const void*>(work->unk2B8), sprite->x - 10,
                         sprite->y - 10, 101, 6, index, 1.0f);
        }
    }
    efctSetSpeed(1.0f);
    FUN_00183bb0();
    return 0;
}
}
