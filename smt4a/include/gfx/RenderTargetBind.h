#ifndef SMT4A_GFX_RENDER_TARGET_BIND_H
#define SMT4A_GFX_RENDER_TARGET_BIND_H

#include "AsdSDK/Source/Sys/Gx/AsdGxRenderSystem.h"

extern "C" void FUN_00154d68(const AsdGxRenderBuffer *color, const AsdGxRenderBuffer *depth,
                             u32 format, s32 samples);

#endif
