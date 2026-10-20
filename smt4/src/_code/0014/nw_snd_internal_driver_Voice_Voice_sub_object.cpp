#include "common.h"

extern "C" {

typedef struct Voice {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ u32 unk04;
    /* 0x08 */ u8 unk08[4];
    /* 0x0C */ u32 unk0C;
    /* 0x10 */ u8 unk10[4];
    /* 0x14 */ u8 unk14;
    /* 0x15 */ u8 unk15;
    /* 0x16 */ u8 unk16;
    /* 0x17 */ u8 unk17;
    /* 0x18 */ u8 unk18[8];
    /* 0x20 */ u16 unk20;
    /* 0x22 */ u8 unk22[0x36];
    /* 0x58 */ u32 unk58;
    /* 0x5C */ u32 unk5C;
} Voice;

void nw_snd_internal_driver_Voice_Voice_sub_object(Voice *voice)
{
    voice->unk0C = 0;
    voice->unk14 = 0;
    voice->unk15 = 0;
    voice->unk16 = 0;
    voice->unk17 = 0;
    voice->unk20 = 0;
    voice->unk58 = 0;
    voice->unk5C = 0;
    voice->unk00 = 0;
    voice->unk04 = 0;
}

} /* extern "C" */
