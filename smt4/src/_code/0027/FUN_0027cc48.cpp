#include "common.h"

extern "C" {

typedef struct Work {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ u16 unk04;
    /* 0x06 */ u16 unk06;
    /* 0x08 */ u16 unk08;
    /* 0x0A */ u16 unk0A;
} Work;

extern Work *DAT_0044cd88;

void FUN_0027cc48(u16 a, u16 b)
{
    Work *work = DAT_0044cd88;

    DAT_0044cd88->unk08 = 0;
    work->unk0A = 0;
    work->unk04 = a;
    work->unk06 = b;
}

} /* extern "C" */
