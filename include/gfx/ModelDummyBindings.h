#ifndef GFX_MODEL_DUMMY_BINDINGS_H
#define GFX_MODEL_DUMMY_BINDINGS_H
#include "common.h"
#include <stddef.h>

struct ModelDummyBinding {
    s16 node;
    s16 part;
};
struct ModelDummyBindings {
    /* 0x000 */ u8 unk000[0x100];
    /* 0x100 */ s32 primaryCount;
    /* 0x104 */ ModelDummyBinding bindings[64];
    /* 0x204 */ s32 count;
    /* 0x208 */ u32 unk208;
};
struct ModelNamedPart {
    u8 unk00[0x1C];
    const char *name;
};
struct ModelDummyNode {
    u32 unk00;
    ModelNamedPart *first;
    ModelNamedPart *second;
    ModelNamedPart *third;
    u8 unk10[0x1C];
};
struct ModelDummyNodeBinding {
    u16 node;
    u8 unk02[0x36];
};
typedef char ModelDummyBindingsLayoutCheck[
    sizeof(ModelDummyBindings) == 0x20C &&
    offsetof(ModelDummyBindings, primaryCount) == 0x100 &&
    offsetof(ModelDummyBindings, bindings) == 0x104 &&
    offsetof(ModelDummyBindings, count) == 0x204 &&
    sizeof(ModelDummyNode) == 0x2C &&
    sizeof(ModelDummyNodeBinding) == 0x38 &&
    offsetof(ModelNamedPart, name) == 0x1C ? 1 : -1];
#endif
