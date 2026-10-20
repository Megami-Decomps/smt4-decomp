#include "common.h"

extern "C" {

typedef struct SequenceTrack {
    /* 0x00 */ u8 unk00[5];
    /* 0x05 */ u8 opened;
    /* 0x06 */ u8 unk06[0x3A];
    /* 0x40 */ u8 unk40;
    /* 0x41 */ u8 unk41[3];
    /* 0x44 */ u32 unk44;
    /* 0x48 */ u8 unk48[2];
    /* 0x4A */ u8 unk4A;
} SequenceTrack;

void nw_snd_internal_driver_SequenceTrack_Open(SequenceTrack *track)
{
    track->unk4A = 0;
    track->unk40 = 0;
    track->unk44 = 0;
    track->opened = 1;
}

} /* extern "C" */
