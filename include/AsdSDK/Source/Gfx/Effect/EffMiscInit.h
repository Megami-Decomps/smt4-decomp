#ifndef ASDSDK_SOURCE_GFX_EFFECT_EFFMISCINIT_H
#define ASDSDK_SOURCE_GFX_EFFECT_EFFMISCINIT_H

#include "AsdSDK/Source/Gfx/Effect/effMisc.h"
#include "AsdSDK/AsdDebug.h"
#include "AsdSDK/AsdMemAlloc.h"
#include "AsdSDK/Source/Sys/Mem/AsdMemory.h"
#include "runtime/String.h"
#include <string.h>

extern "C" {
extern const char g_effMiscHeaderSourceFileName[];
extern EffMiscKind g_effMiscKinds[];
}

/* The allocator shared by the effect object and its shared-resource record. */
static __inline void *effMiscAllocateZeroed(u32 size)
{
    asdDebugTrace(g_effMiscHeaderSourceFileName, 450);
    void *block = memAlloc(ASD_HEAP_EXTRA, ASD_ALIGN_DEFAULT, 0, size, 0x10, 1);
    rt_memclr(block, size);
    return block;
}

/* The same quaternion initialization used by effPolyThunderCreate. */
static __inline void effMiscSetIdentityRotation(EffMiscVec4 *rotation)
{
    memset(rotation, 0, sizeof(*rotation));
    rotation->w = 1.0f;
}

#endif
