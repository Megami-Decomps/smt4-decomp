#include "shard/W4_Match1b_RegisteredHandle.h"
#include "code/Code0015.h"
#include "camp/RenderCtxA.h"

struct HandleRegistryView {
    /* 0x00 */ u8 unk00[0xc];
    /* 0x0c */ void *defaultParameters;
    /* 0x10 */ void *target;
    /* 0x14 */ u8 unk14[4];
    /* 0x18 */ RegisteredHandle **begin;
    /* 0x1c */ RegisteredHandle **end;
};
struct RenderParameterOverride {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ u32 flags;
    /* 0x08 */ u8 unk08[8];
    /* 0x10 */ u8 parameters[1];
};
struct RenderCtx;

extern "C" {
extern HandleRegistryView *g_handleRegistry;
extern RenderParameterOverride *DAT_0056fcb8;
s32 FUN_00158124(HandleRegistryView *registry);
void modelUploadStereoMatrices(void *target, const void *parameters);
void effectRestoreSavedRenderPairs(RenderCtxA *context, u32 value);
void holderFlushPending(RegisteredHandle *holder);

// The render parameters in force: the override's while both its low flag bits are set, else the
// registry's (the same selection as FUN_00145f94's activeAnimations).
static __inline const void *activeParameters(HandleRegistryView *registry)
{
    RenderParameterOverride *override = DAT_0056fcb8;
    if (override != NULL && (override->flags & 1) && (override->flags & 2)) {
        return override->parameters;
    }
    return registry->defaultParameters;
}

u32 FUN_00146314()
{
    HandleRegistryView *registry = g_handleRegistry;
    if (FUN_00158124(registry)) {
        void *target = registry->target;
        modelUploadStereoMatrices(target, activeParameters(registry));
    }
    effectRestoreSavedRenderPairs(g_renderCtx, asdCameraGetSavedRenderPairs());
    RegisteredHandle **end = g_handleRegistry->end;
    for (RegisteredHandle **holder = g_handleRegistry->begin; holder != end; ++holder) {
        holderFlushPending(*holder);
    }
    return 0;
}
}
