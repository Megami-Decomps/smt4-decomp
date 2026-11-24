#ifndef ASDSDK_SOURCE_GFX_TEXT_ASDTEXTA_H
#define ASDSDK_SOURCE_GFX_TEXT_ASDTEXTA_H

#include "common.h"

struct AsdText;

extern "C" {
AsdText *spriteHandleCreate(u32 type);
void positionStateSet(AsdText *object, s32 mode, u32 color, f32 scale);
}

#endif
