#ifndef SHARD_W6_W6MATCH6_SORT_MENU_H
#define SHARD_W6_W6MATCH6_SORT_MENU_H

#include "shard/W6_W6Match8_UiResourceParameters.h"

struct SortMenuSprite { u8 data[0x8c]; };
struct SortMenuWork {
    u32 calculate, draw;
    UiResourceParameters parameters;
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

typedef char SortMenuWorkPacketLayoutCheck[
    offsetof(SortMenuWork, parameters) == 8 && offsetof(SortMenuWork, sprites) == 0x28 &&
    offsetof(SortMenuWork, ids) == 0x76c && sizeof(SortMenuWork) == 0x878 ? 1 : -1];

#endif
