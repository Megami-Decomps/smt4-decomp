/* NON_MATCHING: retail keeps a zero in r7 across the draw call (shared by the no-draw result and the final slot clear) and returns the call result in place; built re-materialises the zero and moves the result through r1. */
#include "common.h"
#include "util/CalleeContracts.h"

extern "C" {
extern u32 DAT_00573cd8[2];
extern const char DAT_0052a96c[];
extern const char DAT_0052a978[];
extern const char DAT_0052a97c[];
extern const char DAT_0052a980[];
void textFormatBuffer(char *destination, const char *format, ...);
s32 FUN_001628c0(const char *text, u8 opacity, s32 mode, s32 flags,
                  f32 scaleX, f32 scaleY);
}

/* Draw one packed numeric banner, optionally adding a suffix, then consume it. */
extern "C" s32 FUN_0047f7c0(u32 index)
{
    if (index >= 2) {
        return 0;
    }
    u32 packed = DAT_00573cd8[index];
    if (packed == 0) {
        return 0;
    }
    u32 first = packed >> 20;
    u32 second = (packed >> 8) & 0xfff;
    u32 suffix = (packed >> 4) & 0xf;
    f32 scale = 0.707f;
    f32 fade = 1.0f;
    s32 result = 0;
    if (second != 0 && first != 0) {
        char text[12];
        textFormatBuffer(text, DAT_0052a96c, first, second);
        if (suffix != 0) {
            textFormatBuffer(text, DAT_0052a980, text,
                              suffix == 1 ? DAT_0052a978 : DAT_0052a97c);
        }
        u8 opacity = static_cast<u8>(static_cast<u32>(FUN_0014af98() * fade));
        result = FUN_001628c0(text, opacity, 2, 0, scale, scale);
    }
    DAT_00573cd8[index] = 0;
    return result;
}
