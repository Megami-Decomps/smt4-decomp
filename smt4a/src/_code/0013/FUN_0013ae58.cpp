/* NON_MATCHING: voice flag load scheduling and duck-parameter stores differ from retail. */
/* Initializes voice playback defaults and loads the voice panning table. */
#include "shard/GlobalBlocks.h"
#include "AsdSDK/AsdLoadFileSyncDefault.h"
#include "AsdSDK/Source/Snd/AsdSoundSystem.h"

extern "C" {
s32 jyoucyuGetTableEntry(u32 index);
void FUN_00143800(void);
void asdSoundDuckSetup(f32 level, s32 enable, u32 holdFrames,
                       u32 mode, u32 fadeInFrames, u32 fadeOutFrames);

void FUN_0013ae58(void)
{
    /* The voice state extends beyond the currently shared Block61978c prefix. */
    struct VoiceStateView {
        u8 voices[0x1E0];
        void *panTable;
        u8 flags;
        u8 volume;
        u8 currentVoice;
        u8 unk1E7;
        f32 duckLevel;
        u32 holdFrames;
        u32 mode;
        u32 fadeInFrames;
        u32 fadeOutFrames;
    };
    VoiceStateView *state = (VoiceStateView *)&DAT_0061978c;
    if (jyoucyuGetTableEntry(1) == 0) {
        FUN_00143800();
        state->volume = 0x60;
        state->flags |= 3;
        state->currentVoice = 0;
        asdSoundSetHasStream(1);
        state->duckLevel = 0.6f;
        state->holdFrames = 5;
        state->mode = 30;
        state->fadeInFrames = 1;
        state->fadeOutFrames = 20;
        asdSoundDuckSetup(state->duckLevel, 1, state->holdFrames, state->mode,
                          state->fadeInFrames, state->fadeOutFrames);
        u32 size = 0;
        if (state->panTable == NULL) {
            state->panTable = asdLoadFileWithSize("snd/voice_pan.tbl", &size, 0);
        }
    }
}
}
