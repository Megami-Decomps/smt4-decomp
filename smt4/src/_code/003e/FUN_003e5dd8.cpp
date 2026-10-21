#include "shard/W4_Match1b_Node.h"

extern "C" {

u32 nw_gfx_CalculatedTransform_ConvertQuaternionToMatrix(NodeTransform* transform);
u32 nw_gfx_TransformAnimBlendOp_PostBlendAccurateScale(void);

/* Combines accurate-scale blending with quaternion-to-matrix validation. */
u32 FUN_003e5dd8(u32 unused, u32 arg)
{
    return nw_gfx_TransformAnimBlendOp_PostBlendAccurateScale() &
           nw_gfx_CalculatedTransform_ConvertQuaternionToMatrix(reinterpret_cast<NodeTransform*>(arg));
}

} /* extern "C" */
