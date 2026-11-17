#include "shard/W4_Match1b_RegisteredHandle.h"
#include "map/LmapMainGlobals.h"

extern "C" {
extern void *g_handleRegistry;
void moriModelContentLoadBody(RegisteredHandle *object, u32 flags);
void handleRegistryRegisterObject(void *registry, u32 handle);
void FUN_003fd924(u32 handle, u32 mode, u32 flags, f32 first, f32 second);
void moriModelUnitStartMaterialAnimation(u32 handle, u32 mode, u32 flags, f32 value);

void lmapInitializeActorHandles()
{
    LmapMainStateA *work = g_lmapMainState;
    if (!work) {
        return;
    }
    for (s32 index = 0; index < 32; ++index) {
        RegisteredHandle *object = work->actors[index];
        if (object) {
            if (!object->id) {
                moriModelContentLoadBody(object, 0);
            }
            u32 handle = work->actors[index]->id;
            handleRegistryRegisterObject(g_handleRegistry, handle);
            FUN_003fd924(handle, 0, 2, 0.0f, 0.0f);
            moriModelUnitStartMaterialAnimation(handle, 0, 2, 0.0f);
        }
    }
}
}
