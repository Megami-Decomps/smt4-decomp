#ifndef SAVELOADUI_SAVELOADSTATE_H
#define SAVELOADUI_SAVELOADSTATE_H

#include "common.h"

struct SaveLoadThreadA {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ u32 unk08;
};

struct SaveLoadProcessA {
    /* 0x00 */ u8 unk00[5];
    /* 0x05 */ u8 sdCardDetected;
};

struct SaveLoadUIBaseA {
    /* 0x00 */ s8 unk00;
    /* 0x01 */ s8 unk01;
};

typedef char SaveLoadStateLayoutCheck[sizeof(SaveLoadThreadA) == 0xC && sizeof(SaveLoadProcessA) == 6 && sizeof(SaveLoadUIBaseA) == 2 ? 1 : -1];

#endif
