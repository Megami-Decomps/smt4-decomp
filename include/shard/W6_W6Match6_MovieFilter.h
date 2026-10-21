#ifndef SHARD_W6_W6MATCH6_MOVIEFILTER_H
#define SHARD_W6_W6MATCH6_MOVIEFILTER_H

#include "common.h"

struct MovieFilterContext {
    s32 capacity;
    u8 *buffer;
};
struct MovieFilterFrame {
    u8 *y;
    u8 *u;
    u8 *v;
    u32 yPitch;
    u32 uPitch;
    u32 vPitch;
    u32 width;
    u32 height;
    s32 yQuantizer;
    s32 uvQuantizer;
    u32 format;
};
struct MovieDeblockParameters {
    u8 *inputY;
    u8 *inputU;
    u8 *inputV;
    u8 *outputY;
    u8 *outputU;
    u8 *outputV;
    u32 width;
    u32 height;
    u32 yPitch;
    u32 uvPitch;
    s32 yQuantizer;
    s32 uvQuantizer;
    u32 planeMask;
    u32 enabled;
};
struct MovieFilterAllocators {
    u8 *(*allocate)(u32);
    void (*release)(void *);
};

#endif
