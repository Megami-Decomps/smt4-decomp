/* NON_MATCHING: item detail panel draw; call sequence follows retail, float scheduling and register use not compared */
#include "common.h"

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

struct DetailSpriteFrame {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ s16 x;
    /* 0x0A */ s16 y;
};

extern "C" {
extern void *g_renderCtx;

void textFormatBuffer(char *buffer, const char *format, ...);
void FUN_00162790(u32 layer, u32 flags, const char *text, f32 x, f32 y);
void efctSetSpeed(f32 speed);
DetailSpriteFrame *FUN_001834a4(u32 bank, u32 sprite);
s32 FUN_0018408c(const char *text, s32 mode);
f32 renderCtxCalculateStereoParallax(void *context, f32 scale);
void FUN_0019e52c(u32 soundId);
void FUN_003f533c(DetailPanel *panel, s32 x, s32 y, u32 layer, u32 value, u32 a, u32 b, u32 c, u32 color, u32 flags);
void uiDrawStereoKindIcon(DetailPanel *panel, s32 x, s32 y, u32 layer, u32 kind, u32 sprite);
void FUN_003f707c(DetailPanel *panel, s32 x, s32 y, u32 a, u32 b, u32 c, u32 d, u32 e);
const char *FUN_003f74a8(DetailPanel *panel, DetailItem *item);
void FUN_003f757c(DetailPanel *panel, s32 x, s32 y, u32 layer, const char *text, u32 a, u32 b, u32 c, u32 d);

#define DETAIL_KIND_NONE_SOUND (-1)
#define DETAIL_KIND_SPECIAL 9
#define DETAIL_KIND_NO_VALUE 10
#define DETAIL_STEREO_SCALE 0.26f

/* Draws the detail panel of the selected item: its kind sound and frame, the name and the kind
 * icon. */
void FUN_003f7674(DetailPanel *panel, s32 x, s32 y)
{
    u32 kind = panel->item->kindAndValue >> 8;
    s32 sound;
    switch (kind) {
    case 0: sound = 0xAE; break;
    case 1: sound = 0xB2; break;
    case 2: sound = 0xB0; break;
    case 3: sound = 0xB1; break;
    case 4: sound = 0xB3; break;
    case 5: sound = 5; break;
    case 6: sound = 0xBA; break;
    case 7: sound = 0xB9; break;
    case 8: sound = 0xAF; break;
    case 9: sound = 0xBB; break;
    default: sound = DETAIL_KIND_NONE_SOUND; break;
    }
    if (sound >= 0 && kind != DETAIL_KIND_SPECIAL)
        FUN_0019e52c(sound & 0xFFFF);

    FUN_003f707c(panel, x, y, 0xD3, 0x3E, 0x47, 0x4C, 0x4F);
    char *name = panel->item->name;
    s32 stereo = (s32)renderCtxCalculateStereoParallax(g_renderCtx, DETAIL_STEREO_SCALE);
    efctSetSpeed(0.15625f);
    DetailSpriteFrame *frame = FUN_001834a4(0x31, 0x46);
    FUN_0018408c(name, 3);
    s32 nameX = frame->x + x + stereo;
    FUN_00162790(3, 0xFF, name, (f32)nameX, (f32)(frame->y + y));

    char label[76];
    textFormatBuffer(label, "%s", FUN_003f74a8(panel, panel->item));
    FUN_003f757c(panel, x, y, 0xD8, label, 0x4B, 0x4A, 1, 0);
    u16 value = panel->item->kindAndValue;
    if (value >> 8 == DETAIL_KIND_NO_VALUE)
        value = 0;
    else
        value = value & 0xFF;
    FUN_003f533c(panel, x, y, 0xD8, value, 0x78, 0x79, 0x7A, 0xA6D2E3FF, 0);
    uiDrawStereoKindIcon(panel, x, y, 0xD8, panel->item->kindAndValue >> 8, 0x4A);
    efctSetSpeed(1.0f);
}

} /* extern "C" */
