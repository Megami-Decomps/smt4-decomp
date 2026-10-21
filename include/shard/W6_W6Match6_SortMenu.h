#ifndef SHARD_W6_W6MATCH6_SORT_MENU_H
#define SHARD_W6_W6MATCH6_SORT_MENU_H

#include "common.h"

struct SortMenuParameters { u32 data[8]; };
struct SortMenuSprite { u8 data[0x8c]; };
struct SortMenuWork {
    u32 calculate, draw;
    SortMenuParameters parameters;
    SortMenuSprite sprites[13]; // 0x28
    u32 frame; // 0x744
    u8 unk748[5];
    u8 initialized, option, unk74f;
    u32 owner;
    u8 unk754[0x18];
    s16 ids[13]; // 0x76c
    u8 unk786[0xf2];
};
struct SortMenuSingleton { s8 useCount; u8 unk01[3]; SortMenuWork *work; };

#endif
