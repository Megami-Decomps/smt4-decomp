#ifndef GFX_VERTEXATTRIBUTESTATE_H
#define GFX_VERTEXATTRIBUTESTATE_H
#include "common.h"
#include <stddef.h>

struct VertexAttributeDescription {
    /* 0x00 */ u8 unk00[2];
    /* 0x02 */ u8 index;
};
struct VertexAttributeSlot {
    /* 0x00 */ u32 address;
    /* 0x04 */ u8 format;
    /* 0x05 */ u8 unk05[0xB];
    /* 0x10 */ u32 stride;
    /* 0x14 */ u32 values[11];
    /* 0x40 */ u32 attribute;
    /* 0x44 */ s32 indices[11];
};
struct VertexAttributeState {
    /* 0x000 */ u32 dirty;
    /* 0x004 */ u8 unk004[0x150];
    /* 0x154 */ u8 enabled[12];
    /* 0x160 */ VertexAttributeSlot slots[12];
};
typedef char VertexAttributeStateLayoutCheck[sizeof(VertexAttributeSlot) == 0x70 &&
    offsetof(VertexAttributeSlot, attribute) == 0x40 &&
    offsetof(VertexAttributeState, enabled) == 0x154 &&
    offsetof(VertexAttributeState, slots) == 0x160 ? 1 : -1];
#endif
