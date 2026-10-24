/* NON_MATCHING: retail keeps two attribute-pointer copies in stack slots and uses a different register assignment around the per-attribute loop. */
#include "common.h"
#include <stddef.h>

/* One vertex attribute description (0x18 bytes). */
struct VertexAttribute {
    /* 0x00 */ u32 offset;
    /* 0x04 */ s32 components;
    /* 0x08 */ s32 type;
    /* 0x0C */ s32 stride;
    /* 0x10 */ s32 bufferSet;
    /* 0x14 */ u8 unk14;
    /* 0x15 */ u8 enabled;
    /* 0x16 */ u8 unk16[2];
};

/* A default attribute slot used when an attribute is disabled (0x10 bytes). */
struct DefaultAttribute {
    u8 unk00[0x10];
};

/* The resolved vertex layout handed to the GPU command writer. */
struct VertexLayout {
    /* 0x00 */ u32 baseAddress;
    /* 0x04 */ u32 attributeAddress[16];
    /* 0x44 */ u32 unk44;
    /* 0x48 */ u32 baseSize;
    /* 0x4C */ u32 attributeEnd[16];
    /* 0x8C */ u32 attributeStride[16];
    /* 0xCC */ u8 invalid; /* a bound buffer is missing */
    /* 0xCD */ u8 unkCD[3];
};

struct VertexSource {
    /* 0x00 */ u32 address;
    /* 0x04 */ u32 unk04;
    /* 0x08 */ u32 size;
};

struct VertexBuffer {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ u32 unk04;
    /* 0x08 */ VertexSource *source;
};

struct VertexBufferTable {
    /* 0x000 */ u8 unk000[0x80C];
    /* 0x80C */ VertexBuffer *baseBuffer;
    /* 0x810 */ VertexBuffer *buffers[16];
};

struct TextureBindingState {
    /* 0x000 */ u8 unk000[8];
    /* 0x008 */ u32 flags;
    /* 0x00C */ u8 unk00C[0x28C];
    /* 0x298 */ DefaultAttribute defaults[16];
    /* 0x398 */ u8 unk398[0xC0];
    /* 0x458 */ VertexAttribute attributes[16];
    /* 0x5D8 */ s32 baseBound;
    /* 0x5DC */ s32 secondaryBound;
    /* 0x5E0 */ u8 unk5E0[0xC0];
    /* 0x6A0 */ VertexLayout layout;
    /* 0x770 */ u8 unk770[0xAC];
    /* 0x81C */ u8 secondaryActive;
};
typedef char TextureBindingStateOffsetCheck[
    offsetof(TextureBindingState, attributes) == 0x458 && offsetof(TextureBindingState, layout) == 0x6A0 &&
    sizeof(VertexLayout) == 0xD0 && offsetof(TextureBindingState, secondaryActive) == 0x81C &&
    sizeof(VertexAttribute) == 0x18 ? 1 : -1];

extern "C" {
extern TextureBindingState *g_textureBindingState;
extern VertexBufferTable *DAT_005b4430;
u32 FUN_001a2634(u32 address);
void FUN_001aa030(s32 attribute);

/* Resolves the bound vertex buffers into the GPU vertex layout; marks the layout invalid when a buffer is missing. */
void FUN_00195af0(void)
{
    TextureBindingState *state = g_textureBindingState;
    VertexAttribute *attributes = state->attributes;
    DefaultAttribute *defaults = state->defaults;
    VertexLayout *layout = &state->layout;
    if (state->flags & 0x200)
        state->secondaryActive = state->secondaryBound != 0;
    layout->invalid = 0;
    if (state->baseBound != 0) {
        if (DAT_005b4430->baseBuffer != NULL) {
            VertexSource *source = DAT_005b4430->baseBuffer->source;
            layout->baseAddress = FUN_001a2634(source->address);
            layout->baseSize = source->size;
        } else {
            layout->invalid = 1;
            FUN_001aa030(0x10);
        }
    } else {
        FUN_001aa030(0x10);
    }
    for (s32 i = 0; i < 16; i++) {
        if (attributes[i].enabled != 0) {
            if (attributes[i].bufferSet != 0) {
                VertexBuffer *buffer = DAT_005b4430->buffers[i];
                if (buffer != NULL) {
                    VertexSource *source = buffer->source;
                    VertexLayout *current = &g_textureBindingState->layout;
                    if (i == 16) {
                        current->baseAddress = FUN_001a2634(source->address);
                        current->baseSize = source->size;
                        return;
                    }
                    VertexAttribute *attribute = &g_textureBindingState->attributes[i];
                    current->attributeAddress[i] = FUN_001a2634(source->address + attribute->offset);
                    current->attributeEnd[i] = attribute->offset + source->size;
                    s32 size;
                    if (attribute->type == 0x1400 || attribute->type == 0x1401)
                        size = 1;
                    else if (attribute->type == 0x1402)
                        size = 2;
                    else if (attribute->type == 0x1406)
                        size = 4;
                    else
                        size = 0;
                    s32 stride = attribute->stride;
                    if (stride == 0)
                        stride = attribute->components * size;
                    current->attributeStride[i] = stride;
                } else {
                    layout->invalid = 1;
                    FUN_001aa030(i);
                }
            } else {
                FUN_001aa030(i);
            }
        } else {
            layout->attributeEnd[i] = (u32)&defaults[i];
            layout->attributeStride[i] = 0;
        }
    }
}
}
