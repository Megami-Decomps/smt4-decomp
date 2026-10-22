/* NON_MATCHING: channel bitfields and ADPCM setup recovered; argument preservation, conditional result moves and dirty-flag scheduling still differ. */
#include "common.h"

struct SoundWaveInfo {
    /* 0x00 */ u8 format;
    /* 0x01 */ u8 unk01[3];
    /* 0x04 */ s32 sampleCount;
};

struct SoundChannelVoice {
    /* 0x00 */ u32 channel;
    /* 0x04 */ u8 unk04[0x1A];
    /* 0x1E */ u16 status : 2;
    u16 format : 2;
    u16 reserved : 12;
    /* 0x20 */ s32 sampleCount;
    /* 0x24 */ u8 unk24[0x48];
    /* 0x6C */ u16 dirtyFlags;
};

extern "C" {
extern u8 g_dspsndState;
SoundWaveInfo* FUN_00129010(u32 wave);
void* FUN_0013ac6c(u32 wave, u32 index);
u8 nn_snd_CTR_Dspsnd_SetChannelAdpcmParam(void* state, u8 channel, const void* parameters);

// Prepare the channel's format, length and optional ADPCM decoder parameters.
u32 FUN_001294e0(SoundChannelVoice* voice, u32 wave, u32 unusedA, u32 unusedB, u32 index)
{
    SoundWaveInfo* info = FUN_00129010(wave);
    if (info->format == 2) {
        void* adpcm = FUN_0013ac6c(wave, index);
        if (adpcm != NULL) {
            nn_snd_CTR_Dspsnd_SetChannelAdpcmParam(&g_dspsndState, (u8)voice->channel, adpcm);
        }
    }
    voice->status = 1;
    voice->format = info->format;
    voice->sampleCount = info->sampleCount < 0 ? 0 : info->sampleCount;
    voice->dirtyFlags |= 2;
    return 1;
}
}
