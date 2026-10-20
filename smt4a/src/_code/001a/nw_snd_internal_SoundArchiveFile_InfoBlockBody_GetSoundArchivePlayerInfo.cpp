#include "common.h"

extern "C" {

typedef struct Holder {
    /* 0x00 */ u8 unk00[0x3C];
    /* 0x3C */ s32 offset;
} Holder;

/* Returns the address `offset` bytes (the value stored at 0x3C) past the object. */
u8 *nw_snd_internal_SoundArchiveFile_InfoBlockBody_GetSoundArchivePlayerInfo(Holder *object)
{
    return (u8 *)object + object->offset;
}

} /* extern "C" */
