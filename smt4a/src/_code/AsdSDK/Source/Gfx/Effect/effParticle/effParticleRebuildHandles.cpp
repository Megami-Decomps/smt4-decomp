/* Rebuilds the type-5 handle array of a particle parameter block: frees the old handles, then
 * allocates one handle per particle (the first created from `init`, the rest cloned from it). */
#include "AsdSDK/Source/Gfx/Effect/effParticle.h"
#include "AsdSDK/AsdDebug.h"

extern "C" {

extern const char DAT_00544b70[]; /* __FILE__ of effParticle.cpp */

void *memAlloc(int, int, int, u32, int, int);
void asdMemFree(void *ptr);
void resourceDestroy(void *handle);
void *FUN_00222180(void *handle);
void *FUN_00243c24(void *init);

void effParticleRebuildHandles(EffParticleParam *param, void *init)
{
    u32 count = param->source != NULL ? param->source->count : param->count;
    u32 i;
    u32 size;

    if (param->buffer38 != NULL) {
        for (i = 0; i < count; i++) {
            resourceDestroy(param->handles34[i]);
        }
        asdMemFree(param->buffer38);
        param->handles34 = NULL;
        param->buffer38 = NULL;
    }
    if ((size = count * 4) != 0) {
        asdDebugTrace(DAT_00544b70, 0x242);
        param->buffer38 = memAlloc(0x10000, 0x100, 0, size, 0x10, 1);
        param->handles34 = (void **)param->buffer38;
        param->handles34[0] = FUN_00243c24(init);
        for (i = 1; i < count; i++) {
            param->handles34[i] = FUN_00222180(param->handles34[0]);
        }
    }
}

} /* extern "C" */
