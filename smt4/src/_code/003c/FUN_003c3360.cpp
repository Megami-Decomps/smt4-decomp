/* NON_MATCHING: retail applies the mask/set pairs as separate bic/orr immediates (suggests bitfield writes) with the original word kept in r2; the constant-mask form here compiles to conditional execution with pool constants */
#include "common.h"

extern "C" {

/* Rewrites the mode bits of the register word at +0x44a8 of `ctx` according to its 0x100000 / 0x80000000 flags. */
void FUN_003c3360(u32 unused, u8 *ctx)
{
    u32 *reg = (u32 *)(ctx + 0x44a8);
    u32 v = *reg;

    if (v & 0x100000) {
        v = (v & 0xbffffdff) | 0x12004440;
    } else {
        if (!(v & 0x80000000)) {
            *reg = (v & 0xadfffbbf) | 0x200;
            return;
        }
        v = (v & 0xfffffdff) | 0x52004440;
    }
    *reg = v;
}

} /* extern "C" */
