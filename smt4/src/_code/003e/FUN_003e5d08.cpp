#include "common.h"

extern "C" {

extern u32 FUN_0036a33c(u32 a);
extern u32 nw_gfx_TransformAnimBlendOp_PostBlendAccurateScale(void);

u32 FUN_003e5d08(u32 a, u32 b)
{
    return nw_gfx_TransformAnimBlendOp_PostBlendAccurateScale() & FUN_0036a33c(b);
}

} /* extern "C" */
