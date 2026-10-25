/* NON_MATCHING: register allocation only: retail uses r3 for the reloaded block pointer, r1 for the constant 1 and ip for the callback; the build uses r1, r0 and r3 */
#include "common.h"
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

typedef void ErrorCallback001230b8(s32 a, s32 b, s32 c);

s32 FUN_00137c14(void);

extern ErrorCallback001230b8 *g_gfxReleaseCallback; /* 0x44e334 */
extern Holder001230b8 DAT_004655f0;         /* 0x4655f0 */

/* Clears the block, opens its handle and publishes it (0); on failure reports through the error callback and returns -1. */
s32 blockOpen(Block001230b8 *block)
{
    s32 handle;

    DAT_004655f0.block = block;
    memClear(reinterpret_cast<void*>(block), 0x854);
    handle = FUN_00137c14();
    DAT_004655f0.block->handle = handle;
    if (handle != 0) {
        DAT_004655f0.ready = 1;
        return 0;
    }
    if (g_gfxReleaseCallback != NULL) {
        g_gfxReleaseCallback(0x10000, 0x100, 0);
    }
    DAT_004655f0.block = NULL;
    return -1;
}

} /* extern "C" */
