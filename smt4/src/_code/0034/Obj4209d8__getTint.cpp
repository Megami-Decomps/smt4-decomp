/* NON_MATCHING: rewritten as the real Obj4209d8 member over its cell table; retail reloads the cell array pointer for the tint and the color separately and interleaves the four channel conversions (armcc here hoists the cell address and orders the conversions differently). */
#include "classes/Obj4209d8.h"

struct ModelColorDefaults {
    /* 0x00 */ u8 unk00[0x18];
    /* 0x18 */ u32 unmodulated;
};
extern "C" ModelColorDefaults DAT_00439ce0;

/* Modulate each packed color channel of a cell's color by its tint unless the cell uses the default tint. */
u32 Obj4209d8::getTint(u32 index) const
{
    u32 tint = owner->cells[index].modulation;
    if (tint == DAT_00439ce0.unmodulated) {
        return owner->cells[index].color;
    }
    u32 color = owner->cells[index].color;
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
