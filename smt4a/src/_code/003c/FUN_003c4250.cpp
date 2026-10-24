/* NON_MATCHING: the gauge width helper is inlined with different register allocation and the stack argument stores differ from retail (238 vs 231 rows); the gauge drawing is the same. */
#include "common.h"
#include "camp/RenderCtx.h"

extern "C" {

typedef struct GaugeLayout {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ s16 x;
    /* 0x0A */ s16 y;
    /* 0x0C */ s16 *size;               /* width, height */
} GaugeLayout;

/* The battle window (only the fields used here). */
typedef struct GaugeOwner {
    /* 0x0000 */ u8 unk0000[0x17C];
    /* 0x017C */ f32 closingSpeed;
    /* 0x0180 */ u8 unk0180[0x1E98];
    /* 0x2018 */ u8 mode;
} GaugeOwner;

extern u8 *g_renderCtx;

f32 jobGetScalarValue(void);
void efctSetSpeed(f32 speed);
GaugeLayout *FUN_001834a4(u32 group, u32 id);
void FUN_00185dd4(u32 id, u32 table, s32 texture, s32 x, s32 y, s32 width, s32 height, u32 tag);
u32 packNibblesAndByte(u32 a, u32 b, u32 c);
s32 __aeabi_idivmod(s32 a, s32 b);

/* The width of the gauge part `id` for `value` out of 200 (at least 1 for a positive value),
 * with the part's height in `height`. */
static __inline s32 gaugeWidth(u32 id, s32 value, s32 *height)
{
    GaugeLayout *layout = FUN_001834a4(0x12, id);
    s32 width = (__aeabi_idivmod(layout->size[0] << 12, 200) * value) >> 12;

    if (value > 0 && width < 1) {
        width = 1;
    }
    *height = layout->size[1];
    return width;
}

/* Draws a two-part HP gauge at (`x`, `y`): the filled bar up to `current`, and either the
 * recovering part (when `target` is higher) or the damage part (when it is lower); `chunk` draws
 * the recent-damage flash. */
void FUN_003c4250(GaugeOwner *owner, s32 x, s32 y, s32 target, s32 current, s32 chunk)
{
    f32 scale = jobGetScalarValue();
    s32 flash = 0;
    s32 height;

    if (current >= 200) {
        current = 199;
    }
    s16 value = (s16)current;
    s32 width = gaugeWidth(0x6E, value, &height);

    if (chunk > 0 && owner->mode != 3) {
        s16 rest = (s16)(value - (s16)chunk);

        width = gaugeWidth(0x6E, rest, &height);
        s32 flashHeight;

        flash = gaugeWidth(0x76, (s16)chunk, &flashHeight);
        FUN_00185dd4(2, 0x12, 0x76, x + width, y, flash, flashHeight, 0xDD);
        efctSetSpeed(owner->closingSpeed * scale);
        renderStackSet((RenderStateStack *)(g_renderCtx + 0x12B8), packNibblesAndByte(6, 1, 0));
        FUN_00185dd4(2, 0x12, 0x77, x + width, y, flash, flashHeight, 0xDE);
        renderStackSet((RenderStateStack *)(g_renderCtx + 0x12B8), packNibblesAndByte(6, 7, 0));
        efctSetSpeed(scale);
    }
    FUN_00185dd4(2, 0x12, 0x6E, x, y, width, height, 0xDD);
    if (current < target) {
        s32 partHeight;
        s32 part = gaugeWidth(0x6F, (s16)((s16)target - value), &partHeight);

        FUN_00185dd4(2, 0x12, 0x6F, x + width + flash, y, part, partHeight, 0xDD);
    } else if (target < current) {
        s32 partHeight;
        s32 part = gaugeWidth(0x71, (s16)(value - (s16)target), &partHeight);
        GaugeLayout *bar = FUN_001834a4(0x12, 0x6E);
        GaugeLayout *damage = FUN_001834a4(0x12, 0x71);

        FUN_00185dd4(2, 0x12, 0x71, (width - part) + flash + x + (bar->x - damage->x), y, part, partHeight, 0xDD);
    }
}

}
