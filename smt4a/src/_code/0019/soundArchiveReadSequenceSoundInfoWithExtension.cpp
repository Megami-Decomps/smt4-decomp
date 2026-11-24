/* Reads the sequence sound info of the wrapper's archive reference and, when an extension reader is attached and enabled, merges
 * in its own result for the same item. */
#include "shard/SoundArchiveWrapper.h"

extern "C" {

extern u32 nw_snd_internal_SoundArchiveFileReader_ReadSequenceSoundInfo(SoundArchiveRef *reader, u32 id, void *info);

u32 soundArchiveReadSequenceSoundInfoWithExtension(SoundArchiveWrapperA *archive, u32 id, void *info)
{
    u32 result = nw_snd_internal_SoundArchiveFileReader_ReadSequenceSoundInfo(archive->ref, id, info);

    if (archive->extension != NULL) {
        result |= archive->extension->readSequenceSoundInfoIfEnabled(id, info);
    }
    return result;
}

} /* extern "C" */
