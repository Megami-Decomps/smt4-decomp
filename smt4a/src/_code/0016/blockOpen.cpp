#include "common.h"
#include "shard/W6_W6Match7_DefaultTextureWork.h"
#include "AsdSDK/Source/Sys/Mem/AsdMemory.h"

extern "C" {

typedef struct Block00160f90 {
    /* 0x000 */ u8 unk000[0x800];
    /* 0x800 */ s32 handle;
    /* 0x804 */ u8 unk804[0x50];
} Block00160f90;

typedef struct Holder00160f90 {
    /* 0x0 */ Block00160f90 *block;
    /* 0x4 */ u32 ready;
} Holder00160f90;

void sysMemClear(Block00160f90 *block, s32 size);
s32 FUN_0017e844(void);

extern DriverTextureRelease *g_gfxReleaseCallback; /* 0x589190 */
extern Holder00160f90 DAT_005b4430;         /* 0x5b4430 */

/* Clears the block, opens its handle and publishes it (0); on failure hands the block back through the release callback and returns -1. */
s32 blockOpen(Block00160f90 *block)
{
    s32 result;
    s32 handle;

    DAT_005b4430.block = block;
    sysMemClear(block, 0x854);
    handle = FUN_0017e844();
    DAT_005b4430.block->handle = handle;
    if (handle != 0) {
        DAT_005b4430.ready = 1;
        result = 0;
    } else {
        if (g_gfxReleaseCallback != NULL) {
            g_gfxReleaseCallback(ASD_HEAP_EXTRA, ASD_ALIGN_DEFAULT, 0, DAT_005b4430.block);
        }
        DAT_005b4430.block = NULL;
        result = -1;
    }
    return result;
}

} /* extern "C" */
