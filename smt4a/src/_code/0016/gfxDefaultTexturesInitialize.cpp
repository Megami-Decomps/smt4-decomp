/* NON_MATCHING: saved status/work/release-hook/cube-loop registers and null-move selection differ (107/107). */
#include "shard/W6_W6Match7_DefaultTextureWork.h"
#include "AsdSDK/Source/Sys/Mem/AsdMemory.h"
#include "AsdSDK/AsdMemUtil.h"

extern "C" {
extern DriverTextureAllocate *g_gfxAllocateCallback;
extern DriverTextureRelease *g_gfxReleaseCallback;
extern DefaultTextureGlobals g_textureBindingCache;

DefaultTexture2D *gfxTexture2DCreate(u32 mode);
DefaultTextureCube *gfxCubeTextureCreate(u32 mode);
void gfxTextureStorageUnbind(DefaultTextureStorage *storage);
void gfxTextureStorageRelease(u32 format, DefaultTextureStorage *storage);

static inline DefaultTextureScratch *createDefaultTextureScratch()
{
    if (g_gfxAllocateCallback == NULL) {
        return NULL;
    }
    DefaultTextureScratch *scratch = static_cast<DefaultTextureScratch *>(
        g_gfxAllocateCallback(ASD_HEAP_EXTRA, ASD_ALIGN_DEFAULT, 0, sizeof(DefaultTextureScratch)));
    if (scratch != NULL) {
        sysMemClear(scratch, sizeof(*scratch));
        scratch->unk00 = 0;
    }
    return scratch;
}

s32 gfxDefaultTexturesInitialize(DefaultTextureWork *work)
{
    s32 result = -1;
    g_textureBindingCache.work = work;
    sysMemClear(work, sizeof(*work));
    g_textureBindingCache.work->texture2D = gfxTexture2DCreate(0);
    g_textureBindingCache.work->cube = gfxCubeTextureCreate(0);
    DefaultTextureScratch *scratch = createDefaultTextureScratch();
    g_textureBindingCache.work->scratch = scratch;
    DefaultTexture2D *texture2D = g_textureBindingCache.work->texture2D;
    if (texture2D == NULL || g_textureBindingCache.work->cube == NULL || scratch == NULL) {
        if (texture2D != NULL) {
            gfxTextureStorageUnbind(&texture2D->storage);
            gfxTextureStorageRelease(texture2D->description.storageFormat, &texture2D->storage);
            if (g_gfxReleaseCallback != NULL) {
                g_gfxReleaseCallback(ASD_HEAP_EXTRA, ASD_ALIGN_DEFAULT, 0, texture2D);
            }
        }
        DefaultTextureCube *cube = g_textureBindingCache.work->cube;
        if (cube != NULL) {
            for (s32 face = 0; face < 6; ++face) {
                gfxTextureStorageUnbind(&cube->faces[face]);
                gfxTextureStorageRelease(cube->description.storageFormat, &cube->faces[face]);
            }
            if (g_gfxReleaseCallback != NULL) {
                g_gfxReleaseCallback(ASD_HEAP_EXTRA, ASD_ALIGN_DEFAULT, 0, cube);
            }
        }
        if (g_textureBindingCache.work->scratch != NULL && g_gfxReleaseCallback != NULL) {
            g_gfxReleaseCallback(ASD_HEAP_EXTRA, ASD_ALIGN_DEFAULT, 0, g_textureBindingCache.work->scratch);
        }
        if (g_gfxReleaseCallback != NULL) {
            g_gfxReleaseCallback(ASD_HEAP_EXTRA, ASD_ALIGN_DEFAULT, 0, g_textureBindingCache.work);
        }
    } else {
        result = 0;
    }
    g_textureBindingCache.initializationFlag = 1;
    sysMemClear(g_textureBindingCache.work->scratch, sizeof(DefaultTextureScratch));
    return result;
}
}
