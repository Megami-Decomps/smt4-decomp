#include "common.h"

extern "C" {

typedef struct Voice {
    /* 0x00 */ int sdkVoices[2];
    /* 0x08 */ int count;
    /* 0x0C */ u8 unk0C[8];
    /* 0x14 */ u8 unk14;
    /* 0x15 */ u8 unk15;
    /* 0x16 */ u8 unk16;
    /* 0x17 */ u8 unk17;
    /* 0x18 */ u8 unk18[8];
    /* 0x20 */ u16 dirtyFlags;
    /* 0x22 */ u8 unk22[0x1E];
    /* 0x40 */ int priority;
} Voice;

void nw_snd_internal_driver_Voice_Start(Voice *voice)
{
    voice->unk15 = 1;
    voice->unk17 = 0;
    voice->dirtyFlags = voice->dirtyFlags | 1;
}

} /* extern "C" */
