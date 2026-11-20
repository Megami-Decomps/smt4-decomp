#include "AsdSDK/Source/Gfx/Effect/effParticle.h"
#include "AsdSDK/AsdDebug.h"
#include "AsdSDK/AsdMemAlloc.h"

extern "C" {

extern const char g_effParticleSourceFileName[];

void resourceListDestroy(void *handle);
void *effPartCreateFromSource(void *source);
void *effPartClone(void *handle);

/* Frees the type-6 handle array of `param` and rebuilds it: the first handle is built from `source`, the
 * rest are clones of it. */
void effParticleParamRebuildHandles3c(EffParticleParam *param, void *source)
{
    u32 count = param->source != NULL ? param->source->count : param->count;
    u32 i;
    u32 size;

    if (param->buffer40 != NULL) {
        for (i = 0; i < count; i++) {
            resourceListDestroy(param->handles3c[i]);
        }
        asdMemFree(param->buffer40);
        param->handles3c = NULL;
        param->buffer40 = NULL;
    }
    size = count * sizeof(void *);
    if (size != 0) {
        asdDebugTrace(g_effParticleSourceFileName, 629);
        param->buffer40 = memAlloc(0x10000, 0x100, 0, size, 0x10, 1);
        param->handles3c = (void **)param->buffer40;
        param->handles3c[0] = effPartCreateFromSource(source);
        for (i = 1; i < count; i++) {
            void *copy = effPartClone(param->handles3c[0]);
            param->handles3c[i] = copy;
        }
    }
}

} /* extern "C" */
