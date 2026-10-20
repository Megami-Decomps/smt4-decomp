/* Copies the part of the particle parameter block `src` that its type uses into `dst`: plain values, or fresh clones of the objects and handle arrays. */
#include "AsdSDK/Source/Gfx/Effect/effParticle.h"
#include "AsdSDK/AsdDebug.h"

extern "C" {

extern const char g_effParticleSourcePath[];

void resourceListDestroy(void *handle);
void resourceDestroy(void *handle);
void asdMemFree(void *ptr);
void *memAlloc(int heap, int alignClass, int unk08, u32 size, int align, int fromFront);
void *FUN_00248f70(void *handle);
void *effBlockClone(void *handle);
void *handleRefIncrement(void *object);
void *handleBlockRefCreate(void *object);
void handleBlockUnref(void *object);
void handleBlockRefDrop(void *object);

void effParticleParamCopy(EffParticleParam *dst, EffParticleParam *src)
{
    u32 count;
    u32 i;
    u32 size;

    switch (src->type) {
    case 1:
    case 4:
    case 9:
        dst->unk54 = src->unk54;
        dst->unk58 = src->unk58;
        break;
    case 2:
        if (dst->object44) {
            handleBlockRefDrop(dst->object44);
        }
        dst->object44 = handleBlockRefCreate(src->object44);
        break;
    case 5:
        count = src->source->count;
        if (count == 0) {
            return;
        }
        if (dst->buffer38) {
            for (i = 0; i < count; i++) {
                resourceDestroy(dst->handles34[i]);
            }
            asdMemFree(dst->buffer38);
            dst->handles34 = NULL;
            dst->buffer38 = NULL;
        }
        size = count * 4;
        if (size == 0) {
            return;
        }
        asdDebugTrace(g_effParticleSourcePath, 316);
        dst->buffer38 = memAlloc(0x10000, 0x100, 0, size, 0x10, 1);
        dst->handles34 = (void **)dst->buffer38;
        for (i = 0; i < count; i++) {
            dst->handles34[i] = effBlockClone(src->handles34[0]);
        }
        break;
    case 6:
        count = src->source->count;
        if (count == 0) {
            return;
        }
        if (dst->buffer40) {
            for (i = 0; i < count; i++) {
                resourceListDestroy(dst->handles3c[i]);
            }
            asdMemFree(dst->buffer40);
            dst->handles3c = NULL;
            dst->buffer40 = NULL;
        }
        size = count * 4;
        if (size == 0) {
            return;
        }
        asdDebugTrace(g_effParticleSourcePath, 348);
        dst->buffer40 = memAlloc(0x10000, 0x100, 0, size, 0x10, 1);
        dst->handles3c = (void **)dst->buffer40;
        for (i = 0; i < count; i++) {
            dst->handles3c[i] = FUN_00248f70(src->handles3c[0]);
        }
        break;
    case 7:
        if (dst->object48) {
            handleBlockUnref(dst->object48);
        }
        dst->object48 = handleRefIncrement(src->object48);
        break;
    }
    dst->type = src->type;
}

} /* extern "C" */
