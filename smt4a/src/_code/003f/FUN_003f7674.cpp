/* NON_MATCHING: 86 lines (161 vs 163 rows): elementMessageGroup switch (0..9), dataTable10FindValue guard, shared drawNoticeHeader helper, and 64-byte label buffer match retail (exact push {r4..fp, lr} and 92-byte frame); x/y register swap (r6/r7) and stack-arg stm grouping differ. */
#include "common.h"
#include <stdio.h>
#include "text/TextDraw.h"
#include "ui/ElementCategory.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"
#include "camp/RenderCtxA.h"

/* The item shown in the panel: its kind in the high byte of +2, its name text at +4. */
struct DetailItem {
    /* 0x00 */ u8 unk00[2];
    /* 0x02 */ u16 kindAndValue;
    /* 0x04 */ char name[1];
};

struct DetailPanel {
    /* 0x000 */ u8 unk000[0x5E0];
    /* 0x5E0 */ DetailItem *item;
};

extern "C" {

void efctSetSpeed(f32 speed);
s32 fontMeasureLineAdvance(const char *text, s32 mode);
f32 renderCtxCalculateStereoParallax(RenderCtxA *context, f32 scale);
void FUN_003f533c(DetailPanel *panel, s32 x, s32 y, u32 layer, u32 value, u32 a, u32 b, u32 c, u32 color, u32 flags, f32 speed);
void uiDrawStereoKindIcon(DetailPanel *panel, s32 x, s32 y, u32 layer, u32 kind, u32 sprite, f32 speed);
void FUN_003f707c(DetailPanel *panel, s32 x, s32 y, u32 a, u32 b, u32 c, u32 d, u32 e, f32 speed);
const char *FUN_003f74a8(DetailPanel *panel, DetailItem *item);
void FUN_003f757c(DetailPanel *panel, s32 x, s32 y, u32 layer, const char *text, u32 a, u32 b, u32 c, u32 d, f32 speed);

#define DETAIL_KIND_SPECIAL 9
#define DETAIL_KIND_NO_VALUE 10
#define DETAIL_STEREO_SCALE 0.26f

/* Draws the notice header text with stereo parallax (same operation as sibling FUN_003f78f8). */
static __inline void drawNoticeHeader(s32 x, s32 y, s32 sprite, const char *text, u32 color, f32 speed)
{
    s32 stereo = (s32)renderCtxCalculateStereoParallax(g_renderCtx, DETAIL_STEREO_SCALE);
    efctSetSpeed(speed);
    TextureTableEntryIV *frame = asdTMTexTableEntryAt(0x31, sprite);
    fontMeasureLineAdvance(text, 3);
    textDrawString((f32)(frame->x + (x + stereo)), (f32)(frame->y + y), 0.15625f, 3, 0.0f, color, speed, text);
}

/* Draws the detail panel of the selected item: its kind sound and frame, the name and the kind
 * icon. */
void FUN_003f7674(DetailPanel *panel, s32 x, s32 y, f32 speed)
{
    u32 kind = panel->item->kindAndValue >> 8;
    s32 sound = elementMessageGroup(kind);
    if (sound >= 0 && kind != DETAIL_KIND_SPECIAL) {
        dataTable10FindValue((u16)sound);
    }

    FUN_003f707c(panel, x, y, 0xD3, 0x3E, 0x47, 0x4C, 0x4F, speed);
    drawNoticeHeader(x, y, 0x46, panel->item->name, 0xFF, speed);

    char label[64];
    sprintf(label, "%s", FUN_003f74a8(panel, panel->item));
    FUN_003f757c(panel, x, y, 0xD8, label, 0x4B, 0x4A, 1, 0, speed);
    u16 value = panel->item->kindAndValue;
    if (value >> 8 == DETAIL_KIND_NO_VALUE) {
        value = 0;
    } else {
        value = value & 0xFF;
    }
    FUN_003f533c(panel, x, y, 0xD8, value, 0x78, 0x79, 0x7A, 0xA6D2E3FF, 0, speed);
    uiDrawStereoKindIcon(panel, x, y, 0xD8, panel->item->kindAndValue >> 8, 0x4A, speed);
    efctSetSpeed(1.0f);
}

} /* extern "C" */
