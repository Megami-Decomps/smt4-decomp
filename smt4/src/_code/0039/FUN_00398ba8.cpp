/* NON_MATCHING: stack-address evaluation order now matches retail (renderCtxPush wrappers); 112 diff lines remain, scheduling/register allocation only. */
#include "common.h"
#include "camp/RenderCtx.h"

extern "C" {

/* A layout record (only the fields read here). */
typedef struct SlotLayout {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ s16 x;
    /* 0x0A */ s16 y;
} SlotLayout;

/* The fade controller inside the picker: its speed is at +0x20. */
typedef struct SlotFade {
    u8 unk00[0x20];
    f32 speed;
} SlotFade;

/* The slot picker screen (only the fields used here, by their offsets). */
typedef struct SlotPicker {
    /* 0x000 */ u8 unk000;
    /* 0x001 */ u8 mode;                /* 4: no cursor */
    /* 0x002 */ u8 unk002[0xA];
    /* 0x00C */ s32 frame;
    /* 0x010 */ u8 unk010[0x12];
    /* 0x022 */ s8 selected;
    /* 0x023 */ u8 unk023[0x8D];
    /* 0x0B0 */ u8 slotText[8][2];      /* two glyph bytes per slot */
    /* 0x0C0 */ u8 unk0c0[0x2D4];
    /* 0x394 */ SlotFade fade;
} SlotPicker;

extern RenderCtx *g_renderCtx;

void efctSetSpeed(f32 speed);
f32 renderCtxCalculateStereoParallax(RenderCtx *context, f32 depth);
void FUN_002c39a4(RenderCtx *context);
void FUN_002bed3c(void);
s32 FUN_002c5d80(s32 a, s32 b);
void FUN_002c1b64(RenderCtx *context, s32 arg);
void FUN_002bf288(u32 a, u32 b, u32 id, s32 x, s32 y, u32 tag);
u32 packNibblesAndByte(u32 a, u32 b, u32 c);
SlotLayout *FUN_002bf4f8(u32 group, u32 id);
void FUN_002be5a4(u32 first, u32 second, const char *text, f32 x, f32 y, f32 z, f32 width, f32 height);
void FUN_002c198c(RenderCtx *context);
void FUN_002c18e4(RenderCtx *context);

/* Draws the eight-slot picker: the frame parts, then for each slot its marker, the selected
 * slot's cursor (blinking every 30 frames) and the slot's two-glyph label. */
void FUN_00398ba8(SlotPicker *picker)
{
    f32 scale = picker->fade.speed;

    efctSetSpeed(scale);
    s32 parallax = (s32)renderCtxCalculateStereoParallax(g_renderCtx, 0.27f);

    FUN_002c39a4(g_renderCtx);
    FUN_002bed3c();
    renderCtxPushA(g_renderCtx, FUN_002c5d80(1, 0));
    FUN_002c1b64(g_renderCtx, 0);
    FUN_002bf288(2, 0x2E, 0, parallax, 0, 0xB);
    renderCtxSetB(g_renderCtx, packNibblesAndByte(6, 1, 0));
    FUN_002bf288(2, 0x2E, 1, parallax, 0, 0xB);
    FUN_002bf288(2, 0x2E, 2, parallax, 0, 0xB);
    renderCtxSetB(g_renderCtx, packNibblesAndByte(6, 7, 0));
    char label[4] = {0, 0, 0, 0};

    for (s32 i = 0; i < 8; i++) {
        SlotLayout *slot = FUN_002bf4f8(0x2E, i + 8);

        if (picker->mode != 4) {
            if (picker->slotText[i][0] == 0 && picker->slotText[i][1] == 0) {
                FUN_002bf288(2, 0x2E, 5, slot->x + parallax, slot->y, 0x10);
            } else {
                FUN_002bf288(2, 0x2E, 0x10, slot->x + parallax, slot->y, 0x10);
            }
        }
        u32 color = 0xFFFFFFFF;

        if (picker->selected == i && picker->mode != 4) {
            color = 0x72E027FF;
            FUN_002bf288(2, 0x2E, 4, slot->x + parallax, slot->y, 0x10);
            if (picker->frame % 30 < 15) {
                FUN_002bf288(2, 0x2E, 6, slot->x + parallax, slot->y, 0x10);
            }
        }
        SlotLayout *text = FUN_002bf4f8(0x2E, 7);

        label[0] = picker->slotText[i][0];
        label[1] = picker->slotText[i][1];
        FUN_002be5a4(4, color, label, (f32)(slot->x + text->x + parallax), (f32)(slot->y + text->y), 0.91796875f, 0.0f,
                     scale);
    }
    efctSetSpeed(1.0f);
    renderStackPop(&g_renderCtx->stackA);
    FUN_002c198c(g_renderCtx);
    FUN_002c18e4(g_renderCtx);
}

}
