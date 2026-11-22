#include "common.h"
#include "shard/W6_W6Match7_DefaultTextureWork.h"
#include "AsdSDK/Source/Sys/Mem/AsdMemory.h"
#include "AsdSDK/AsdMemUtil.h"

extern "C" {

typedef struct Block001230b8 {
    /* 0x000 */ u8 unk000[0x800];
    /* 0x800 */ s32 handle;
    /* 0x804 */ u8 unk804[0x50];
} Block001230b8;

typedef struct Holder001230b8 {
    /* 0x0 */ Block001230b8 *block;
    /* 0x4 */ u32 ready;
} Holder001230b8;

s32 FUN_00137c14(void);

extern DriverTextureRelease *g_gfxReleaseCallback; /* 0x44e334 */
extern Holder001230b8 DAT_004655f0;         /* 0x4655f0 */

/* Clears the block, opens its handle and publishes it (0); on failure hands the block back through the release callback and returns -1. */
s32 blockOpen(Block001230b8 *block)
{
    s32 result;
    s32 handle;

    DAT_004655f0.block = block;
    memClear(reinterpret_cast<void*>(block), 0x854);
    handle = FUN_00137c14();
    DAT_004655f0.block->handle = handle;
    if (handle != 0) {
        DAT_004655f0.ready = 1;
        result = 0;
    } else {
        if (g_gfxReleaseCallback != NULL) {
            g_gfxReleaseCallback(ASD_HEAP_EXTRA, ASD_ALIGN_DEFAULT, 0, DAT_004655f0.block);
        }
        DAT_004655f0.block = NULL;
        result = -1;
    }
    return result;
}

} /* extern "C" */
