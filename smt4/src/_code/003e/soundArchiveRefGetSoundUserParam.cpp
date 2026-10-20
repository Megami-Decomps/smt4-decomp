/* Returns the user parameter of the sound with this archive reference's key (0 if there is none). */
#include "nw/snd/SoundArchiveQuery.h"

extern "C" {

extern u32 nw_snd_internal_SoundArchiveFile_SoundInfo_GetUserParam(SoundInfo *info);

u32 soundArchiveRefGetSoundUserParam(SoundArchiveRef *ref)
{
    SoundInfo *info = nw_snd_internal_SoundArchiveFile_InfoBlockBody_GetSoundInfo(ref->infoBlock);

    if (info != NULL) {
        return nw_snd_internal_SoundArchiveFile_SoundInfo_GetUserParam(info);
    }
    return 0;
}

}
