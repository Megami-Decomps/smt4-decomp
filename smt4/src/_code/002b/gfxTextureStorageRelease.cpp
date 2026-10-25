#include "shard/W6_W6Match7_DefaultTextureWork.h"

extern "C" {

extern DriverTextureRelease *g_gfxReleaseCallback;

/* Hands the texture's storage back through the release callback for its location, then forgets it. */
void gfxTextureStorageRelease(u32 location, DefaultTextureStorage *storage)
{
    switch (location) {
    case 0x2010000:
        break;
    case 0x2020000:
    case 0x2030000:
        if (storage->allocation.mainData != NULL && g_gfxReleaseCallback != NULL) {
            g_gfxReleaseCallback(storage->allocation.mainKind, 0x101, storage->allocation.addr, storage->allocation.mainData);
        }
        break;
    case 0x1010000:
        if (storage->allocation.subData != NULL && g_gfxReleaseCallback != NULL) {
            g_gfxReleaseCallback(0x10000, 0x101, storage->allocation.addr, storage->allocation.subData);
        }
        break;
    case 0x1020000:
    case 0x1030000:
        if (storage->allocation.mainData != NULL && g_gfxReleaseCallback != NULL) {
            g_gfxReleaseCallback(storage->allocation.mainKind, 0x101, storage->allocation.addr, storage->allocation.mainData);
        }
        if (storage->allocation.subData != NULL && g_gfxReleaseCallback != NULL) {
            g_gfxReleaseCallback(0x10000, 0x101, storage->allocation.addr, storage->allocation.subData);
        }
        break;
    }
    storage->allocation.mainData = NULL;
    storage->allocation.subData = NULL;
    storage->allocation.unk8 = 0;
}

} /* extern "C" */
