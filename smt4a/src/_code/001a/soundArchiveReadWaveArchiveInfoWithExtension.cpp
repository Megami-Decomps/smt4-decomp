/* Reads the wave archive info of the wrapper's archive reference and, when an extension reader is attached and enabled, merges
 * in its own result for the same item. */
#include "shard/SoundArchiveWrapper.h"

extern "C" {

extern u32 nw_snd_internal_SoundArchiveFileReader_ReadWaveArchiveInfo(SoundArchiveRef *reader, u32 id, void *info);

u32 soundArchiveReadWaveArchiveInfoWithExtension(SoundArchiveWrapperA *archive, u32 id, void *info)
{
    u32 result = nw_snd_internal_SoundArchiveFileReader_ReadWaveArchiveInfo(archive->ref, id, info);

    if (archive->extension != NULL) {
        result |= archive->extension->readWaveArchiveInfoIfEnabled(id, info);
    }
    return result;
}

} /* extern "C" */
