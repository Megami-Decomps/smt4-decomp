/* Reads the bank info of the wrapper's archive reference and, when an extension reader is attached and enabled, merges
 * in its own result for the same item. */
#include "shard/SoundArchiveWrapper.h"

extern "C" {

extern u32 nw_snd_internal_SoundArchiveFileReader_ReadBankInfo(SoundArchiveRef *reader, u32 id, void *info);

u32 soundArchiveReadBankInfoWithExtension(SoundArchiveWrapperA *archive, u32 id, void *info)
{
    u32 result = nw_snd_internal_SoundArchiveFileReader_ReadBankInfo(archive->ref, id, info);

    if (archive->extension != NULL) {
        result |= archive->extension->readBankInfoIfEnabled(id, info);
    }
    return result;
}

} /* extern "C" */
