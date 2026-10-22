/* NON_MATCHING: register allocation only: retail holds the callback in ip and loads the data words into r3; built uses r3 and r0 */
#include "common.h"

extern "C" {

typedef void (*GfxReleaseCallback)(u32 kind, u32 op, u32 addr);

extern GfxReleaseCallback g_gfxReleaseCallback;

typedef struct {
    u32 mainData;    /* 0x00 */
    u32 subData;     /* 0x04 */
    u32 unk8;        /* 0x08 */
    u8 unkC[0x3c - 0xc];
    u32 mainKind;    /* 0x3c */
    u32 addr;        /* 0x40 */
} GfxTextureStorage;

/* Hands the texture's storage back through the release callback for its location, then forgets it. */
void gfxTextureStorageRelease(s32 location, GfxTextureStorage *storage)
{
    switch (location) {
    case 0x2010000:
        break;
    case 0x2020000:
    case 0x2030000:
        if (storage->mainData != 0 && g_gfxReleaseCallback != NULL) {
            g_gfxReleaseCallback(storage->mainKind, 0x101, storage->addr);
        }
        break;
    case 0x1010000:
        if (storage->subData != 0 && g_gfxReleaseCallback != NULL) {
            g_gfxReleaseCallback(0x10000, 0x101, storage->addr);
        }
        break;
    case 0x1020000:
    case 0x1030000:
        if (storage->mainData != 0 && g_gfxReleaseCallback != NULL) {
            g_gfxReleaseCallback(storage->mainKind, 0x101, storage->addr);
        }
        if (storage->subData != 0 && g_gfxReleaseCallback != NULL) {
            g_gfxReleaseCallback(0x10000, 0x101, storage->addr);
        }
        break;
    }
    storage->mainData = 0;
    storage->subData = 0;
    storage->unk8 = 0;
}

} /* extern "C" */
