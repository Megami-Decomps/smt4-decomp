#include "common.h"
#include "runtime/Stdio.h"
#include "code/Code0014.h"

extern "C" {
extern u32 DAT_00573cd8[2];
extern const char DAT_0052a96c[];
extern const char DAT_0052a978[];
extern const char DAT_0052a97c[];
extern const char DAT_0052a980[];
u32 FUN_001628c0(const char *name, u32 volume, u32 category, u32 options,
                 f32 leftVolume, f32 rightVolume);

/* Plays a packed numeric voice id with an optional suffix: btlPlayIndexedVoice's body (same parameters) with voice
 * category 2 instead of 0, inlined. */
static __inline u32 playPackedVoice(u32 packed, f32 fade, f32 leftVolume, f32 rightVolume)
{
    u32 first = packed >> 20;
    u32 second = (packed >> 8) & 0xfff;
    u32 suffix = (packed >> 4) & 0xf;

    if (second != 0 && first != 0) {
        char text[12];
        __2sprintf(text, DAT_0052a96c, first, second);
        if (suffix != 0) {
            __2sprintf(text, DAT_0052a980, text,
                       suffix == 1 ? DAT_0052a978 : DAT_0052a97c);
        }
        u8 opacity = (u8)(u32)(messageVoiceBankGet() * fade);
        return FUN_001628c0(text, opacity, 2, 0, leftVolume, rightVolume);
    }
    return 0;
}

/* Plays the packed voice queued in slot `index` (0 or 1), then clears the slot. */
u32 btlPlayPackedVoiceSlot(u32 index)
{
    if (index >= 2) {
        return 0;
    }
    u32 packed = DAT_00573cd8[index];
    if (packed == 0) {
        return 0;
    }
    u32 result = playPackedVoice(packed, 1.0f, 0.707f, 0.707f);
    DAT_00573cd8[index] = 0;
    return result;
}

} /* extern "C" */
