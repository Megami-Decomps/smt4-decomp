#include "common.h"
#include "camp/RenderCtxA.h"
#include "camp/RenderCtx.h"
#include "util/BitsAndBytes.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"
#include "ui/UiSpriteApi.h"

extern "C" {

/* The battle window (only the fields used here). */
typedef struct GaugeDrawOwner {
    /* 0x0000 */ u8 unk0000[0x15C];
    /* 0x015C */ UiSpriteState closingSprite; /* its opacity scales the damage flash */
    /* 0x01E8 */ u8 unk01E8[0x1E30];
    /* 0x2018 */ u8 mode;
} GaugeDrawOwner;

f32 jobGetScalarValue(void);
void efctSetSpeed(f32 speed);
void texDrawTableEntrySized(u32 id, u32 table, s32 texture, s32 x, s32 y, s32 width, s32 height, u32 tag);

/* The width of the gauge part `id` for `value` out of `maximum` (at least 1 for a positive value),
 * with the part's height in `height`. */
static __inline s32 gaugeWidth(u32 id, s32 value, s32 maximum, s32 *height)
{
    TextureTableEntryIV *layout = asdTMTexTableEntryAt(0x12, id);
    s32 width = ((layout->placement->width << 12) / maximum * value) >> 12;

    if (value > 0 && width <= 0) {
        width = 1;
    }
    *height = layout->placement->height;
    return width;
}

/* Draws a two-part HP gauge at (`x`, `y`): the filled bar up to `current`, and either the
 * recovering part (when `target` is higher) or the damage part (when it is lower); `chunk` draws
 * the recent-damage flash. */
void battleWindowDrawHpGauge(GaugeDrawOwner *owner, s32 x, s32 y, s32 target, s32 current, s32 chunk)
{
    f32 scale;
    s32 flash = 0;
    s32 height;
    s16 value;
    s32 width;

    scale = jobGetScalarValue();
    current = current > 199 ? 199 : current;
    value = (s16)current;
    width = gaugeWidth(0x6E, value, 200, &height);

    if (chunk > 0 && owner->mode != 3) {
        s16 rest = (s16)(current - chunk);
        s32 flashHeight;

        width = gaugeWidth(0x6E, rest, 200, &height);
        flash = gaugeWidth(0x76, (s16)chunk, 200, &flashHeight);
        texDrawTableEntrySized(2, 0x12, 0x76, x + width, y, flash, flashHeight, 0xDD);
        efctSetSpeed(vec2GetSpeed(&owner->closingSprite) * scale);
        renderCtxSetB(g_renderCtx, packNibblesAndByte(6, 1, 0));
        texDrawTableEntrySized(2, 0x12, 0x77, x + width, y, flash, flashHeight, 0xDE);
        renderCtxSetB(g_renderCtx, packNibblesAndByte(6, 7, 0));
        efctSetSpeed(scale);
    }
    texDrawTableEntrySized(2, 0x12, 0x6E, x, y, width, height, 0xDD);
    if (target > current) {
        s32 partHeight;
        s32 part = gaugeWidth(0x6F, (s16)(target - current), 200, &partHeight);

        texDrawTableEntrySized(2, 0x12, 0x6F, x + width + flash, y, part, partHeight, 0xDD);
    } else if (target < current) {
        s32 partHeight;
        s32 part = gaugeWidth(0x71, (s16)(current - target), 200, &partHeight);
        TextureTableEntryIV *bar = asdTMTexTableEntryAt(0x12, 0x6E);
        TextureTableEntryIV *damage = asdTMTexTableEntryAt(0x12, 0x71);
        s32 offset = bar->x - damage->x; /* lines the damage part up with the bar */

        texDrawTableEntrySized(2, 0x12, 0x71, (width - part) + flash + x + offset, y, part, partHeight, 0xDD);
    }
}

}
