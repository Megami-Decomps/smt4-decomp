/* NON_MATCHING: only the initial bit extraction is scheduled before the prologue vpush (retail lsl follows vpush); the pool order now matches. */
#include "common.h"
#include "util/CalleeContracts.h"

extern "C" {
void textFormatBuffer(char* output, const char* format, ...);
u32 FUN_001628c0(const char* name, u32 volume, s32 category, s32 flags, float gain, float pitch);
extern const char DAT_0052a96c[];
extern const char DAT_0052a978[];
extern const char DAT_0052a97c[];
extern const char DAT_0052a980[];

// Play an indexed sound, optionally choosing its suffixed resource variant.
u32 FUN_0047f4cc(u32 sound, float volume, float gain, float pitch)
{
    u32 group = (sound >> 8) & 0xfff;
    u32 index = sound >> 20;
    u32 variant = (sound >> 4) & 0xf;
    char name[16];
    if (group != 0 && index != 0) {
        textFormatBuffer(name, DAT_0052a96c, index, group);
        if (variant != 0) {
            textFormatBuffer(name, DAT_0052a980, name,
                             variant == 1 ? DAT_0052a978 : DAT_0052a97c);
        }
        u32 baseVolume = FUN_0014af98();
        return FUN_001628c0(name, (u32)(baseVolume * volume) & 0xff, 2, 0, gain, pitch);
    }
    return 0;
}
}
