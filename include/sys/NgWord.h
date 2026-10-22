#ifndef SYS_NGWORD_H
#define SYS_NGWORD_H

#include "common.h"

struct NgWordState {
    /* 0x00 */ u8 unk00[0x19];
    /* 0x19 */ u8 loaded;
    /* 0x1A */ u8 unk1A[0xE];
    /* 0x28 */ void *buffer;
};

#endif
