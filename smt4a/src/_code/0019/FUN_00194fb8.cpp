#include "nw/snd/SoundArchiveQuery.h"

extern "C" {

/* Queries the type of the archive's sound info, if it has one. */
void FUN_00194fb8(SoundArchiveRef *ref)
{
    SoundInfo *info = nw_snd_internal_SoundArchiveFile_InfoBlockBody_GetSoundInfo(ref->infoBlock);

    if (info != NULL) {
        nw_snd_internal_SoundArchiveFile_SoundInfo_GetSoundType(info);
    }
}

} /* extern "C" */
