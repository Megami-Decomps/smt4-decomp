#include "common.h"

extern "C" {

void rt_memcpy_w(void *dest, const void *source, s32 size);
u8 *nw_snd_internal_StreamSoundFile_InfoBlockBody_GetStreamSoundInfo(u32 body);

typedef struct Holder {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ u32 infoBlock;
} Holder;

/* Copies the 0x4C-byte stream sound info into `dest`; always returns 1. */
u32 FUN_001cd1e8(Holder *object, void *dest)
{
    u8 *info;

    info = nw_snd_internal_StreamSoundFile_InfoBlockBody_GetStreamSoundInfo(object->infoBlock);
    rt_memcpy_w(dest, info, 0x4C);
    return 1;
}

} /* extern "C" */
