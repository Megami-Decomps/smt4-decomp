#include "sound/StreamSetup.h"

extern "C" {
s32 nw_snd_SoundArchive_ReadSoundArchivePlayerInfo(u32 soundId, StreamSetupInfoA *info);

/* The stream buffer size the archive's streams need: 0xa000 bytes per stream channel. */
u32 nw_snd_SoundArchivePlayer_GetRequiredStreamBufferSize(StreamSetupStateA *state, u32 soundId)
{
    u32 channels = 0;
    StreamSetupInfoA requirements;
    if (nw_snd_SoundArchive_ReadSoundArchivePlayerInfo(soundId, &requirements))
        channels = requirements.channels;
    return channels * 0xA000;
}
}
