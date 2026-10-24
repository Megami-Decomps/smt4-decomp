#include "camp/RenderCtx.h"

/* A menu entry's draw state: a mode, a selected row and an animation frame. */
struct MenuEntryDraw {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ s32 mode;
    /* 0x08 */ u8 unk08[0x10];
    /* 0x18 */ s32 row;
    /* 0x1C */ s32 frame;
};

extern "C" {
extern RenderCtxA *g_renderCtx;
extern const s8 DAT_0057f220[];
void FUN_00164b5c(s32 layer, s32 group, s32 image, s32 x, s32 y, s32 priority);
void FUN_001835b4(s32 layer, s32 group, s32 image, s32 x, s32 y, s32 priority);
f32 FUN_001f3eec(f32 start, f32 end, f32 duration, f32 time);
void efctSetSpeed(f32 speed);
u32 packNibblesAndByte(u32 first, u32 second, u32 third);

// Draw a menu entry: frame, a row-offset glow that fades in and out, and its decorations.
void campMenuEntryDraw(MenuEntryDraw *entry, s32 priority)
{
    FUN_00164b5c(2, 34, 2, 0, 0, priority + 1);
    if (entry->mode != 1) {
        FUN_001835b4(2, 34, 17, 0, 0, priority + 2);
        FUN_001835b4(2, 34, 19, 0, 0, priority + 4);
    } else {
        s32 offsetY = DAT_0057f220[entry->row];
        FUN_001835b4(2, 34, 17, 0, offsetY, priority + 2);
        f32 alpha = entry->frame < 20 ? FUN_001f3eec(0.0f, 0.8f, 20.0f, (f32)entry->frame)
                                      : FUN_001f3eec(0.8f, 0.0f, 40.0f, (f32)(entry->frame - 20));
        renderCtxSetB(g_renderCtx, packNibblesAndByte(6, 1, 0));
        efctSetSpeed(alpha);
        FUN_001835b4(2, 34, 18, 0, offsetY, priority + 3);
        efctSetSpeed(1.0f);
        renderCtxSetB(g_renderCtx, packNibblesAndByte(6, 7, 0));
        FUN_001835b4(2, 34, 19, 0, offsetY, priority + 4);
    }
    FUN_001835b4(2, 34, 20, 0, 0, priority + 5);
    FUN_001835b4(2, 34, 13, 0, 0, priority + 2);
    FUN_001835b4(2, 34, 14, 0, 0, priority + 2);
    FUN_001835b4(2, 34, 15, 0, 0, priority + 2);
    FUN_001835b4(2, 34, 16, 0, 0, priority + 2);
}

}
