#include "common.h"

extern "C" {

/* Object with counters at 0x310/0x314/0x350 and an owned handle at 0x318. */
typedef struct {
    u8 unk000[0x310];
    u32 unk310;         /* 0x310 */
    u32 unk314;         /* 0x314 */
    void *handle;       /* 0x318 */
    u8 unk31c[0x34];
    u32 unk350;         /* 0x350 */
} Owner;

/* Global block with a flag word at 0x754. */
typedef struct {
    u8 unk000[0x754];
    u32 flags;          /* 0x754 */
} GlobalBlock;

int FUN_00131968(...);
int FUN_002b486c(Owner *owner);
int FUN_002b4b88(void *handle, int (*callback)(...));

extern GlobalBlock *g_aocMain;

/* Tears the owner down: clears its counters, releases its handle with FUN_00131968, then clears flag 0x10000 in the global block. */
void FUN_002ba9ac(Owner *owner)
{
    owner->unk310 = 0;
    owner->unk314 = 0;
    owner->unk350 = 0;
    if (owner->handle != NULL) {
        FUN_002b4b88(owner->handle, FUN_00131968);
        owner->handle = NULL;
    }
    FUN_002b486c(owner);
    g_aocMain->flags = g_aocMain->flags & ~0x10000;
}

} /* extern "C" */
