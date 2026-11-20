#ifndef GFX_VERTEXATTRIBUTESTATE_H
#define GFX_VERTEXATTRIBUTESTATE_H
#include "common.h"
#include <stddef.h>

/* nn::gr::CTR::BindSymbol: a shader symbol binding (shader and symbol type, register range, name). */
struct BindSymbol {
    BindSymbol(u8 shaderType, u8 symbolType)
        : shaderType(shaderType), symbolType(symbolType), index(0xFF), end(0xFF), name(NULL) {}
    /* 0x00 */ u8 shaderType;
    /* 0x01 */ u8 symbolType;
    /* 0x02 */ u8 index;     /* first register, 0xFF while unbound */
    /* 0x03 */ u8 end;       /* last register */
    /* 0x04 */ const char *name;
};
typedef char BindSymbolLayoutCheck[sizeof(BindSymbol) == 8 && offsetof(BindSymbol, index) == 2 &&
    offsetof(BindSymbol, name) == 4 ? 1 : -1];

/* nn::gr::CTR::BindSymbolVSInput: a vertex shader input (shader type 0, symbol type 1); `index` is its input register. */
struct VertexAttributeDescription : BindSymbol {
    VertexAttributeDescription() : BindSymbol(0, 1) {}
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
