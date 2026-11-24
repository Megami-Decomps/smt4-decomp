#include "shard/SoundArchiveWrapper.h"

/* Reads the archive's player info and merges the result from its extension if enabled. */
extern "C" s32 soundArchiveReadPlayerInfoWithExtension(SoundArchiveWrapperA *archive, u32 playerId, ArchivePlayerParams *out)
{
    s32 result = nw_snd_internal_SoundArchiveFileReader_ReadPlayerInfo(archive->ref, playerId, out);
    if (archive->extension != NULL) {
        result |= archive->extension->readPlayerInfoIfEnabled(playerId, out);
    }
    return result;
}
