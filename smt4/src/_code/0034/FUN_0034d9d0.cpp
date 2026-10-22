/* NON_MATCHING: Packed color modulation is reconstructed; duplicated model-table lookups and float channel conversion/multiplication scheduling differ. */
#include "classes/Obj4209cc.h"

struct ModelColorEntry {
    /* 0x000 */ u8 unk000[0x64];
    /* 0x064 */ u32 color;
    /* 0x068 */ u32 unk068;
    /* 0x06C */ u32 modulation;
    /* 0x070 */ u8 unk070[0xa4];
};
struct ModelColorTable {
    /* 0x0000 */ u8 unk0000[0x1e98];
    /* 0x1E98 */ ModelColorEntry *entries;
};
struct ModelColorDefaults {
    /* 0x00 */ u8 unk00[0x18];
    /* 0x18 */ u32 unmodulated;
};
extern "C" ModelColorDefaults DAT_00439ce0;

/* Modulate each packed color channel unless this entry uses the default tint. */
extern "C" u32 FUN_0034d9d0(Obj4209cc *owner, u32 index)
{
    const ModelColorTable *table = reinterpret_cast<const ModelColorTable *>(owner->unk04);
    const ModelColorEntry *entry = &table->entries[index];
    u32 tint = entry->modulation;
    u32 color = entry->color;
    if (tint == DAT_00439ce0.unmodulated) {
        return color;
    }
    f32 alpha = static_cast<f32>(color >> 24);
    f32 blue = static_cast<f32>((color & 0xff0000) >> 16);
    f32 green = static_cast<f32>((color & 0xff00) >> 8);
    f32 red = static_cast<f32>(color & 0xff);
    f32 tintAlpha = static_cast<f32>(tint >> 24) * (1.0f / 255.0f);
    f32 tintBlue = static_cast<f32>((tint & 0xff0000) >> 16) * (1.0f / 255.0f);
    f32 tintGreen = static_cast<f32>((tint & 0xff00) >> 8) * (1.0f / 255.0f);
    f32 tintRed = static_cast<f32>(tint & 0xff) * (1.0f / 255.0f);
    return (static_cast<u32>(tintAlpha * alpha) << 24) +
           (static_cast<u32>(tintBlue * blue) << 16) +
           (static_cast<u32>(tintGreen * green) << 8) +
           static_cast<u32>(tintRed * red);
}
