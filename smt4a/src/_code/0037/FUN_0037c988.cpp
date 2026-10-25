/* NON_MATCHING: retail copies the 8-byte offset pair through VFP registers (vldmia/vstmia) and keeps it at different stack slots; this build uses ldrd/strd, and the register assignment follows */
#include "camp/RenderCtx.h"

/* A pair of screen coordinates. */
struct ScreenOffset {
    s32 x;
    s32 y;
};

/* Position record of an icon in the icon table (only the screen position). */
struct IconPosition {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ s16 x;
    /* 0x0a */ s16 y;
};

/* The slot screen's work area (only the fields read here). */
struct SlotScreen {
    /* 0x0000 */ u8 unk0000[0x36c];
    /* 0x036c */ u8 unk036c[0x20];
    /* 0x038c */ f32 effectSpeed;
    /* 0x0390 */ u8 unk0390[0x6c];
    /* 0x03fc */ s32 phase;
    /* 0x0400 */ u8 unk0400[0x8760];
    /* 0x8b60 */ u16 currentIds[8];
    /* 0x8b70 */ u16 targetIds[8];
    /* 0x8b80 */ u8 unk8b80[0x94];
    /* 0x8c14 */ u8 unk8c14[0x200];
    /* 0x8e14 */ u32 cursor;
    /* 0x8e18 */ u8 unk8e18[0x72];
    /* 0x8e8a */ u8 locked;
};

extern "C" {
extern RenderCtxA *g_renderCtx;
s32 getUnlockedSlotCount(u32 argument);
IconPosition *FUN_001834a4(u32 table, u32 index);
void FUN_001835b4(s32 layer, u32 table, u32 index, s32 x, s32 y, s32 alpha);
void FUN_003b6354(SlotScreen *screen, s32 slot, s32 mode, u32 argument, f32 scale, s32 iconX, s32 iconY,
                  s32 *x, s32 *y, u8 *extra);
void FUN_003c33e8(SlotScreen *screen, s32 slot, u32 argument, u32 flags, f32 scale, s32 x, s32 y);
void FUN_003cce74(SlotScreen *screen, u32 argument, s32 x, s32 y, f32 scale);
s32 resourceRunOperationIfUnblocked(u32 *cursor);
s32 FUN_002a4894(u32 *cursor);
void efctSetSpeed(f32 speed);
s32 packNibblesAndByte(u32 first, u32 second, u32 third);

/* Draws the eight slot icons of the slot screen: locked slots are blanked, unlocked ones get
   their frame, cursor flash and effect, then the shared cursor effect is restarted. */
void FUN_0037c988(SlotScreen *screen, u32 argument, s32 drawExtra, s32 mode, u32 flags, f32 scale,
                  ScreenOffset offset)
{
    u8 extra = 0;
    s32 unlocked = getUnlockedSlotCount(argument);
    for (s32 slot = 0; slot < 8; slot++) {
        ScreenOffset position = offset;
        IconPosition *icon = FUN_001834a4(0x1a, slot + 0x17d);
        if (slot >= unlocked) {
            FUN_001835b4(2, 0x1a, 0x229, icon->x + position.x, icon->y + position.y, 0x65);
            FUN_001835b4(2, 0x1a, 0x16f, icon->x + position.x, icon->y + position.y, 0x65);
            FUN_001835b4(2, 0x1a, 0x170, icon->x + position.x, icon->y + position.y, 0x65);
            FUN_001835b4(2, 0x1a, 0x26f, icon->x + position.x, icon->y + position.y, 0x65);
            FUN_001835b4(2, 0x1a, 0x270, icon->x + position.x, icon->y + position.y, 0x65);
        } else {
            FUN_003b6354(screen, slot, mode, flags, scale, icon->x, icon->y, &position.x, &position.y, &extra);
            FUN_001835b4(2, 0x1a, 0x16f, icon->x + position.x, icon->y + position.y, 0x65);
            FUN_001835b4(2, 0x1a, 0x170, icon->x + position.x, icon->y + position.y, 0x65);
            FUN_001835b4(2, 0x1a, 0x26f, icon->x + position.x, icon->y + position.y, 0x65);
            FUN_001835b4(2, 0x1a, 0x270, icon->x + position.x, icon->y + position.y, 0x65);
            FUN_003c33e8(screen, slot, argument, flags, scale, icon->x + position.x, icon->y + position.y);
            if (mode == 1 && screen->phase >= 5) {
                s32 base = resourceRunOperationIfUnblocked(&screen->cursor);
                if (screen->currentIds[slot] == screen->targetIds[base + FUN_002a4894(&screen->cursor)]) {
                    efctSetSpeed(screen->effectSpeed * scale);
                    RenderCtxA *context = g_renderCtx;
                    renderStackSet(&context->stackB, packNibblesAndByte(6, 1, 0));
                    FUN_001835b4(2, 0x1a, 0x173, icon->x + position.x, icon->y + position.y, 0x65);
                    context = g_renderCtx;
                    renderStackSet(&context->stackB, packNibblesAndByte(6, 7, 0));
                }
            }
            efctSetSpeed(scale);
        }
    }
    if (screen->locked == 0 && drawExtra != 0) {
        FUN_003cce74(screen, argument, offset.x, offset.y, scale);
    }
}

} /* extern "C" */
