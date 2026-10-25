#include "shard/W4_Match1b_RegisteredHandle.h"

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
extern RenderCtx *g_renderCtx;
s32 FUN_00158124(HandleRegistryView *registry);
void FUN_00157e98(void *target, const void *parameters);
u32 FUN_00152f54();
void FUN_00145e24(RenderCtx *context, u32 value);
void holderFlushPending(RegisteredHandle *holder);

u32 FUN_00146314()
{
    HandleRegistryView *registry = g_handleRegistry;
    if (FUN_00158124(registry)) {
        void *target = registry->target;
        const void *parameters;
        RenderParameterOverride *override = DAT_0056fcb8;
        if (override && (override->flags & 1) && (override->flags & 2)) {
            parameters = override->parameters;
        } else {
            parameters = registry->defaultParameters;
        }
        FUN_00157e98(target, parameters);
    }
    FUN_00145e24(g_renderCtx, FUN_00152f54());
    RegisteredHandle **end = g_handleRegistry->end;
    for (RegisteredHandle **holder = g_handleRegistry->begin; holder != end; ++holder) {
        holderFlushPending(*holder);
    }
    return 0;
}
}
