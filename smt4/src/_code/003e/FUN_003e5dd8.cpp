#include "common.h"

extern "C" {

u32 FUN_0036a5a8(u32 arg);
u32 nw_gfx_TransformAnimBlendOp_PostBlendAccurateScale(void);

/* Returns the blend-op scale mask ANDed with FUN_0036a5a8(arg). */
u32 FUN_003e5dd8(u32 unused, u32 arg)
{
    return nw_gfx_TransformAnimBlendOp_PostBlendAccurateScale() & FUN_0036a5a8(arg);
}

} /* extern "C" */
