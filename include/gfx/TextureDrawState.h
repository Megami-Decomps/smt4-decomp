#ifndef GFX_TEXTUREDRAWSTATE_H
#define GFX_TEXTUREDRAWSTATE_H
#include "shard/W5_W5Match1_RecordKeys.h"
#include <stddef.h>

struct TextureDrawState {
    u8 prefix[0x10];
    u32 *commands;
    f32 parameters[8];
    Vector4 vectors[4];
    f32 extra;
    u8 padding78[0xC];
    f32 defaultValue;
    u8 padding88[0xA5];
    u8 noTexture;
};
typedef char TextureDrawStateOffsetsCheck[
    offsetof(TextureDrawState, commands) == 0x10 &&
    offsetof(TextureDrawState, parameters) == 0x14 &&
    offsetof(TextureDrawState, vectors) == 0x34 &&
    offsetof(TextureDrawState, extra) == 0x74 &&
    offsetof(TextureDrawState, defaultValue) == 0x84 &&
    offsetof(TextureDrawState, noTexture) == 0x12D ? 1 : -1];
#endif
