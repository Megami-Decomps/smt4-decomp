#include "shard/Shard0043.h"
#include "nw/math/MTX44Transform.h"

extern "C" {

/* nn::math::ARMv6::MTX44TranslateC_FAST, out of line: builds a translation matrix (identity with the
 * translation in the last column) from a vector. */
void nn_math_ARMv6_MTX44TranslateC_FAST(u32 *matrix, const u32 *translation)
{
    nw::math::MTX44Translate((nw::math::MTX44 *)matrix, (const nw::math::VEC3 *)translation);
}

} /* extern "C" */
