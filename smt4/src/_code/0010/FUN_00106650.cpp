/* NON_MATCHING: retail stores the duck volume with `add r0, r4, #488; vstmia r0!, {s0}` and the four frame counts from that written-back base; the build stores the volume with vstr and bases the stm at +492 (as in the smt4a twin FUN_0013ae58). */
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

extern "C" {

// Initialize sound defaults and load the voice-pan table if entry 1 is absent.
void FUN_00106650(void)
{
    SoundStateView *state = &DAT_004c5634;
    if (jyoucyuGetTableEntry(1) != 0) {
        return;
    }

    FUN_0010dd80();
    state->unk1e5 = 0x60;
    state->unk1e4 |= 3;
    state->unk1e6 = 0;
    asdSoundSetVolumeIfEnabled(1);

    SoundDuckSettingsView *duck = &state->unk1e8;
    duck->unk00 = 0.7f;
    duck->unk04 = 5;
    duck->unk08 = 30;
    duck->unk0c = 1;
    duck->unk10 = 20;
    asdSoundDuckSetup(1, duck->unk00, duck->unk04, duck->unk08, duck->unk0c, duck->unk10);

    u32 size = 0;
    if (state->unk1e0 == 0) {
        state->unk1e0 = fileLoadSync("snd/voice_pan.tbl", &size, 0);
    }
}
}
