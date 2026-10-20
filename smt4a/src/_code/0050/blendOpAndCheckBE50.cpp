#include "shard/Shard0050.h"

extern "C" {

extern u32 nw_gfx_TransformAnimBlendOp_PostBlendAccurateScale(u32 a, u32 b);
extern u32 FUN_0044be50(u32 b);

u32 blendOpAndCheckBE50(u32 a, u32 b)
{
    return nw_gfx_TransformAnimBlendOp_PostBlendAccurateScale(a, b) & FUN_0044be50(b);
}

} /* extern "C" */
