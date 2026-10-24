/* NON_MATCHING: same operations; retail extracts and converts the four channels in a different order (alpha first, with the header words written between the conversions and the multiplies). */
#include "common.h"

extern "C" {

extern u8 DAT_005dee46;

/* Appends a GPU command with a packed color: header words, then B, G, R, A as 0..1 floats. Returns the new cursor. */
u32 *FUN_00421e18(u32 *cursor, u32 color)
{
    f32 alpha = color >> 24;
    f32 red = (color & 0xFF0000) >> 16;
    f32 green = (color & 0xFF00) >> 8;
    f32 blue = color & 0xFF;
    f32 *floats;

    *cursor++ = DAT_005dee46 | 0x80000000;
    *cursor++ = 0x804F02C0;
    floats = (f32 *)cursor;
    *floats++ = blue * (1.0f / 255.0f);
    *floats++ = green * (1.0f / 255.0f);
    *floats++ = red * (1.0f / 255.0f);
    *floats++ = alpha * (1.0f / 255.0f);
    return (u32 *)floats;
}

} /* extern "C" */
