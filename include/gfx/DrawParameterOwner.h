#ifndef GFX_DRAW_PARAMETER_OWNER_H
#define GFX_DRAW_PARAMETER_OWNER_H
#include "shard/W6_W6Match7_DrawParameters.h"
#include <stddef.h>
struct DrawParameterOwner {
    u32 words[5]; // 0x000
    u8 unk014[0x400]; // 0x014
    u8 enabled; // 0x414
    u8 dirty; // 0x415
    u8 unk416[2]; // 0x416
    u32 unk418; // 0x418
    u32 unk41C; // 0x41C
    Params002c312c parameters; // 0x420
};
struct DrawParameterDefaults {
    u8 first[0x78]; // 0x000
    u8 second[0x48]; // 0x078
    u8 third[0x54]; // 0x0C0
    u8 fourth[0x310]; // 0x114
};
#endif
