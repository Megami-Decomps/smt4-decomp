/* NON_MATCHING: only the flag store: retail stores forceUpdate = 0 (r0) before loading the mode byte; armcc hoists the mode load above the store and uses r1 for the zero. */
#include "common.h"
#include <stddef.h>
#include "shard/W6_W6Match2_HelpResources.h"

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
    /* 0x0000 */ u8 unk0000[0x11F0];
    /* 0x11F0 */ TextureDesc *texture;
    /* 0x11F4 */ s8 forceUpdate;
    /* 0x11F5 */ u8 mode;
};

void FUN_001ac64c(TextureSize size, u32 format, u32 address);

/* Binds a texture (skipped if unchanged and not forced) and selects the mode. */
void FUN_0019f764(TextureState *state, TextureDesc *texture, u32 mode)
{
    if (state->forceUpdate != 0 || state->texture != texture) {
        state->texture = texture;
        if (texture != NULL) {
            TextureSize size = texture->size;
            FUN_001ac64c(size, texture->format, texture->address);
            state->mode = 3;
        }
    }
    state->forceUpdate = 0;
    if (mode != state->mode) {
        dataSubmitSelectedPresetBlock(mode);
        state->mode = mode;
    }
}

} /* extern "C" */
