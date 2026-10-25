#ifndef SHARD_W6_W6MATCH3_SCROLLSELECTION_H
#define SHARD_W6_W6MATCH3_SCROLLSELECTION_H

#include "shard/W6_W6Match2_ScrollList.h"

struct ScrollSelection : ScrollList {
    /* 0x28 */ u8 unk28[0x38];
    /* 0x60 */ u8 changed;
    /* 0x61 */ u8 unk61;
    /* 0x62 */ u8 locked;
};

struct StatusDownListIV {
    /* 0x000 */ u8 unk000[0x410];
    /* 0x410 */ u8 active;
    /* 0x411 */ u8 unk411[0x71];
    /* 0x482 */ u16 ids[16];
    /* 0x4A2 */ u8 unk4a2[0x20];
    /* 0x4C2 */ u8 scratch[16];
    /* 0x4D2 */ u8 unk4d2[2];
    /* 0x4D4 */ ScrollSelection selection;
    /* 0x538 */ u8 unk538[0x10];
    /* 0x548 */ u8 dirty;
};

typedef char StatusDownListIVSizeCheck[sizeof(StatusDownListIV) == 0x54c ? 1 : -1];

#ifdef __cplusplus
extern "C" {
#endif

void FUN_002a4964(ScrollSelection* list, s32 index);

#ifdef __cplusplus
}
#endif

#endif
