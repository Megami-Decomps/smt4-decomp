/* Returns the sound type of the sound with this archive reference's key, or 0 if there is none. */
#include "nw/snd/SoundArchiveQuery.h"

extern "C" {

s32 FUN_00141fd8(SoundArchiveRef *ref)
{
    SoundInfo *info = nw_snd_internal_SoundArchiveFile_InfoBlockBody_GetSoundInfo(ref->infoBlock);

    if (info != NULL) {
        return nw_snd_internal_SoundArchiveFile_SoundInfo_GetSoundType(info);
    }
    return 0;
}

}
