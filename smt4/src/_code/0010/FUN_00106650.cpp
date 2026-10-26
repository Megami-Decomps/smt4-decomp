/* NON_MATCHING: the stores and call arguments share registers as in retail; retail loads the state address before the first call, keeps the status byte update in r0 and stores the volume with a post-incrementing `vstmia r0!` before the integer `stm`. */
#include "common.h"
#include "shard/W6_W6Match7_SoundInit.h"

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
}

// Records the sound-ducking settings and applies them.
static __inline void soundDuckConfigure(SoundDuckSettingsView *settings, f32 volume, s32 attack,
                                        s32 hold, s32 mode, s32 release)
{
    settings->unk00 = volume;
    settings->unk04 = attack;
    settings->unk08 = hold;
    settings->unk0c = mode;
    settings->unk10 = release;
    asdSoundDuckSetup(1, volume, attack, hold, mode, release);
}

extern "C" {

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

    soundDuckConfigure(&DAT_004c5634.unk1e8, 0.7f, 5, 30, 1, 20);

    u32 size = 0;
    if (DAT_004c5634.unk1e0 == 0) {
        DAT_004c5634.unk1e0 = fileLoadSync("snd/voice_pan.tbl", &size, 0);
    }
}
}
