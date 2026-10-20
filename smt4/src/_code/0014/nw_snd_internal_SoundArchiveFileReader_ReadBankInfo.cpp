#include "nw/snd/SoundArchiveQuery.h"

extern "C" {

u32 *nw_snd_internal_SoundArchiveFile_InfoBlockBody_GetBankInfo(void *infoBlock);

/* Stores the first word of the archive's bank info in `out`; returns 1 if there is one. */
u8 nw_snd_internal_SoundArchiveFileReader_ReadBankInfo(SoundArchiveRef *ref, u32 unused, u32 *out)
{
    u32 *bank = nw_snd_internal_SoundArchiveFile_InfoBlockBody_GetBankInfo(ref->infoBlock);

    if (bank != NULL) {
        *out = *bank;
    }
    return bank != NULL;
}

} /* extern "C" */
