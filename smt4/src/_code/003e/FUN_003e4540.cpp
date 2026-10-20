#include "common.h"
#include "shard/S3GfxAnim.h"

extern "C" {

GfxTransform *FUN_003e4548(GfxAnimEvaluator *evaluator, GfxTransform *out, s32 index, s32 arg3);

/* Evaluates member `index` into `out` with FUN_003e4548's extra argument cleared. */
GfxTransform *FUN_003e4540(GfxAnimEvaluator *evaluator, GfxTransform *out, s32 index)
{
    return FUN_003e4548(evaluator, out, index, 0);
}

} /* extern "C" */
