#include "shard/W4_Match1b_RegisteredHandle.h"

struct LmapActorHandles {
    /* 0x000 */ u8 unk000[0xa54];
    /* 0xa54 */ RegisteredHandle *actors[32];
};

extern "C" {
extern LmapActorHandles *g_lmapMainState;
extern void *g_handleRegistry;
void FUN_0040aad4(RegisteredHandle *object, u32 flags);
void handleRegistryRegisterObject(void *registry, u32 handle);
void FUN_003fd924(u32 handle, u32 mode, u32 flags, f32 first, f32 second);
void FUN_003fd7c0(u32 handle, u32 mode, u32 flags, f32 value);

void lmapInitializeActorHandles()
{
    LmapActorHandles *work = g_lmapMainState;
    if (!work) {
        return;
    }
    for (s32 index = 0; index < 32; ++index) {
        RegisteredHandle *object = work->actors[index];
        if (object) {
            if (!object->id) {
                FUN_0040aad4(object, 0);
            }
            u32 handle = work->actors[index]->id;
            handleRegistryRegisterObject(g_handleRegistry, handle);
            FUN_003fd924(handle, 0, 2, 0.0f, 0.0f);
            FUN_003fd7c0(handle, 0, 2, 0.0f);
        }
    }
}
}
