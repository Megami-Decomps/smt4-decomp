/* NON_MATCHING: Retail ldr r4, [pc, #140] differs from recovered bne 98. */
#include "common.h"
#include "shard/asdSoundSetVolumeIfEnabled.h"

// Private record views for DAT_004c5634, not shared API types.
struct SoundDuckSettingsView {
    f32 unk00; // 0x00
    s32 unk04; // 0x04
    s32 unk08; // 0x08
    s32 unk0c; // 0x0c
    s32 unk10; // 0x10
};

struct SoundStateView {
    u8 unk00[0x1e0];             // 0x000
    s32 unk1e0;                  // 0x1e0
    u8 unk1e4;                   // 0x1e4
    u8 unk1e5;                   // 0x1e5
    u8 unk1e6;                   // 0x1e6
    u8 unk1e7;                   // 0x1e7
    SoundDuckSettingsView unk1e8; // 0x1e8
};

extern "C" {
extern SoundStateView DAT_004c5634;

s32 jyoucyuGetTableEntry(u32 index);
void FUN_0010dd80(void);
void asdSoundDuckSetup(s32 enabled, f32 volume, s32 attack,
                       s32 hold, s32 mode, s32 release);
s32 fileLoadSync(const char* path, u32* size, u32 flags);

// Initialize sound defaults and load the voice-pan table if entry 1 is absent.
void FUN_00106650(void)
{
    if (jyoucyuGetTableEntry(1) != 0) {
        return;
    }

    FUN_0010dd80();
    DAT_004c5634.unk1e5 = 0x60;
    DAT_004c5634.unk1e4 |= 3;
    DAT_004c5634.unk1e6 = 0;
    asdSoundSetVolumeIfEnabled(1);

    const SoundDuckSettingsView defaults = { 0.7f, 5, 30, 1, 20 };
    DAT_004c5634.unk1e8 = defaults;
    asdSoundDuckSetup(1, defaults.unk00, defaults.unk04,
                      defaults.unk08, defaults.unk0c, defaults.unk10);

    u32 size = 0;
    if (DAT_004c5634.unk1e0 == 0) {
        DAT_004c5634.unk1e0 = fileLoadSync("snd/voice_pan.tbl", &size, 0);
    }
}
}
