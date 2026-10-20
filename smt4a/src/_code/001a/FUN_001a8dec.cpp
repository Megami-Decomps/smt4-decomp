#include "common.h"

extern "C" {

u32 *nw_snd_internal_SoundArchiveFile_InfoBlockBody_GetBankInfo(u32 body);

typedef struct Owner {
    /* 0x00 */ u8 unk00[0x3C];
    /* 0x3C */ u32 infoBlock;
} Owner;

/* Copies the first word of the bank info into `*out`; returns whether the info exists. */
u8 FUN_001a8dec(Owner *owner, u32 unused, u32 *out)
{
    u32 *info;

    info = nw_snd_internal_SoundArchiveFile_InfoBlockBody_GetBankInfo(owner->infoBlock);
    if (info != NULL) {
        *out = *info;
    }
    return info != NULL;
}

} /* extern "C" */
