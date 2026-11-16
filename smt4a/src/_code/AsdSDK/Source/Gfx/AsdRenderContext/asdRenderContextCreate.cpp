#include <new>
#include "classes/FloatState.h"

/* The render context's three float-pair states, each leading its own block. */
struct RenderFirstState { FloatState state; u8 unk60[0x700 - sizeof(FloatState)]; };
struct RenderSecondState { FloatState state; u8 unk60[0x50c - sizeof(FloatState)]; };
struct RenderThirdState { FloatState state; u8 unk60[0x12c - sizeof(FloatState)]; };
struct RenderContextStorage {
    u8 unk0000[0x4a0];        // 0x0000
    RenderFirstState first;   // 0x04a0
    RenderSecondState second; // 0x0ba0
    RenderThirdState third;   // 0x10ac
    f32 colorScale[4];        // 0x11d8: all ones by default
    u8 unk11e8[0x1c0];        // 0x11e8
};
typedef char RenderContextStorageSize[sizeof(RenderContextStorage) == 0x13a8 ? 1 : -1];

extern "C" {
extern RenderContextStorage *g_renderCtx;
void *asdMemoryAllocTraced(u32 size, const char *file, s32 line);
void FUN_00145adc(RenderContextStorage *context);

/* Allocates and constructs the global render context. */
void asdRenderContextCreate(void)
{
    RenderContextStorage *context = new (asdMemoryAllocTraced(sizeof(RenderContextStorage),
        "c:\\SMT4F\\SMT4F\\AsdSDK\\Source\\Gfx\\AsdRenderContext.cpp", 36)) RenderContextStorage;
    if (context != NULL) {
        f32 *scale = context->colorScale;
        scale[0] = 1.0f;
        scale[1] = 1.0f;
        scale[2] = 1.0f;
        scale[3] = 1.0f;
    }
    g_renderCtx = context;
    FUN_00145adc(context);
}
}
