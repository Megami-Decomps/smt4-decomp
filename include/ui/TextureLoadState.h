#ifndef UI_TEXTURELOADSTATE_H
#define UI_TEXTURELOADSTATE_H
#include "common.h"
#include <stddef.h>
struct TextureLoadState {
    /* 0x00 */ u8 unk00[0x78];
    /* 0x78 */ s32 mode;
};
typedef char TextureLoadStateModeOffset[offsetof(TextureLoadState, mode) == 0x78 ? 1 : -1];
#endif
