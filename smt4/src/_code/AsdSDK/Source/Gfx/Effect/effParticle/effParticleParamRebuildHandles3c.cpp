/* Frees the type-6 handle array of `param` and rebuilds it: the first handle comes from `arg`, the rest are copies of it. */
#include "AsdSDK/Source/Gfx/Effect/effParticle.h"
#include "AsdSDK/AsdDebug.h"

extern "C" {

extern const char g_effParticleSourcePath[];

void resourceListDestroy(void *handle);
void asdMemFree(void *ptr);
void *memAlloc(int heap, int alignClass, int unk08, u32 size, int align, int fromFront);
void *FUN_002a4e98(void *arg);
void *FUN_00248f70(void *handle);

void effParticleParamRebuildHandles3c(EffParticleParam *param, void *arg)
{
    u32 count = param->source ? param->source->count : param->count;
    u32 i;
    u32 size;

    if (param->buffer40) {
        for (i = 0; i < count; i++) {
            resourceListDestroy(param->handles3c[i]);
        }
        asdMemFree(param->buffer40);
        param->handles3c = NULL;
        param->buffer40 = NULL;
    }
    size = count * 4;
    if (size != 0) {
        asdDebugTrace(g_effParticleSourcePath, 629);
        param->buffer40 = memAlloc(0x10000, 0x100, 0, size, 0x10, 1);
        param->handles3c = (void **)param->buffer40;
        param->handles3c[0] = FUN_002a4e98(arg);
        for (i = 1; i < count; i++) {
            void *copy = FUN_00248f70(param->handles3c[0]);
            param->handles3c[i] = copy;
        }
    }
}

} /* extern "C" */
