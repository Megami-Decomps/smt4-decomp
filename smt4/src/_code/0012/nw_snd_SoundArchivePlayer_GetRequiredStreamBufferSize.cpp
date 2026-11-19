#include "sound/StreamSetup.h"

extern "C" {
s32 nw_snd_SoundArchive_ReadSoundArchivePlayerInfo(u32 soundId, StreamSetupInfo *info);

/* The stream buffer size the archive's streams need: 0xa000 bytes per stream channel. */
u32 nw_snd_SoundArchivePlayer_GetRequiredStreamBufferSize(StreamSetupState *state, u32 soundId)
{
    s32 channels = 0;
    StreamSetupInfo requirements;
    if (nw_snd_SoundArchive_ReadSoundArchivePlayerInfo(soundId, &requirements)) {
        channels = requirements.channels;
    }
    return channels * 0xa000;
}
}
