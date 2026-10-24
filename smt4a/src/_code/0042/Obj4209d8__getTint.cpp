/* NON_MATCHING: same arithmetic, but retail unpacks both colours into floats first with separate base loads and (index * 29) << 4 offsets, scheduled differently; built folds the entry offsets into registers. */
#include "common.h"

struct Obj421c90Entry {
    u8 unk00[0x6c];
    u32 color;
    u32 unk70;
    u32 modulate;
    u8 unk78[0x1d0 - 0x78];
};

struct Obj421c90Block {
    u8 unk00[0x1ed4];
    Obj421c90Entry *entries;
};

struct Obj421c90 {
    u8 unk00[4];
    Obj421c90Block *block;
};

struct BattleEffectSettings421c90 {
    u8 unk00[0x1c];
    u32 neutralColor;
};

extern "C" BattleEffectSettings421c90 g_battleEffectSettings;

/* Modulates an entry's colour by its modulation colour, channel by channel (alpha, red, green, blue), unless the modulation is the neutral one. */
extern "C" u32 _ZNK9Obj4209d87getTintEj(Obj421c90 *obj, s32 index)
{
    u32 modulate = obj->block->entries[index].modulate;
    u32 color = obj->block->entries[index].color;
    if (modulate == g_battleEffectSettings.neutralColor) {
        return color;
    }
    u32 alpha = (u32)((f32)(modulate >> 24) * 0.003921569f * (f32)(color >> 24));
    u32 red = (u32)((f32)((modulate & 0xff0000) >> 16) * 0.003921569f * (f32)((color & 0xff0000) >> 16));
    u32 green = (u32)((f32)((modulate & 0xff00) >> 8) * 0.003921569f * (f32)((color & 0xff00) >> 8));
    u32 blue = (u32)((f32)(modulate & 0xff) * 0.003921569f * (f32)(color & 0xff));
    return (alpha << 24) + (red << 16) + (green << 8) + blue;
}
