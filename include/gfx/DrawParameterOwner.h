#ifndef GFX_DRAW_PARAMETER_OWNER_H
#define GFX_DRAW_PARAMETER_OWNER_H
#include "shard/W6_W6Match8_UiResourceParameters.h"
#include <stddef.h>
struct DrawParameterOwner {
    union {
        u32 words[5]; // 0x000
        struct {
            u32 flags;
            u32 process;
            u32 frame;
            u32 parameter;
            u32 resource;
        } control;
    };
    char lines[8][0x80]; // 0x014: the AOC board's message lines (control.resource of them)
    u8 enabled; // 0x414 (the AOC board: 1 shows the page cursor, 2 the busy spinner)
    u8 dirty; // 0x415
    u8 unk416[2]; // 0x416
    u32 spinnerFrame; // 0x418: frames the AOC board's spinner has run
    void *text; // 0x41C: the AOC board's text object (textDrawRangeFaded)
    UiResourceParameters parameters; // 0x420
};
typedef char DrawParameterOwnerControlLayoutCheck[sizeof(DrawParameterOwner) == 0x440 &&
    offsetof(DrawParameterOwner, control.flags) == 0 &&
    offsetof(DrawParameterOwner, control.process) == 4 &&
    offsetof(DrawParameterOwner, control.frame) == 8 &&
    offsetof(DrawParameterOwner, control.parameter) == 0xC &&
    offsetof(DrawParameterOwner, control.resource) == 0x10 &&
    offsetof(DrawParameterOwner, lines) == 0x14 && offsetof(DrawParameterOwner, enabled) == 0x414 &&
    offsetof(DrawParameterOwner, spinnerFrame) == 0x418 && offsetof(DrawParameterOwner, text) == 0x41C ? 1 : -1];
struct DrawParameterDefaults {
    u8 first[0x78]; // 0x000
    u8 second[0x48]; // 0x078
    u8 third[0x54]; // 0x0C0
    u8 fourth[0x310]; // 0x114
};
#endif
