#ifndef SHARD_W6_W6MATCH7_COMBINERSTATE_H
#define SHARD_W6_W6MATCH7_COMBINERSTATE_H

#include "shard/Shard0036.h"

struct CombinerChannel {
    /* 0x00 */ u8 function;
    /* 0x01 */ u8 operands[3];
    /* 0x04 */ u8 sources[3];
    /* 0x07 */ u8 scale;
    /* 0x08 */ u8 bufferInput;
};

struct CombinerStage {
    /* 0x00 */ CombinerChannel color;
    /* 0x09 */ CombinerChannel alpha;
    /* 0x12 */ Rgba constantColor;
    /* 0x16 */ u16 registerBase;
};

struct CombinerState {
    /* 0x00 */ CombinerStage stages[6];
    /* 0x90 */ Rgba bufferColor;
};

extern "C" void* gfxCombinerStateInitialize(void* storage);

#endif
