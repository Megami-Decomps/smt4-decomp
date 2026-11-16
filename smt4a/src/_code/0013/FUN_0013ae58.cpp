/* NON_MATCHING: retail stores the duck level with `add r0, r4, #488; vstmia r0!, {s0}` and the four frame counts from that written-back base; the build stores the level with vstr and bases the stm at +492. */
/* Initializes voice playback defaults and loads the voice panning table. */
#include "shard/GlobalBlocks.h"
#include "AsdSDK/AsdLoadFileSyncDefault.h"
#include "AsdSDK/Source/Snd/AsdSoundSystem.h"
#include "kernel/jyoucyuGetTableEntry.h"

extern "C" {
void FUN_00143800(void);
void asdSoundDuckSetup(f32 level, s32 enable, u32 holdFrames,
                       u32 mode, u32 fadeInFrames, u32 fadeOutFrames);

/* The voice ducking parameters passed to asdSoundDuckSetup. */
struct DuckSettings {
    /* 0x00 */ f32 level;
    /* 0x04 */ u32 holdFrames;
    /* 0x08 */ u32 mode;
    /* 0x0C */ u32 fadeInFrames;
    /* 0x10 */ u32 fadeOutFrames;
};

void FUN_0013ae58(void)
{
    /* The voice state extends beyond the currently shared Block61978c prefix. */
    struct VoiceStateView {
        u8 voices[0x1E0];
        void *panTable;
        s8 flags;
        u8 volume;
        u8 currentVoice;
        u8 unk1E7;
        DuckSettings duck;
    };
    VoiceStateView *state = (VoiceStateView *)&DAT_0061978c;
    if (jyoucyuGetTableEntry(1) == 0) {
        FUN_00143800();
        state->volume = 0x60;
        state->flags |= 3;
        state->currentVoice = 0;
        asdSoundSetHasStream(1);
        DuckSettings *duck = &state->duck;
        duck->level = 0.6f;
        duck->holdFrames = 5;
        duck->mode = 30;
        duck->fadeInFrames = 1;
        duck->fadeOutFrames = 20;
        asdSoundDuckSetup(duck->level, 1, duck->holdFrames, duck->mode, duck->fadeInFrames, duck->fadeOutFrames);
        u32 size = 0;
        if (state->panTable == NULL) {
            state->panTable = asdLoadFileWithSize("snd/voice_pan.tbl", &size, 0);
        }
    }
}
}
