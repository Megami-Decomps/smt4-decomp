/* NON_MATCHING: the force flag is now read through the 0x11E8 offset register (s8 field); retail still copies the texture size pair with ldm rather than ldrd and its flag store lands earlier. */
#include "common.h"
#include <stddef.h>
#include "AsdSDK/Source/Gfx/Model/AsdModel.h"

extern "C" {

/* A width/height pair. */
struct TextureSize {
    u32 width;
    u32 height;
};

/* A texture description: size at 0x14, address and format at 0x30 and 0x34. */
struct TextureDesc {
    /* 0x00 */ u8 unk00[0x14];
    /* 0x14 */ TextureSize size;
    /* 0x1C */ u8 unk1C[0x14];
    /* 0x30 */ u32 address;
    /* 0x34 */ u32 format;
};

/* The render state: the current texture and a texture-environment mode. */
struct TextureState {
    /* 0x0000 */ u8 unk0000[0x11E4];
    /* 0x11E4 */ TextureDesc *texture;
    /* 0x11E8 */ s8 forceUpdate;
    /* 0x11E9 */ u8 mode;
};

void FUN_0014e850(TextureSize size, u32 format, u32 address);

/* Binds a texture (skipped if unchanged and not forced) and selects the mode. */
void FUN_002aa200(TextureState *state, TextureDesc *texture, u32 mode)
{
    if ((state->forceUpdate != 0 || state->texture != texture) && (state->texture = texture, texture != NULL)) {
        FUN_0014e850(texture->size, texture->format, texture->address);
        state->mode = 3;
    }
    state->forceUpdate = 0;
    if (state->mode != mode) {
        FUN_00145d6c(mode);
        state->mode = mode;
    }
}

} /* extern "C" */
