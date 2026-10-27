/* NON_MATCHING: all bic/orr immediates and the branch layout now match retail; only the register shape differs: retail loads the word into r2 and copies it to r0 (mov r0, r2) before the first branch, the build works in r0 throughout */
#include "common.h"

static inline u32 modeWithBothSources(u32 v)
{
    v &= ~0x40000000u;
    v &= ~0x200u;
    v |= 0x12000000u;
    v |= 0x440u;
    v |= 0x4000u;
    return v;
}

static inline u32 modeWithSecondSource(u32 v)
{
    v &= ~0x200u;
    v |= 0x12000000u;
    v |= 0x440u;
    v |= 0x4000u;
    v |= 0x40000000u;
    return v;
}

static inline u32 modeWithNoSource(u32 v)
{
    v &= ~0x52000000u;
    v &= ~0x440u;
    v |= 0x200u;
    return v;
}

extern "C" {

/* Rewrites the mode bits of the register word at +0x44a8 of `ctx` according to its 0x100000 / 0x80000000 flags. */
void FUN_003c3360(u32 unused, u8 *ctx)
{
    u32 *reg = (u32 *)(ctx + 0x44a8);
    u32 v = *reg;

    if (v & 0x100000) {
        *reg = modeWithBothSources(v);
    } else if (v & 0x80000000) {
        *reg = modeWithSecondSource(v);
    } else {
        *reg = modeWithNoSource(v);
    }
}

} /* extern "C" */
