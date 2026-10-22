/* NON_MATCHING: Texture deleting hook has the correct release/free calls, but the base-vptr load/store is scheduled after the prologue instead of before it. */
#include "common.h"

struct TextureContentState {
    /* 0x00 */ const void *vtable;
};
extern "C" {
extern const u32 _ZTV9Obj4206e8[];
void textureContentRelease(TextureContentState *texture);
void asdMemFreeNonNull(void *block);
}

/* Destroy the texture-content base and release its allocation. */
extern "C" void FUN_0033f6b4(TextureContentState *texture)
{
    texture->vtable = _ZTV9Obj4206e8 + 6;
    textureContentRelease(texture);
    asdMemFreeNonNull(texture);
}
