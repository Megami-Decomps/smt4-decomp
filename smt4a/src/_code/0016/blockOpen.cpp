/* NON_MATCHING: register allocation only: retail uses r3 for the reloaded block pointer, r1 for the constant 1 and ip for the callback; the build uses r1, r0 and r3 */
#include "common.h"

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

typedef void ErrorCallback00160f90(s32 a, s32 b, s32 c);

void sysMemClear(Block00160f90 *block, s32 size);
s32 FUN_0017e844(void);

extern ErrorCallback00160f90 *DAT_00589190; /* 0x589190 */
extern Holder00160f90 DAT_005b4430;         /* 0x5b4430 */

/* Clears the block, opens its handle and publishes it (0); on failure reports through the error callback and returns -1. */
s32 blockOpen(Block00160f90 *block)
{
    s32 handle;

    DAT_005b4430.block = block;
    sysMemClear(block, 0x854);
    handle = FUN_0017e844();
    DAT_005b4430.block->handle = handle;
    if (handle != 0) {
        DAT_005b4430.ready = 1;
        return 0;
    }
    if (DAT_00589190 != NULL) {
        DAT_00589190(0x10000, 0x100, 0);
    }
    DAT_005b4430.block = NULL;
    return -1;
}

} /* extern "C" */
