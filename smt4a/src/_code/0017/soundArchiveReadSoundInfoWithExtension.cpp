#include "shard/SoundArchiveWrapper.h"

extern "C" s32 nw_snd_internal_SoundArchiveFileReader_ReadSoundInfo(SoundArchiveRef *reader, u32 soundId, SoundParams *out);

/* Reads the archive's sound info and merges the result from its extension if enabled. */
extern "C" s32 soundArchiveReadSoundInfoWithExtension(SoundArchiveWrapperA *archive, u32 soundId, SoundParams *out)
{
    s32 result = nw_snd_internal_SoundArchiveFileReader_ReadSoundInfo(archive->ref, soundId, out);
    if (archive->extension != NULL) {
        result |= archive->extension->readSoundInfoIfEnabled(soundId, out);
    }
    return result;
}
