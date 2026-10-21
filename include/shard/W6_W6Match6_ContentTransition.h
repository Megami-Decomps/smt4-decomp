#ifndef SHARD_W6_W6MATCH6_CONTENT_TRANSITION_H
#define SHARD_W6_W6MATCH6_CONTENT_TRANSITION_H

#include "common.h"

struct ShortJumpDestination { u16 map, area, place; };
struct ContentTransition {
    u8 unk00[0x20];
    u32 flags;
    u32 unk24;
    s32 state;
    s32 phase;
    u8 unk30[0xc];
    u16 sourceMap;
    u16 unk3e;
    u16 sourceArea;
    ShortJumpDestination destination;
};

#endif
